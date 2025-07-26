module.exports = grammar({
    name: "http2",

    extras: () => [/ /],
    conflicts: ($) => [[$._block], [$.request], [$.source_file]],

    rules: {
        source_file: ($) =>
            seq(
                $._block,
                repeat(seq($.separator, $._block)),
                repeat(choice($._nl, $.separator)),
            ),
        _block: ($) =>
            seq(
                repeat(choice($.variable_declaration, $._nl)),
                choice($.request, $.response),
                repeat(choice($.variable_declaration, $._nl)),
            ),
        request: ($) =>
            seq(
                seq($.start_line, $._nl),
                repeat(seq($.header, $._nl)),
                optional(seq($._nl, $.body, $._nl)),
            ),
        response: ($) =>
            seq(
                $.response_start_line,
                $._nl,
                repeat(seq($.header, $._nl)),
                $._nl,
                optional(seq($.body, $._nl, $._nl)),
            ),
        start_line: ($) => seq(optional($.method), $.url),
        method: () =>
            /(OPTIONS|GET|HEAD|POST|PUT|DELETE|TRACE|CONNECT|PATCH|LIST)/,
        url: ($) => $.rest_of_line,
        header: ($) =>
            seq(
                field("name", $.header_name),
                ":",
                field("value", $.rest_of_line),
            ),
        header_name: () => /[^\r\n:]+/,
        body: ($) => choice($.json_body, $.url_encoded_body, $.raw_body),
        raw_body: () => /[^#]{3}([\r\n]|.)+./,
        url_encoded_body: ($) =>
            seq(
                $.url_encoded_key_value,
                repeat(seq(token(prec(5, "&")), $.url_encoded_key_value)),
            ),
        url_encoded_key_value: ($) =>
            seq(
                field("key", $.url_encoded_key),
                token(prec(5, "=")),
                field("value", $.url_encoded_value),
            ),
        url_encoded_key: ($) => $._identifier,
        url_encoded_value: ($) => repeat1(choice(/[^&\r\n]/, $.variable_ref)),
        variable_declaration: ($) =>
            seq(
                "@",
                field("name", $.identifier),
                "=",
                field("value", $.rest_of_line),
                $._nl,
            ),
        json_body: ($) => choice($.json_object, $.json_list),
        _key_value_list: ($) =>
            seq(
                repeat($._nl),
                $.json_key_value,
                repeat(
                    seq(repeat($._nl), ",", repeat($._nl), $.json_key_value),
                ),
                repeat($._nl),
            ),
        json_key_value: ($) =>
            seq(
                field("key", $._json_key),
                token(prec(5, ":")),
                field("value", $._json_value),
            ),
        _json_key: ($) => seq('"', $.identifier, '"'),
        _json_value: ($) =>
            prec(
                2,
                choice(
                    $.null,
                    $.string,
                    $.number,
                    $.boolean,
                    $.variable_ref,
                    $.json_object,
                    $.json_list,
                ),
            ),
        json_object: ($) =>
            prec.left(
                seq(
                    token(prec(5, "{")), // Precedence used to avoid raw_body to have preference
                    optional(choice($._key_value_list, repeat1($._nl))),
                    token(prec(5, "}")), // Precedence used to avoid raw_body to have preference
                ),
            ),
        json_list: ($) =>
            prec.left(
                seq(
                    token(prec(5, "[")),
                    optional(choice($._json_list_values, repeat1($._nl))),
                    token(prec(5, "]")),
                ),
            ),
        _json_list_values: ($) =>
            seq(
                repeat($._nl),
                $._json_value,
                repeat(seq(repeat($._nl), ",", repeat($._nl), $._json_value)),
                repeat($._nl),
            ),
        separator: () => token(prec(20, "###")),
        response_start_line: ($) =>
            seq($.http_version, $.status_code, $.reason_phrase),
        http_version: () => seq("HTTP/", /[\d\.]+/),
        status_code: () => /\d+/,
        reason_phrase: ($) => $.rest_of_line,
        identifier: ($) =>
            repeat1(choice(token(prec(5, /[A-Za-z_\.\d\-]/)), $.variable_ref)),
        _identifier: () => token(prec(5, /[A-Za-z_\.\d\-]+/)),
        number: () => /[0-9\.]+/,
        boolean: () => /(true|false)/,
        string: ($) =>
            choice(seq('"', repeat1($._string_content), '"'), seq('"', '"')),
        _string_content: ($) =>
            choice(/[^\\"\n]/, $.variable_ref, $.escape_sequence),
        escape_sequence: (_) =>
            token.immediate(seq("\\", /(\"|\\|\/|b|f|n|r|t|u)/)),
        null: () => "null",
        variable_ref: () =>
            token(prec(2, seq(token(prec(10, "{{")), /[A-Za-z_\.\d]*/, "}}"))),
        rest_of_line: ($) => repeat1(choice(/[^\r\n]/, $.variable_ref)),
        _nl: () => token.immediate(/[\r\n]/),
    },
});
