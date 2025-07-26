#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 139
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 71
#define ALIAS_COUNT 0
#define TOKEN_COUNT 31
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 4

enum ts_symbol_identifiers {
  sym_method = 1,
  anon_sym_COLON = 2,
  sym_header_name = 3,
  sym_raw_body = 4,
  anon_sym_AMP = 5,
  anon_sym_EQ = 6,
  aux_sym_url_encoded_value_token1 = 7,
  anon_sym_AT = 8,
  anon_sym_EQ2 = 9,
  anon_sym_COMMA = 10,
  anon_sym_COLON2 = 11,
  anon_sym_DQUOTE = 12,
  anon_sym_LBRACE = 13,
  anon_sym_RBRACE = 14,
  anon_sym_LBRACK = 15,
  anon_sym_RBRACK = 16,
  sym_separator = 17,
  anon_sym_HTTP_SLASH = 18,
  aux_sym_http_version_token1 = 19,
  sym_status_code = 20,
  aux_sym_identifier_token1 = 21,
  sym__identifier = 22,
  sym_number = 23,
  sym_boolean = 24,
  aux_sym__string_content_token1 = 25,
  sym_escape_sequence = 26,
  sym_null = 27,
  sym_variable_ref = 28,
  aux_sym_rest_of_line_token1 = 29,
  sym__nl = 30,
  sym_source_file = 31,
  sym__block = 32,
  sym_request = 33,
  sym_response = 34,
  sym_start_line = 35,
  sym_url = 36,
  sym_header = 37,
  sym_body = 38,
  sym_url_encoded_body = 39,
  sym_url_encoded_key_value = 40,
  sym_url_encoded_key = 41,
  sym_url_encoded_value = 42,
  sym_variable_declaration = 43,
  sym_json_body = 44,
  sym__key_value_list = 45,
  sym_json_key_value = 46,
  sym__json_key = 47,
  sym__json_value = 48,
  sym_json_object = 49,
  sym_json_list = 50,
  sym__json_list_values = 51,
  sym_response_start_line = 52,
  sym_http_version = 53,
  sym_reason_phrase = 54,
  sym_identifier = 55,
  sym_string = 56,
  sym__string_content = 57,
  sym_rest_of_line = 58,
  aux_sym_source_file_repeat1 = 59,
  aux_sym_source_file_repeat2 = 60,
  aux_sym__block_repeat1 = 61,
  aux_sym_request_repeat1 = 62,
  aux_sym_url_encoded_body_repeat1 = 63,
  aux_sym_url_encoded_value_repeat1 = 64,
  aux_sym__key_value_list_repeat1 = 65,
  aux_sym__key_value_list_repeat2 = 66,
  aux_sym__json_list_values_repeat1 = 67,
  aux_sym_identifier_repeat1 = 68,
  aux_sym_string_repeat1 = 69,
  aux_sym_rest_of_line_repeat1 = 70,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_method] = "method",
  [anon_sym_COLON] = ":",
  [sym_header_name] = "header_name",
  [sym_raw_body] = "raw_body",
  [anon_sym_AMP] = "&",
  [anon_sym_EQ] = "=",
  [aux_sym_url_encoded_value_token1] = "url_encoded_value_token1",
  [anon_sym_AT] = "@",
  [anon_sym_EQ2] = "=",
  [anon_sym_COMMA] = ",",
  [anon_sym_COLON2] = ":",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_separator] = "separator",
  [anon_sym_HTTP_SLASH] = "HTTP/",
  [aux_sym_http_version_token1] = "http_version_token1",
  [sym_status_code] = "status_code",
  [aux_sym_identifier_token1] = "identifier_token1",
  [sym__identifier] = "_identifier",
  [sym_number] = "number",
  [sym_boolean] = "boolean",
  [aux_sym__string_content_token1] = "_string_content_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym_null] = "null",
  [sym_variable_ref] = "variable_ref",
  [aux_sym_rest_of_line_token1] = "rest_of_line_token1",
  [sym__nl] = "_nl",
  [sym_source_file] = "source_file",
  [sym__block] = "_block",
  [sym_request] = "request",
  [sym_response] = "response",
  [sym_start_line] = "start_line",
  [sym_url] = "url",
  [sym_header] = "header",
  [sym_body] = "body",
  [sym_url_encoded_body] = "url_encoded_body",
  [sym_url_encoded_key_value] = "url_encoded_key_value",
  [sym_url_encoded_key] = "url_encoded_key",
  [sym_url_encoded_value] = "url_encoded_value",
  [sym_variable_declaration] = "variable_declaration",
  [sym_json_body] = "json_body",
  [sym__key_value_list] = "_key_value_list",
  [sym_json_key_value] = "json_key_value",
  [sym__json_key] = "_json_key",
  [sym__json_value] = "_json_value",
  [sym_json_object] = "json_object",
  [sym_json_list] = "json_list",
  [sym__json_list_values] = "_json_list_values",
  [sym_response_start_line] = "response_start_line",
  [sym_http_version] = "http_version",
  [sym_reason_phrase] = "reason_phrase",
  [sym_identifier] = "identifier",
  [sym_string] = "string",
  [sym__string_content] = "_string_content",
  [sym_rest_of_line] = "rest_of_line",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym__block_repeat1] = "_block_repeat1",
  [aux_sym_request_repeat1] = "request_repeat1",
  [aux_sym_url_encoded_body_repeat1] = "url_encoded_body_repeat1",
  [aux_sym_url_encoded_value_repeat1] = "url_encoded_value_repeat1",
  [aux_sym__key_value_list_repeat1] = "_key_value_list_repeat1",
  [aux_sym__key_value_list_repeat2] = "_key_value_list_repeat2",
  [aux_sym__json_list_values_repeat1] = "_json_list_values_repeat1",
  [aux_sym_identifier_repeat1] = "identifier_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_rest_of_line_repeat1] = "rest_of_line_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_method] = sym_method,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_header_name] = sym_header_name,
  [sym_raw_body] = sym_raw_body,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_url_encoded_value_token1] = aux_sym_url_encoded_value_token1,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_EQ2] = anon_sym_EQ,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_COLON2] = anon_sym_COLON,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_separator] = sym_separator,
  [anon_sym_HTTP_SLASH] = anon_sym_HTTP_SLASH,
  [aux_sym_http_version_token1] = aux_sym_http_version_token1,
  [sym_status_code] = sym_status_code,
  [aux_sym_identifier_token1] = aux_sym_identifier_token1,
  [sym__identifier] = sym__identifier,
  [sym_number] = sym_number,
  [sym_boolean] = sym_boolean,
  [aux_sym__string_content_token1] = aux_sym__string_content_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_null] = sym_null,
  [sym_variable_ref] = sym_variable_ref,
  [aux_sym_rest_of_line_token1] = aux_sym_rest_of_line_token1,
  [sym__nl] = sym__nl,
  [sym_source_file] = sym_source_file,
  [sym__block] = sym__block,
  [sym_request] = sym_request,
  [sym_response] = sym_response,
  [sym_start_line] = sym_start_line,
  [sym_url] = sym_url,
  [sym_header] = sym_header,
  [sym_body] = sym_body,
  [sym_url_encoded_body] = sym_url_encoded_body,
  [sym_url_encoded_key_value] = sym_url_encoded_key_value,
  [sym_url_encoded_key] = sym_url_encoded_key,
  [sym_url_encoded_value] = sym_url_encoded_value,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_json_body] = sym_json_body,
  [sym__key_value_list] = sym__key_value_list,
  [sym_json_key_value] = sym_json_key_value,
  [sym__json_key] = sym__json_key,
  [sym__json_value] = sym__json_value,
  [sym_json_object] = sym_json_object,
  [sym_json_list] = sym_json_list,
  [sym__json_list_values] = sym__json_list_values,
  [sym_response_start_line] = sym_response_start_line,
  [sym_http_version] = sym_http_version,
  [sym_reason_phrase] = sym_reason_phrase,
  [sym_identifier] = sym_identifier,
  [sym_string] = sym_string,
  [sym__string_content] = sym__string_content,
  [sym_rest_of_line] = sym_rest_of_line,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
  [aux_sym__block_repeat1] = aux_sym__block_repeat1,
  [aux_sym_request_repeat1] = aux_sym_request_repeat1,
  [aux_sym_url_encoded_body_repeat1] = aux_sym_url_encoded_body_repeat1,
  [aux_sym_url_encoded_value_repeat1] = aux_sym_url_encoded_value_repeat1,
  [aux_sym__key_value_list_repeat1] = aux_sym__key_value_list_repeat1,
  [aux_sym__key_value_list_repeat2] = aux_sym__key_value_list_repeat2,
  [aux_sym__json_list_values_repeat1] = aux_sym__json_list_values_repeat1,
  [aux_sym_identifier_repeat1] = aux_sym_identifier_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_rest_of_line_repeat1] = aux_sym_rest_of_line_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_method] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_header_name] = {
    .visible = true,
    .named = true,
  },
  [sym_raw_body] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_url_encoded_value_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_separator] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_HTTP_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_http_version_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_status_code] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__string_content_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_ref] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_rest_of_line_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__nl] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__block] = {
    .visible = false,
    .named = true,
  },
  [sym_request] = {
    .visible = true,
    .named = true,
  },
  [sym_response] = {
    .visible = true,
    .named = true,
  },
  [sym_start_line] = {
    .visible = true,
    .named = true,
  },
  [sym_url] = {
    .visible = true,
    .named = true,
  },
  [sym_header] = {
    .visible = true,
    .named = true,
  },
  [sym_body] = {
    .visible = true,
    .named = true,
  },
  [sym_url_encoded_body] = {
    .visible = true,
    .named = true,
  },
  [sym_url_encoded_key_value] = {
    .visible = true,
    .named = true,
  },
  [sym_url_encoded_key] = {
    .visible = true,
    .named = true,
  },
  [sym_url_encoded_value] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_json_body] = {
    .visible = true,
    .named = true,
  },
  [sym__key_value_list] = {
    .visible = false,
    .named = true,
  },
  [sym_json_key_value] = {
    .visible = true,
    .named = true,
  },
  [sym__json_key] = {
    .visible = false,
    .named = true,
  },
  [sym__json_value] = {
    .visible = false,
    .named = true,
  },
  [sym_json_object] = {
    .visible = true,
    .named = true,
  },
  [sym_json_list] = {
    .visible = true,
    .named = true,
  },
  [sym__json_list_values] = {
    .visible = false,
    .named = true,
  },
  [sym_response_start_line] = {
    .visible = true,
    .named = true,
  },
  [sym_http_version] = {
    .visible = true,
    .named = true,
  },
  [sym_reason_phrase] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym__string_content] = {
    .visible = false,
    .named = true,
  },
  [sym_rest_of_line] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_request_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_url_encoded_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_url_encoded_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__key_value_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__key_value_list_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__json_list_values_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identifier_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_rest_of_line_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_key = 1,
  field_name = 2,
  field_value = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_key] = "key",
  [field_name] = "name",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 4, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
    {field_value, 3},
  [2] =
    {field_name, 0},
    {field_value, 2},
  [4] =
    {field_key, 0},
    {field_value, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 17,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 18,
  [85] = 27,
  [86] = 60,
  [87] = 72,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 37,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 112,
  [134] = 106,
  [135] = 135,
  [136] = 121,
  [137] = 137,
  [138] = 138,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(76);
      if (lookahead == ' ') SKIP(72);
      if (lookahead == '"') ADVANCE(106);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '&') ADVANCE(91);
      if (lookahead == ',') ADVANCE(104);
      if (lookahead == '.') ADVANCE(116);
      if (lookahead == ':') ADVANCE(105);
      if (lookahead == '=') ADVANCE(92);
      if (lookahead == '@') ADVANCE(97);
      if (lookahead == 'C') ADVANCE(116);
      if (lookahead == 'D') ADVANCE(116);
      if (lookahead == 'G') ADVANCE(116);
      if (lookahead == 'H') ADVANCE(116);
      if (lookahead == 'L') ADVANCE(116);
      if (lookahead == 'O') ADVANCE(116);
      if (lookahead == 'P') ADVANCE(116);
      if (lookahead == 'T') ADVANCE(116);
      if (lookahead == '[') ADVANCE(110);
      if (lookahead == '\\') ADVANCE(67);
      if (lookahead == ']') ADVANCE(111);
      if (lookahead == 'f') ADVANCE(116);
      if (lookahead == 'n') ADVANCE(116);
      if (lookahead == 't') ADVANCE(116);
      if (lookahead == '{') ADVANCE(108);
      if (lookahead == '}') ADVANCE(109);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == '#') ADVANCE(87);
      if (lookahead != 0) ADVANCE(87);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == '#') ADVANCE(84);
      if (lookahead != 0) ADVANCE(87);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead != 0) ADVANCE(87);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == ' ') ADVANCE(88);
      if (lookahead == '#') ADVANCE(86);
      if (lookahead == '@') ADVANCE(98);
      if (lookahead == '[') ADVANCE(110);
      if (lookahead == '{') ADVANCE(107);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == ' ') ADVANCE(89);
      if (lookahead == '#') ADVANCE(87);
      if (lookahead == '[') ADVANCE(110);
      if (lookahead == '{') ADVANCE(107);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == '#') ADVANCE(87);
      if (lookahead != 0) ADVANCE(85);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        ' ', 127,
        '@', 97,
        'C', 136,
        'D', 132,
        'G', 133,
        'H', 134,
        'L', 135,
        'O', 137,
        'P', 131,
        'T', 138,
        '{', 139,
        '\n', 140,
        '\r', 140,
      );
      if (lookahead != 0) ADVANCE(126);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == '@') ADVANCE(98);
      if (lookahead == '[') ADVANCE(110);
      if (lookahead == '{') ADVANCE(107);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 9:
      if (lookahead == ' ') SKIP(10);
      if (lookahead == '"') ADVANCE(106);
      if (lookahead == ',') ADVANCE(104);
      if (lookahead == ':') ADVANCE(105);
      if (lookahead == '=') ADVANCE(92);
      if (lookahead == '[') ADVANCE(110);
      if (lookahead == ']') ADVANCE(111);
      if (lookahead == 'f') ADVANCE(55);
      if (lookahead == 'n') ADVANCE(63);
      if (lookahead == 't') ADVANCE(60);
      if (lookahead == '{') ADVANCE(108);
      if (lookahead == '}') ADVANCE(109);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(140);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      END_STATE();
    case 10:
      if (lookahead == ' ') SKIP(10);
      if (lookahead == '"') ADVANCE(106);
      if (lookahead == ',') ADVANCE(104);
      if (lookahead == ':') ADVANCE(105);
      if (lookahead == '=') ADVANCE(92);
      if (lookahead == '[') ADVANCE(110);
      if (lookahead == ']') ADVANCE(111);
      if (lookahead == 'f') ADVANCE(55);
      if (lookahead == 'n') ADVANCE(63);
      if (lookahead == 't') ADVANCE(60);
      if (lookahead == '{') ADVANCE(108);
      if (lookahead == '}') ADVANCE(109);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(12);
      if (lookahead == '[') ADVANCE(110);
      if (lookahead == '{') ADVANCE(107);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(28);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '#') ADVANCE(3);
      if (lookahead == '[') ADVANCE(110);
      if (lookahead == '{') ADVANCE(107);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead == '"') ADVANCE(106);
      if (lookahead == '\\') ADVANCE(67);
      if (lookahead == '{') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(120);
      END_STATE();
    case 14:
      if (lookahead == ' ') SKIP(14);
      if (lookahead == '"') ADVANCE(106);
      if (lookahead == ':') ADVANCE(78);
      if (lookahead == '=') ADVANCE(103);
      if (lookahead == '{') ADVANCE(64);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(94);
      if (lookahead == '&') ADVANCE(91);
      if (lookahead == '{') ADVANCE(96);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(140);
      if (lookahead != 0) ADVANCE(93);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == '{') ADVANCE(139);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(140);
      if (lookahead != 0) ADVANCE(126);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(80);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(83);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(95);
      if (lookahead == '{') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '&') ADVANCE(93);
      END_STATE();
    case 19:
      if (lookahead == ' ') SKIP(19);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 20:
      if (lookahead == ' ') SKIP(20);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 21:
      if (lookahead == ' ') SKIP(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(24);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '@') ADVANCE(101);
      if (lookahead == '[') ADVANCE(110);
      if (lookahead == '{') ADVANCE(107);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      if (lookahead != 0) ADVANCE(69);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(25);
      if (lookahead == '[') ADVANCE(110);
      if (lookahead == '{') ADVANCE(107);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(70);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '@') ADVANCE(99);
      if (lookahead == '[') ADVANCE(110);
      if (lookahead == '{') ADVANCE(107);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(11);
      if (lookahead == '[') ADVANCE(110);
      if (lookahead == '{') ADVANCE(107);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(69);
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(112);
      END_STATE();
    case 27:
      if (lookahead == '#') ADVANCE(3);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 28:
      if (lookahead == '#') ADVANCE(3);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 29:
      if (lookahead == '#') ADVANCE(26);
      END_STATE();
    case 30:
      if (lookahead == '/') ADVANCE(113);
      END_STATE();
    case 31:
      if (lookahead == 'A') ADVANCE(36);
      END_STATE();
    case 32:
      if (lookahead == 'A') ADVANCE(35);
      END_STATE();
    case 33:
      if (lookahead == 'C') ADVANCE(50);
      END_STATE();
    case 34:
      if (lookahead == 'C') ADVANCE(40);
      END_STATE();
    case 35:
      if (lookahead == 'C') ADVANCE(37);
      END_STATE();
    case 36:
      if (lookahead == 'D') ADVANCE(77);
      END_STATE();
    case 37:
      if (lookahead == 'E') ADVANCE(77);
      END_STATE();
    case 38:
      if (lookahead == 'E') ADVANCE(33);
      END_STATE();
    case 39:
      if (lookahead == 'E') ADVANCE(54);
      END_STATE();
    case 40:
      if (lookahead == 'H') ADVANCE(77);
      END_STATE();
    case 41:
      if (lookahead == 'I') ADVANCE(46);
      END_STATE();
    case 42:
      if (lookahead == 'L') ADVANCE(39);
      END_STATE();
    case 43:
      if (lookahead == 'N') ADVANCE(45);
      END_STATE();
    case 44:
      if (lookahead == 'N') ADVANCE(49);
      END_STATE();
    case 45:
      if (lookahead == 'N') ADVANCE(38);
      END_STATE();
    case 46:
      if (lookahead == 'O') ADVANCE(44);
      END_STATE();
    case 47:
      if (lookahead == 'P') ADVANCE(30);
      END_STATE();
    case 48:
      if (lookahead == 'S') ADVANCE(50);
      END_STATE();
    case 49:
      if (lookahead == 'S') ADVANCE(77);
      END_STATE();
    case 50:
      if (lookahead == 'T') ADVANCE(77);
      END_STATE();
    case 51:
      if (lookahead == 'T') ADVANCE(47);
      END_STATE();
    case 52:
      if (lookahead == 'T') ADVANCE(41);
      END_STATE();
    case 53:
      if (lookahead == 'T') ADVANCE(34);
      END_STATE();
    case 54:
      if (lookahead == 'T') ADVANCE(37);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 57:
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(124);
      END_STATE();
    case 59:
      if (lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 60:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 61:
      if (lookahead == 's') ADVANCE(56);
      END_STATE();
    case 62:
      if (lookahead == 'u') ADVANCE(56);
      END_STATE();
    case 63:
      if (lookahead == 'u') ADVANCE(59);
      END_STATE();
    case 64:
      if (lookahead == '{') ADVANCE(65);
      END_STATE();
    case 65:
      if (lookahead == '}') ADVANCE(66);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 66:
      if (lookahead == '}') ADVANCE(125);
      END_STATE();
    case 67:
      ADVANCE_MAP(
        '"', 123,
        '/', 123,
        '\\', 123,
        'b', 123,
        'f', 123,
        'n', 123,
        'r', 123,
        't', 123,
        'u', 123,
      );
      END_STATE();
    case 68:
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(71);
      END_STATE();
    case 69:
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(27);
      END_STATE();
    case 70:
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(68);
      END_STATE();
    case 71:
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 72:
      if (eof) ADVANCE(76);
      if (lookahead == ' ') SKIP(72);
      if (lookahead == '"') ADVANCE(106);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '&') ADVANCE(91);
      if (lookahead == ',') ADVANCE(104);
      if (lookahead == '.') ADVANCE(116);
      if (lookahead == ':') ADVANCE(105);
      if (lookahead == '=') ADVANCE(92);
      if (lookahead == '@') ADVANCE(97);
      if (lookahead == 'C') ADVANCE(116);
      if (lookahead == 'D') ADVANCE(116);
      if (lookahead == 'G') ADVANCE(116);
      if (lookahead == 'H') ADVANCE(116);
      if (lookahead == 'L') ADVANCE(116);
      if (lookahead == 'O') ADVANCE(116);
      if (lookahead == 'P') ADVANCE(116);
      if (lookahead == 'T') ADVANCE(116);
      if (lookahead == '[') ADVANCE(110);
      if (lookahead == ']') ADVANCE(111);
      if (lookahead == 'f') ADVANCE(116);
      if (lookahead == 'n') ADVANCE(116);
      if (lookahead == 't') ADVANCE(116);
      if (lookahead == '{') ADVANCE(108);
      if (lookahead == '}') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 73:
      if (eof) ADVANCE(76);
      ADVANCE_MAP(
        ' ', 128,
        '#', 130,
        '@', 97,
        'C', 136,
        'D', 132,
        'G', 133,
        'H', 134,
        'L', 135,
        'O', 137,
        'P', 131,
        'T', 138,
        '{', 139,
        '\n', 140,
        '\r', 140,
      );
      if (lookahead != 0) ADVANCE(126);
      END_STATE();
    case 74:
      if (eof) ADVANCE(76);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '@') ADVANCE(102);
      if (lookahead == '[') ADVANCE(110);
      if (lookahead == '{') ADVANCE(107);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(141);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 75:
      if (eof) ADVANCE(76);
      if (lookahead == ' ') ADVANCE(79);
      if (lookahead == '#') ADVANCE(82);
      if (lookahead == '@') ADVANCE(100);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(83);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_method);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == ' ') ADVANCE(79);
      if (lookahead == '#') ADVANCE(82);
      if (lookahead == '@') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(83);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == ' ') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(83);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '#') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(83);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '#') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(83);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == '#') ADVANCE(112);
      if (lookahead != 0) ADVANCE(87);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == '#') ADVANCE(87);
      if (lookahead != 0) ADVANCE(87);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == '#') ADVANCE(84);
      if (lookahead != 0) ADVANCE(87);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead != 0) ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == ' ') ADVANCE(88);
      if (lookahead == '#') ADVANCE(86);
      if (lookahead == '@') ADVANCE(98);
      if (lookahead == '[') ADVANCE(110);
      if (lookahead == '{') ADVANCE(107);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == ' ') ADVANCE(89);
      if (lookahead == '#') ADVANCE(87);
      if (lookahead == '[') ADVANCE(110);
      if (lookahead == '{') ADVANCE(107);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == '#') ADVANCE(87);
      if (lookahead != 0) ADVANCE(85);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_url_encoded_value_token1);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_url_encoded_value_token1);
      if (lookahead == ' ') ADVANCE(94);
      if (lookahead == '&') ADVANCE(91);
      if (lookahead == '{') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(93);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_url_encoded_value_token1);
      if (lookahead == ' ') ADVANCE(95);
      if (lookahead == '{') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '&') ADVANCE(93);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_url_encoded_value_token1);
      if (lookahead == '{') ADVANCE(65);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == '#') ADVANCE(87);
      if (lookahead != 0) ADVANCE(85);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '#') ADVANCE(3);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(83);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(27);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(68);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_EQ2);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_COLON2);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(65);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_separator);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_http_version_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_status_code);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_boolean);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym__string_content_token1);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym__string_content_token1);
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead == '{') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(120);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym__string_content_token1);
      if (lookahead == '{') ADVANCE(65);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_variable_ref);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      ADVANCE_MAP(
        ' ', 127,
        '@', 97,
        'C', 136,
        'D', 132,
        'G', 133,
        'H', 134,
        'L', 135,
        'O', 137,
        'P', 131,
        'T', 138,
        '{', 139,
      );
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(126);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      ADVANCE_MAP(
        ' ', 128,
        '#', 130,
        '@', 97,
        'C', 136,
        'D', 132,
        'G', 133,
        'H', 134,
        'L', 135,
        'O', 137,
        'P', 131,
        'T', 138,
        '{', 139,
      );
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(126);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == '{') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(126);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      if (lookahead == '#') ADVANCE(26);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      if (lookahead == 'A') ADVANCE(53);
      if (lookahead == 'O') ADVANCE(48);
      if (lookahead == 'U') ADVANCE(50);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      if (lookahead == 'E') ADVANCE(42);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      if (lookahead == 'E') ADVANCE(50);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      if (lookahead == 'E') ADVANCE(31);
      if (lookahead == 'T') ADVANCE(51);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      if (lookahead == 'I') ADVANCE(48);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      if (lookahead == 'O') ADVANCE(43);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      if (lookahead == 'P') ADVANCE(52);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      if (lookahead == 'R') ADVANCE(32);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      if (lookahead == '{') ADVANCE(65);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__nl);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__nl);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(68);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 7},
  [2] = {.lex_state = 73},
  [3] = {.lex_state = 7},
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 74},
  [6] = {.lex_state = 9},
  [7] = {.lex_state = 74},
  [8] = {.lex_state = 9},
  [9] = {.lex_state = 9},
  [10] = {.lex_state = 9},
  [11] = {.lex_state = 9},
  [12] = {.lex_state = 9},
  [13] = {.lex_state = 9},
  [14] = {.lex_state = 23},
  [15] = {.lex_state = 23},
  [16] = {.lex_state = 9},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 75},
  [19] = {.lex_state = 75},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 75},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 13},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 13},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 13},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 14},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 75},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 15},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 16},
  [48] = {.lex_state = 16},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 15},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 14},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 17},
  [57] = {.lex_state = 14},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 16},
  [60] = {.lex_state = 16},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 16},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 18},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 14},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 17},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 16},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 17},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 16},
  [87] = {.lex_state = 14},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 19},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 17},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 20},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 9},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 9},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 14},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 9},
  [124] = {.lex_state = 9},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 21},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 21},
  [132] = {.lex_state = 14},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 14},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_method] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_EQ2] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_COLON2] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_separator] = ACTIONS(1),
    [anon_sym_HTTP_SLASH] = ACTIONS(1),
    [aux_sym_http_version_token1] = ACTIONS(1),
    [sym_status_code] = ACTIONS(1),
    [aux_sym_identifier_token1] = ACTIONS(1),
    [sym_boolean] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [sym_variable_ref] = ACTIONS(1),
    [sym__nl] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(119),
    [sym__block] = STATE(45),
    [sym_request] = STATE(31),
    [sym_response] = STATE(31),
    [sym_start_line] = STATE(113),
    [sym_url] = STATE(129),
    [sym_variable_declaration] = STATE(4),
    [sym_response_start_line] = STATE(125),
    [sym_http_version] = STATE(131),
    [sym_rest_of_line] = STATE(115),
    [aux_sym__block_repeat1] = STATE(4),
    [aux_sym_rest_of_line_repeat1] = STATE(62),
    [sym_method] = ACTIONS(3),
    [anon_sym_AT] = ACTIONS(5),
    [anon_sym_HTTP_SLASH] = ACTIONS(7),
    [sym_variable_ref] = ACTIONS(9),
    [aux_sym_rest_of_line_token1] = ACTIONS(9),
    [sym__nl] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(7), 1,
      anon_sym_HTTP_SLASH,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      sym_separator,
    ACTIONS(17), 1,
      sym__nl,
    STATE(62), 1,
      aux_sym_rest_of_line_repeat1,
    STATE(90), 1,
      sym__block,
    STATE(113), 1,
      sym_start_line,
    STATE(115), 1,
      sym_rest_of_line,
    STATE(125), 1,
      sym_response_start_line,
    STATE(129), 1,
      sym_url,
    STATE(131), 1,
      sym_http_version,
    ACTIONS(9), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
    STATE(4), 2,
      sym_variable_declaration,
      aux_sym__block_repeat1,
    STATE(31), 2,
      sym_request,
      sym_response,
  [52] = 14,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(7), 1,
      anon_sym_HTTP_SLASH,
    ACTIONS(11), 1,
      sym__nl,
    STATE(62), 1,
      aux_sym_rest_of_line_repeat1,
    STATE(90), 1,
      sym__block,
    STATE(113), 1,
      sym_start_line,
    STATE(115), 1,
      sym_rest_of_line,
    STATE(125), 1,
      sym_response_start_line,
    STATE(129), 1,
      sym_url,
    STATE(131), 1,
      sym_http_version,
    ACTIONS(9), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
    STATE(4), 2,
      sym_variable_declaration,
      aux_sym__block_repeat1,
    STATE(31), 2,
      sym_request,
      sym_response,
  [98] = 13,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(7), 1,
      anon_sym_HTTP_SLASH,
    ACTIONS(20), 1,
      sym__nl,
    STATE(62), 1,
      aux_sym_rest_of_line_repeat1,
    STATE(113), 1,
      sym_start_line,
    STATE(115), 1,
      sym_rest_of_line,
    STATE(125), 1,
      sym_response_start_line,
    STATE(129), 1,
      sym_url,
    STATE(131), 1,
      sym_http_version,
    ACTIONS(9), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
    STATE(17), 2,
      sym_variable_declaration,
      aux_sym__block_repeat1,
    STATE(22), 2,
      sym_request,
      sym_response,
  [141] = 11,
    ACTIONS(22), 1,
      ts_builtin_sym_end,
    ACTIONS(24), 1,
      sym_raw_body,
    ACTIONS(28), 1,
      anon_sym_LBRACE,
    ACTIONS(30), 1,
      anon_sym_LBRACK,
    ACTIONS(32), 1,
      sym__identifier,
    STATE(97), 1,
      sym_url_encoded_key_value,
    STATE(109), 1,
      sym_body,
    STATE(124), 1,
      sym_url_encoded_key,
    STATE(105), 2,
      sym_url_encoded_body,
      sym_json_body,
    STATE(126), 2,
      sym_json_object,
      sym_json_list,
    ACTIONS(26), 3,
      anon_sym_AT,
      sym_separator,
      sym__nl,
  [179] = 9,
    ACTIONS(28), 1,
      anon_sym_LBRACE,
    ACTIONS(34), 1,
      anon_sym_DQUOTE,
    ACTIONS(36), 1,
      anon_sym_LBRACK,
    ACTIONS(38), 1,
      anon_sym_RBRACK,
    ACTIONS(42), 1,
      sym__nl,
    STATE(8), 1,
      aux_sym__key_value_list_repeat1,
    STATE(137), 1,
      sym__json_list_values,
    ACTIONS(40), 4,
      sym_number,
      sym_boolean,
      sym_null,
      sym_variable_ref,
    STATE(46), 4,
      sym__json_value,
      sym_json_object,
      sym_json_list,
      sym_string,
  [213] = 11,
    ACTIONS(24), 1,
      sym_raw_body,
    ACTIONS(28), 1,
      anon_sym_LBRACE,
    ACTIONS(30), 1,
      anon_sym_LBRACK,
    ACTIONS(32), 1,
      sym__identifier,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    STATE(97), 1,
      sym_url_encoded_key_value,
    STATE(122), 1,
      sym_body,
    STATE(124), 1,
      sym_url_encoded_key,
    STATE(105), 2,
      sym_url_encoded_body,
      sym_json_body,
    STATE(126), 2,
      sym_json_object,
      sym_json_list,
    ACTIONS(46), 3,
      anon_sym_AT,
      sym_separator,
      sym__nl,
  [251] = 8,
    ACTIONS(28), 1,
      anon_sym_LBRACE,
    ACTIONS(34), 1,
      anon_sym_DQUOTE,
    ACTIONS(36), 1,
      anon_sym_LBRACK,
    ACTIONS(48), 1,
      anon_sym_RBRACK,
    ACTIONS(52), 1,
      sym__nl,
    STATE(13), 1,
      aux_sym__key_value_list_repeat1,
    ACTIONS(50), 4,
      sym_number,
      sym_boolean,
      sym_null,
      sym_variable_ref,
    STATE(39), 4,
      sym__json_value,
      sym_json_object,
      sym_json_list,
      sym_string,
  [282] = 7,
    ACTIONS(28), 1,
      anon_sym_LBRACE,
    ACTIONS(34), 1,
      anon_sym_DQUOTE,
    ACTIONS(36), 1,
      anon_sym_LBRACK,
    ACTIONS(52), 1,
      sym__nl,
    STATE(13), 1,
      aux_sym__key_value_list_repeat1,
    ACTIONS(54), 4,
      sym_number,
      sym_boolean,
      sym_null,
      sym_variable_ref,
    STATE(101), 4,
      sym__json_value,
      sym_json_object,
      sym_json_list,
      sym_string,
  [310] = 7,
    ACTIONS(28), 1,
      anon_sym_LBRACE,
    ACTIONS(34), 1,
      anon_sym_DQUOTE,
    ACTIONS(36), 1,
      anon_sym_LBRACK,
    ACTIONS(58), 1,
      sym__nl,
    STATE(9), 1,
      aux_sym__key_value_list_repeat1,
    ACTIONS(56), 4,
      sym_number,
      sym_boolean,
      sym_null,
      sym_variable_ref,
    STATE(89), 4,
      sym__json_value,
      sym_json_object,
      sym_json_list,
      sym_string,
  [338] = 7,
    ACTIONS(28), 1,
      anon_sym_LBRACE,
    ACTIONS(34), 1,
      anon_sym_DQUOTE,
    ACTIONS(36), 1,
      anon_sym_LBRACK,
    ACTIONS(52), 1,
      sym__nl,
    STATE(13), 1,
      aux_sym__key_value_list_repeat1,
    ACTIONS(56), 4,
      sym_number,
      sym_boolean,
      sym_null,
      sym_variable_ref,
    STATE(89), 4,
      sym__json_value,
      sym_json_object,
      sym_json_list,
      sym_string,
  [366] = 7,
    ACTIONS(28), 1,
      anon_sym_LBRACE,
    ACTIONS(34), 1,
      anon_sym_DQUOTE,
    ACTIONS(36), 1,
      anon_sym_LBRACK,
    ACTIONS(62), 1,
      sym__nl,
    STATE(11), 1,
      aux_sym__key_value_list_repeat1,
    ACTIONS(60), 4,
      sym_number,
      sym_boolean,
      sym_null,
      sym_variable_ref,
    STATE(95), 4,
      sym__json_value,
      sym_json_object,
      sym_json_list,
      sym_string,
  [394] = 4,
    ACTIONS(66), 1,
      anon_sym_LBRACE,
    ACTIONS(68), 1,
      sym__nl,
    STATE(13), 1,
      aux_sym__key_value_list_repeat1,
    ACTIONS(64), 9,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_number,
      sym_boolean,
      sym_null,
      sym_variable_ref,
  [415] = 9,
    ACTIONS(24), 1,
      sym_raw_body,
    ACTIONS(28), 1,
      anon_sym_LBRACE,
    ACTIONS(30), 1,
      anon_sym_LBRACK,
    ACTIONS(32), 1,
      sym__identifier,
    STATE(97), 1,
      sym_url_encoded_key_value,
    STATE(120), 1,
      sym_body,
    STATE(124), 1,
      sym_url_encoded_key,
    STATE(105), 2,
      sym_url_encoded_body,
      sym_json_body,
    STATE(126), 2,
      sym_json_object,
      sym_json_list,
  [445] = 9,
    ACTIONS(24), 1,
      sym_raw_body,
    ACTIONS(28), 1,
      anon_sym_LBRACE,
    ACTIONS(30), 1,
      anon_sym_LBRACK,
    ACTIONS(32), 1,
      sym__identifier,
    STATE(97), 1,
      sym_url_encoded_key_value,
    STATE(117), 1,
      sym_body,
    STATE(124), 1,
      sym_url_encoded_key,
    STATE(105), 2,
      sym_url_encoded_body,
      sym_json_body,
    STATE(126), 2,
      sym_json_object,
      sym_json_list,
  [475] = 5,
    ACTIONS(28), 1,
      anon_sym_LBRACE,
    ACTIONS(34), 1,
      anon_sym_DQUOTE,
    ACTIONS(36), 1,
      anon_sym_LBRACK,
    ACTIONS(71), 4,
      sym_number,
      sym_boolean,
      sym_null,
      sym_variable_ref,
    STATE(96), 4,
      sym__json_value,
      sym_json_object,
      sym_json_list,
      sym_string,
  [497] = 4,
    ACTIONS(75), 1,
      anon_sym_AT,
    ACTIONS(78), 1,
      sym__nl,
    STATE(17), 2,
      sym_variable_declaration,
      aux_sym__block_repeat1,
    ACTIONS(73), 4,
      sym_method,
      anon_sym_HTTP_SLASH,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [514] = 5,
    ACTIONS(83), 1,
      sym_header_name,
    STATE(18), 1,
      aux_sym_request_repeat1,
    STATE(112), 1,
      sym_header,
    ACTIONS(81), 2,
      ts_builtin_sym_end,
      sym__nl,
    ACTIONS(86), 2,
      anon_sym_AT,
      sym_separator,
  [532] = 6,
    ACTIONS(88), 1,
      ts_builtin_sym_end,
    ACTIONS(90), 1,
      sym_header_name,
    ACTIONS(94), 1,
      sym__nl,
    STATE(18), 1,
      aux_sym_request_repeat1,
    STATE(112), 1,
      sym_header,
    ACTIONS(92), 2,
      anon_sym_AT,
      sym_separator,
  [552] = 7,
    ACTIONS(97), 1,
      anon_sym_DQUOTE,
    ACTIONS(99), 1,
      anon_sym_RBRACE,
    ACTIONS(101), 1,
      sym__nl,
    STATE(29), 1,
      aux_sym__key_value_list_repeat1,
    STATE(36), 1,
      sym_json_key_value,
    STATE(107), 1,
      sym__key_value_list,
    STATE(114), 1,
      sym__json_key,
  [574] = 6,
    ACTIONS(90), 1,
      sym_header_name,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
    ACTIONS(107), 1,
      sym__nl,
    STATE(19), 1,
      aux_sym_request_repeat1,
    STATE(112), 1,
      sym_header,
    ACTIONS(105), 2,
      anon_sym_AT,
      sym_separator,
  [594] = 4,
    ACTIONS(112), 1,
      anon_sym_AT,
    ACTIONS(114), 1,
      sym__nl,
    ACTIONS(110), 2,
      ts_builtin_sym_end,
      sym_separator,
    STATE(24), 2,
      sym_variable_declaration,
      aux_sym__block_repeat1,
  [609] = 4,
    ACTIONS(112), 1,
      anon_sym_AT,
    ACTIONS(117), 1,
      sym__nl,
    ACTIONS(110), 2,
      ts_builtin_sym_end,
      sym_separator,
    STATE(25), 2,
      sym_variable_declaration,
      aux_sym__block_repeat1,
  [624] = 4,
    ACTIONS(112), 1,
      anon_sym_AT,
    ACTIONS(122), 1,
      sym__nl,
    ACTIONS(120), 2,
      ts_builtin_sym_end,
      sym_separator,
    STATE(25), 2,
      sym_variable_declaration,
      aux_sym__block_repeat1,
  [639] = 4,
    ACTIONS(127), 1,
      anon_sym_AT,
    ACTIONS(130), 1,
      sym__nl,
    ACTIONS(125), 2,
      ts_builtin_sym_end,
      sym_separator,
    STATE(25), 2,
      sym_variable_declaration,
      aux_sym__block_repeat1,
  [654] = 4,
    ACTIONS(133), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      sym_escape_sequence,
    ACTIONS(135), 2,
      aux_sym__string_content_token1,
      sym_variable_ref,
    STATE(30), 2,
      sym__string_content,
      aux_sym_string_repeat1,
  [669] = 2,
    ACTIONS(141), 1,
      sym__nl,
    ACTIONS(139), 5,
      sym_method,
      anon_sym_AT,
      anon_sym_HTTP_SLASH,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [680] = 4,
    ACTIONS(143), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      sym_escape_sequence,
    ACTIONS(145), 2,
      aux_sym__string_content_token1,
      sym_variable_ref,
    STATE(26), 2,
      sym__string_content,
      aux_sym_string_repeat1,
  [695] = 6,
    ACTIONS(52), 1,
      sym__nl,
    ACTIONS(97), 1,
      anon_sym_DQUOTE,
    ACTIONS(149), 1,
      anon_sym_RBRACE,
    STATE(13), 1,
      aux_sym__key_value_list_repeat1,
    STATE(34), 1,
      sym_json_key_value,
    STATE(114), 1,
      sym__json_key,
  [714] = 4,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(156), 1,
      sym_escape_sequence,
    ACTIONS(153), 2,
      aux_sym__string_content_token1,
      sym_variable_ref,
    STATE(30), 2,
      sym__string_content,
      aux_sym_string_repeat1,
  [729] = 4,
    ACTIONS(112), 1,
      anon_sym_AT,
    ACTIONS(161), 1,
      sym__nl,
    ACTIONS(159), 2,
      ts_builtin_sym_end,
      sym_separator,
    STATE(23), 2,
      sym_variable_declaration,
      aux_sym__block_repeat1,
  [744] = 5,
    ACTIONS(164), 1,
      anon_sym_COMMA,
    ACTIONS(167), 1,
      anon_sym_RBRACK,
    ACTIONS(169), 1,
      sym__nl,
    STATE(32), 1,
      aux_sym__json_list_values_repeat1,
    STATE(99), 1,
      aux_sym__key_value_list_repeat1,
  [760] = 5,
    ACTIONS(172), 1,
      ts_builtin_sym_end,
    ACTIONS(174), 1,
      sym_separator,
    ACTIONS(176), 1,
      sym__nl,
    STATE(66), 1,
      aux_sym_source_file_repeat1,
    STATE(68), 1,
      aux_sym_source_file_repeat2,
  [776] = 5,
    ACTIONS(178), 1,
      anon_sym_COMMA,
    ACTIONS(180), 1,
      anon_sym_RBRACE,
    ACTIONS(182), 1,
      sym__nl,
    STATE(44), 1,
      aux_sym__key_value_list_repeat2,
    STATE(77), 1,
      aux_sym__key_value_list_repeat1,
  [792] = 3,
    STATE(35), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(184), 2,
      anon_sym_EQ2,
      anon_sym_DQUOTE,
    ACTIONS(186), 2,
      aux_sym_identifier_token1,
      sym_variable_ref,
  [804] = 5,
    ACTIONS(178), 1,
      anon_sym_COMMA,
    ACTIONS(189), 1,
      anon_sym_RBRACE,
    ACTIONS(191), 1,
      sym__nl,
    STATE(53), 1,
      aux_sym__key_value_list_repeat2,
    STATE(67), 1,
      aux_sym__key_value_list_repeat1,
  [820] = 2,
    ACTIONS(81), 2,
      ts_builtin_sym_end,
      sym__nl,
    ACTIONS(86), 3,
      sym_header_name,
      anon_sym_AT,
      sym_separator,
  [830] = 5,
    ACTIONS(193), 1,
      anon_sym_COMMA,
    ACTIONS(195), 1,
      anon_sym_RBRACK,
    ACTIONS(197), 1,
      sym__nl,
    STATE(32), 1,
      aux_sym__json_list_values_repeat1,
    STATE(80), 1,
      aux_sym__key_value_list_repeat1,
  [846] = 5,
    ACTIONS(193), 1,
      anon_sym_COMMA,
    ACTIONS(195), 1,
      anon_sym_RBRACK,
    ACTIONS(197), 1,
      sym__nl,
    STATE(49), 1,
      aux_sym__json_list_values_repeat1,
    STATE(80), 1,
      aux_sym__key_value_list_repeat1,
  [862] = 4,
    ACTIONS(199), 1,
      anon_sym_AMP,
    ACTIONS(203), 1,
      sym__nl,
    STATE(50), 1,
      aux_sym_url_encoded_value_repeat1,
    ACTIONS(201), 2,
      aux_sym_url_encoded_value_token1,
      sym_variable_ref,
  [876] = 5,
    ACTIONS(52), 1,
      sym__nl,
    ACTIONS(97), 1,
      anon_sym_DQUOTE,
    STATE(13), 1,
      aux_sym__key_value_list_repeat1,
    STATE(98), 1,
      sym_json_key_value,
    STATE(114), 1,
      sym__json_key,
  [892] = 5,
    ACTIONS(97), 1,
      anon_sym_DQUOTE,
    ACTIONS(205), 1,
      sym__nl,
    STATE(51), 1,
      aux_sym__key_value_list_repeat1,
    STATE(98), 1,
      sym_json_key_value,
    STATE(114), 1,
      sym__json_key,
  [908] = 5,
    ACTIONS(207), 1,
      anon_sym_COMMA,
    ACTIONS(210), 1,
      anon_sym_RBRACE,
    ACTIONS(212), 1,
      sym__nl,
    STATE(43), 1,
      aux_sym__key_value_list_repeat2,
    STATE(93), 1,
      aux_sym__key_value_list_repeat1,
  [924] = 5,
    ACTIONS(178), 1,
      anon_sym_COMMA,
    ACTIONS(215), 1,
      anon_sym_RBRACE,
    ACTIONS(217), 1,
      sym__nl,
    STATE(43), 1,
      aux_sym__key_value_list_repeat2,
    STATE(83), 1,
      aux_sym__key_value_list_repeat1,
  [940] = 5,
    ACTIONS(174), 1,
      sym_separator,
    ACTIONS(219), 1,
      ts_builtin_sym_end,
    ACTIONS(221), 1,
      sym__nl,
    STATE(33), 1,
      aux_sym_source_file_repeat1,
    STATE(81), 1,
      aux_sym_source_file_repeat2,
  [956] = 5,
    ACTIONS(193), 1,
      anon_sym_COMMA,
    ACTIONS(223), 1,
      anon_sym_RBRACK,
    ACTIONS(225), 1,
      sym__nl,
    STATE(38), 1,
      aux_sym__json_list_values_repeat1,
    STATE(71), 1,
      aux_sym__key_value_list_repeat1,
  [972] = 4,
    STATE(62), 1,
      aux_sym_rest_of_line_repeat1,
    STATE(111), 1,
      sym_reason_phrase,
    STATE(127), 1,
      sym_rest_of_line,
    ACTIONS(9), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [986] = 4,
    STATE(62), 1,
      aux_sym_rest_of_line_repeat1,
    STATE(115), 1,
      sym_rest_of_line,
    STATE(135), 1,
      sym_url,
    ACTIONS(9), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [1000] = 5,
    ACTIONS(193), 1,
      anon_sym_COMMA,
    ACTIONS(227), 1,
      anon_sym_RBRACK,
    ACTIONS(229), 1,
      sym__nl,
    STATE(32), 1,
      aux_sym__json_list_values_repeat1,
    STATE(55), 1,
      aux_sym__key_value_list_repeat1,
  [1016] = 4,
    ACTIONS(231), 1,
      anon_sym_AMP,
    ACTIONS(236), 1,
      sym__nl,
    STATE(50), 1,
      aux_sym_url_encoded_value_repeat1,
    ACTIONS(233), 2,
      aux_sym_url_encoded_value_token1,
      sym_variable_ref,
  [1030] = 5,
    ACTIONS(52), 1,
      sym__nl,
    ACTIONS(97), 1,
      anon_sym_DQUOTE,
    STATE(13), 1,
      aux_sym__key_value_list_repeat1,
    STATE(100), 1,
      sym_json_key_value,
    STATE(114), 1,
      sym__json_key,
  [1046] = 5,
    ACTIONS(97), 1,
      anon_sym_DQUOTE,
    ACTIONS(238), 1,
      sym__nl,
    STATE(41), 1,
      aux_sym__key_value_list_repeat1,
    STATE(88), 1,
      sym_json_key_value,
    STATE(114), 1,
      sym__json_key,
  [1062] = 5,
    ACTIONS(178), 1,
      anon_sym_COMMA,
    ACTIONS(180), 1,
      anon_sym_RBRACE,
    ACTIONS(182), 1,
      sym__nl,
    STATE(43), 1,
      aux_sym__key_value_list_repeat2,
    STATE(77), 1,
      aux_sym__key_value_list_repeat1,
  [1078] = 3,
    STATE(35), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(240), 2,
      anon_sym_EQ2,
      anon_sym_DQUOTE,
    ACTIONS(242), 2,
      aux_sym_identifier_token1,
      sym_variable_ref,
  [1090] = 4,
    ACTIONS(52), 1,
      sym__nl,
    ACTIONS(244), 1,
      anon_sym_COMMA,
    ACTIONS(246), 1,
      anon_sym_RBRACK,
    STATE(13), 1,
      aux_sym__key_value_list_repeat1,
  [1103] = 4,
    ACTIONS(248), 1,
      sym_header_name,
    ACTIONS(250), 1,
      sym__nl,
    STATE(74), 1,
      aux_sym_request_repeat1,
    STATE(133), 1,
      sym_header,
  [1116] = 3,
    STATE(54), 1,
      aux_sym_identifier_repeat1,
    STATE(110), 1,
      sym_identifier,
    ACTIONS(252), 2,
      aux_sym_identifier_token1,
      sym_variable_ref,
  [1127] = 1,
    ACTIONS(254), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [1134] = 3,
    ACTIONS(259), 1,
      sym__nl,
    STATE(59), 1,
      aux_sym_rest_of_line_repeat1,
    ACTIONS(256), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [1145] = 3,
    STATE(62), 1,
      aux_sym_rest_of_line_repeat1,
    STATE(106), 1,
      sym_rest_of_line,
    ACTIONS(9), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [1156] = 1,
    ACTIONS(261), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [1163] = 3,
    ACTIONS(265), 1,
      sym__nl,
    STATE(59), 1,
      aux_sym_rest_of_line_repeat1,
    ACTIONS(263), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [1174] = 1,
    ACTIONS(267), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_separator,
      sym__nl,
  [1181] = 3,
    STATE(40), 1,
      aux_sym_url_encoded_value_repeat1,
    STATE(102), 1,
      sym_url_encoded_value,
    ACTIONS(269), 2,
      aux_sym_url_encoded_value_token1,
      sym_variable_ref,
  [1192] = 1,
    ACTIONS(271), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [1199] = 3,
    ACTIONS(275), 1,
      sym_separator,
    STATE(66), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(273), 2,
      ts_builtin_sym_end,
      sym__nl,
  [1210] = 4,
    ACTIONS(52), 1,
      sym__nl,
    ACTIONS(180), 1,
      anon_sym_RBRACE,
    ACTIONS(278), 1,
      anon_sym_COMMA,
    STATE(13), 1,
      aux_sym__key_value_list_repeat1,
  [1223] = 3,
    ACTIONS(280), 1,
      ts_builtin_sym_end,
    STATE(69), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(282), 2,
      sym_separator,
      sym__nl,
  [1234] = 3,
    ACTIONS(284), 1,
      ts_builtin_sym_end,
    STATE(69), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(286), 2,
      sym_separator,
      sym__nl,
  [1245] = 1,
    ACTIONS(289), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [1252] = 4,
    ACTIONS(52), 1,
      sym__nl,
    ACTIONS(195), 1,
      anon_sym_RBRACK,
    ACTIONS(244), 1,
      anon_sym_COMMA,
    STATE(13), 1,
      aux_sym__key_value_list_repeat1,
  [1265] = 3,
    STATE(54), 1,
      aux_sym_identifier_repeat1,
    STATE(121), 1,
      sym_identifier,
    ACTIONS(252), 2,
      aux_sym_identifier_token1,
      sym_variable_ref,
  [1276] = 1,
    ACTIONS(291), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [1283] = 4,
    ACTIONS(248), 1,
      sym_header_name,
    ACTIONS(293), 1,
      sym__nl,
    STATE(84), 1,
      aux_sym_request_repeat1,
    STATE(133), 1,
      sym_header,
  [1296] = 1,
    ACTIONS(295), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_separator,
      sym__nl,
  [1303] = 1,
    ACTIONS(297), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_separator,
      sym__nl,
  [1310] = 4,
    ACTIONS(52), 1,
      sym__nl,
    ACTIONS(215), 1,
      anon_sym_RBRACE,
    ACTIONS(278), 1,
      anon_sym_COMMA,
    STATE(13), 1,
      aux_sym__key_value_list_repeat1,
  [1323] = 1,
    ACTIONS(299), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [1330] = 3,
    STATE(62), 1,
      aux_sym_rest_of_line_repeat1,
    STATE(118), 1,
      sym_rest_of_line,
    ACTIONS(9), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [1341] = 4,
    ACTIONS(52), 1,
      sym__nl,
    ACTIONS(227), 1,
      anon_sym_RBRACK,
    ACTIONS(244), 1,
      anon_sym_COMMA,
    STATE(13), 1,
      aux_sym__key_value_list_repeat1,
  [1354] = 3,
    ACTIONS(172), 1,
      ts_builtin_sym_end,
    STATE(69), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(282), 2,
      sym_separator,
      sym__nl,
  [1365] = 1,
    ACTIONS(301), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_separator,
      sym__nl,
  [1372] = 4,
    ACTIONS(52), 1,
      sym__nl,
    ACTIONS(278), 1,
      anon_sym_COMMA,
    ACTIONS(303), 1,
      anon_sym_RBRACE,
    STATE(13), 1,
      aux_sym__key_value_list_repeat1,
  [1385] = 4,
    ACTIONS(81), 1,
      sym__nl,
    ACTIONS(305), 1,
      sym_header_name,
    STATE(84), 1,
      aux_sym_request_repeat1,
    STATE(133), 1,
      sym_header,
  [1398] = 1,
    ACTIONS(141), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_separator,
      sym__nl,
  [1405] = 3,
    STATE(62), 1,
      aux_sym_rest_of_line_repeat1,
    STATE(134), 1,
      sym_rest_of_line,
    ACTIONS(9), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [1416] = 3,
    STATE(54), 1,
      aux_sym_identifier_repeat1,
    STATE(136), 1,
      sym_identifier,
    ACTIONS(252), 2,
      aux_sym_identifier_token1,
      sym_variable_ref,
  [1427] = 1,
    ACTIONS(210), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym__nl,
  [1433] = 1,
    ACTIONS(308), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__nl,
  [1439] = 1,
    ACTIONS(273), 3,
      ts_builtin_sym_end,
      sym_separator,
      sym__nl,
  [1445] = 3,
    ACTIONS(310), 1,
      sym__identifier,
    STATE(103), 1,
      sym_url_encoded_key_value,
    STATE(124), 1,
      sym_url_encoded_key,
  [1455] = 3,
    ACTIONS(312), 1,
      anon_sym_AMP,
    ACTIONS(314), 1,
      sym__nl,
    STATE(94), 1,
      aux_sym_url_encoded_body_repeat1,
  [1465] = 3,
    ACTIONS(52), 1,
      sym__nl,
    ACTIONS(278), 1,
      anon_sym_COMMA,
    STATE(13), 1,
      aux_sym__key_value_list_repeat1,
  [1475] = 3,
    ACTIONS(316), 1,
      anon_sym_AMP,
    ACTIONS(319), 1,
      sym__nl,
    STATE(94), 1,
      aux_sym_url_encoded_body_repeat1,
  [1485] = 1,
    ACTIONS(167), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__nl,
  [1491] = 1,
    ACTIONS(321), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym__nl,
  [1497] = 3,
    ACTIONS(312), 1,
      anon_sym_AMP,
    ACTIONS(323), 1,
      sym__nl,
    STATE(92), 1,
      aux_sym_url_encoded_body_repeat1,
  [1507] = 1,
    ACTIONS(325), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym__nl,
  [1513] = 3,
    ACTIONS(52), 1,
      sym__nl,
    ACTIONS(244), 1,
      anon_sym_COMMA,
    STATE(13), 1,
      aux_sym__key_value_list_repeat1,
  [1523] = 1,
    ACTIONS(327), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym__nl,
  [1529] = 1,
    ACTIONS(329), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__nl,
  [1535] = 1,
    ACTIONS(331), 2,
      anon_sym_AMP,
      sym__nl,
  [1540] = 1,
    ACTIONS(319), 2,
      anon_sym_AMP,
      sym__nl,
  [1545] = 1,
    ACTIONS(81), 2,
      sym_header_name,
      sym__nl,
  [1550] = 1,
    ACTIONS(333), 1,
      sym__nl,
  [1554] = 1,
    ACTIONS(335), 1,
      sym__nl,
  [1558] = 1,
    ACTIONS(149), 1,
      anon_sym_RBRACE,
  [1562] = 1,
    ACTIONS(337), 1,
      aux_sym_http_version_token1,
  [1566] = 1,
    ACTIONS(339), 1,
      sym__nl,
  [1570] = 1,
    ACTIONS(341), 1,
      anon_sym_DQUOTE,
  [1574] = 1,
    ACTIONS(343), 1,
      sym__nl,
  [1578] = 1,
    ACTIONS(345), 1,
      sym__nl,
  [1582] = 1,
    ACTIONS(347), 1,
      sym__nl,
  [1586] = 1,
    ACTIONS(349), 1,
      anon_sym_COLON2,
  [1590] = 1,
    ACTIONS(351), 1,
      sym__nl,
  [1594] = 1,
    ACTIONS(353), 1,
      anon_sym_EQ,
  [1598] = 1,
    ACTIONS(355), 1,
      sym__nl,
  [1602] = 1,
    ACTIONS(357), 1,
      sym__nl,
  [1606] = 1,
    ACTIONS(359), 1,
      ts_builtin_sym_end,
  [1610] = 1,
    ACTIONS(361), 1,
      sym__nl,
  [1614] = 1,
    ACTIONS(363), 1,
      anon_sym_EQ2,
  [1618] = 1,
    ACTIONS(365), 1,
      sym__nl,
  [1622] = 1,
    ACTIONS(367), 1,
      anon_sym_COLON2,
  [1626] = 1,
    ACTIONS(369), 1,
      anon_sym_EQ,
  [1630] = 1,
    ACTIONS(371), 1,
      sym__nl,
  [1634] = 1,
    ACTIONS(373), 1,
      sym__nl,
  [1638] = 1,
    ACTIONS(375), 1,
      sym__nl,
  [1642] = 1,
    ACTIONS(377), 1,
      sym_status_code,
  [1646] = 1,
    ACTIONS(379), 1,
      sym__nl,
  [1650] = 1,
    ACTIONS(381), 1,
      sym__nl,
  [1654] = 1,
    ACTIONS(383), 1,
      sym_status_code,
  [1658] = 1,
    ACTIONS(385), 1,
      anon_sym_COLON,
  [1662] = 1,
    ACTIONS(387), 1,
      sym__nl,
  [1666] = 1,
    ACTIONS(389), 1,
      sym__nl,
  [1670] = 1,
    ACTIONS(391), 1,
      sym__nl,
  [1674] = 1,
    ACTIONS(393), 1,
      anon_sym_EQ2,
  [1678] = 1,
    ACTIONS(48), 1,
      anon_sym_RBRACK,
  [1682] = 1,
    ACTIONS(395), 1,
      sym__nl,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 52,
  [SMALL_STATE(4)] = 98,
  [SMALL_STATE(5)] = 141,
  [SMALL_STATE(6)] = 179,
  [SMALL_STATE(7)] = 213,
  [SMALL_STATE(8)] = 251,
  [SMALL_STATE(9)] = 282,
  [SMALL_STATE(10)] = 310,
  [SMALL_STATE(11)] = 338,
  [SMALL_STATE(12)] = 366,
  [SMALL_STATE(13)] = 394,
  [SMALL_STATE(14)] = 415,
  [SMALL_STATE(15)] = 445,
  [SMALL_STATE(16)] = 475,
  [SMALL_STATE(17)] = 497,
  [SMALL_STATE(18)] = 514,
  [SMALL_STATE(19)] = 532,
  [SMALL_STATE(20)] = 552,
  [SMALL_STATE(21)] = 574,
  [SMALL_STATE(22)] = 594,
  [SMALL_STATE(23)] = 609,
  [SMALL_STATE(24)] = 624,
  [SMALL_STATE(25)] = 639,
  [SMALL_STATE(26)] = 654,
  [SMALL_STATE(27)] = 669,
  [SMALL_STATE(28)] = 680,
  [SMALL_STATE(29)] = 695,
  [SMALL_STATE(30)] = 714,
  [SMALL_STATE(31)] = 729,
  [SMALL_STATE(32)] = 744,
  [SMALL_STATE(33)] = 760,
  [SMALL_STATE(34)] = 776,
  [SMALL_STATE(35)] = 792,
  [SMALL_STATE(36)] = 804,
  [SMALL_STATE(37)] = 820,
  [SMALL_STATE(38)] = 830,
  [SMALL_STATE(39)] = 846,
  [SMALL_STATE(40)] = 862,
  [SMALL_STATE(41)] = 876,
  [SMALL_STATE(42)] = 892,
  [SMALL_STATE(43)] = 908,
  [SMALL_STATE(44)] = 924,
  [SMALL_STATE(45)] = 940,
  [SMALL_STATE(46)] = 956,
  [SMALL_STATE(47)] = 972,
  [SMALL_STATE(48)] = 986,
  [SMALL_STATE(49)] = 1000,
  [SMALL_STATE(50)] = 1016,
  [SMALL_STATE(51)] = 1030,
  [SMALL_STATE(52)] = 1046,
  [SMALL_STATE(53)] = 1062,
  [SMALL_STATE(54)] = 1078,
  [SMALL_STATE(55)] = 1090,
  [SMALL_STATE(56)] = 1103,
  [SMALL_STATE(57)] = 1116,
  [SMALL_STATE(58)] = 1127,
  [SMALL_STATE(59)] = 1134,
  [SMALL_STATE(60)] = 1145,
  [SMALL_STATE(61)] = 1156,
  [SMALL_STATE(62)] = 1163,
  [SMALL_STATE(63)] = 1174,
  [SMALL_STATE(64)] = 1181,
  [SMALL_STATE(65)] = 1192,
  [SMALL_STATE(66)] = 1199,
  [SMALL_STATE(67)] = 1210,
  [SMALL_STATE(68)] = 1223,
  [SMALL_STATE(69)] = 1234,
  [SMALL_STATE(70)] = 1245,
  [SMALL_STATE(71)] = 1252,
  [SMALL_STATE(72)] = 1265,
  [SMALL_STATE(73)] = 1276,
  [SMALL_STATE(74)] = 1283,
  [SMALL_STATE(75)] = 1296,
  [SMALL_STATE(76)] = 1303,
  [SMALL_STATE(77)] = 1310,
  [SMALL_STATE(78)] = 1323,
  [SMALL_STATE(79)] = 1330,
  [SMALL_STATE(80)] = 1341,
  [SMALL_STATE(81)] = 1354,
  [SMALL_STATE(82)] = 1365,
  [SMALL_STATE(83)] = 1372,
  [SMALL_STATE(84)] = 1385,
  [SMALL_STATE(85)] = 1398,
  [SMALL_STATE(86)] = 1405,
  [SMALL_STATE(87)] = 1416,
  [SMALL_STATE(88)] = 1427,
  [SMALL_STATE(89)] = 1433,
  [SMALL_STATE(90)] = 1439,
  [SMALL_STATE(91)] = 1445,
  [SMALL_STATE(92)] = 1455,
  [SMALL_STATE(93)] = 1465,
  [SMALL_STATE(94)] = 1475,
  [SMALL_STATE(95)] = 1485,
  [SMALL_STATE(96)] = 1491,
  [SMALL_STATE(97)] = 1497,
  [SMALL_STATE(98)] = 1507,
  [SMALL_STATE(99)] = 1513,
  [SMALL_STATE(100)] = 1523,
  [SMALL_STATE(101)] = 1529,
  [SMALL_STATE(102)] = 1535,
  [SMALL_STATE(103)] = 1540,
  [SMALL_STATE(104)] = 1545,
  [SMALL_STATE(105)] = 1550,
  [SMALL_STATE(106)] = 1554,
  [SMALL_STATE(107)] = 1558,
  [SMALL_STATE(108)] = 1562,
  [SMALL_STATE(109)] = 1566,
  [SMALL_STATE(110)] = 1570,
  [SMALL_STATE(111)] = 1574,
  [SMALL_STATE(112)] = 1578,
  [SMALL_STATE(113)] = 1582,
  [SMALL_STATE(114)] = 1586,
  [SMALL_STATE(115)] = 1590,
  [SMALL_STATE(116)] = 1594,
  [SMALL_STATE(117)] = 1598,
  [SMALL_STATE(118)] = 1602,
  [SMALL_STATE(119)] = 1606,
  [SMALL_STATE(120)] = 1610,
  [SMALL_STATE(121)] = 1614,
  [SMALL_STATE(122)] = 1618,
  [SMALL_STATE(123)] = 1622,
  [SMALL_STATE(124)] = 1626,
  [SMALL_STATE(125)] = 1630,
  [SMALL_STATE(126)] = 1634,
  [SMALL_STATE(127)] = 1638,
  [SMALL_STATE(128)] = 1642,
  [SMALL_STATE(129)] = 1646,
  [SMALL_STATE(130)] = 1650,
  [SMALL_STATE(131)] = 1654,
  [SMALL_STATE(132)] = 1658,
  [SMALL_STATE(133)] = 1662,
  [SMALL_STATE(134)] = 1666,
  [SMALL_STATE(135)] = 1670,
  [SMALL_STATE(136)] = 1674,
  [SMALL_STATE(137)] = 1678,
  [SMALL_STATE(138)] = 1682,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 1, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 1, 0, 0),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 1, 0, 0), SHIFT(4),
  [20] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 4, 0, 0),
  [24] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [26] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 4, 0, 0),
  [28] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [30] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [32] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 3, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 3, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__key_value_list_repeat1, 2, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__key_value_list_repeat1, 2, 0, 0),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__key_value_list_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__block_repeat1, 2, 0, 0),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_repeat1, 2, 0, 0), SHIFT_REPEAT(72),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0), SHIFT_REPEAT(132),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3, 0, 0),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_request, 3, 0, 0), SHIFT(14),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 2, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 2, 0, 0),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_request, 2, 0, 0), SHIFT(15),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block, 2, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__block, 2, 0, 0), SHIFT(24),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__block, 2, 0, 0), SHIFT(25),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block, 3, 0, 0),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__block, 3, 0, 0), SHIFT(25),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2, 0, 0),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 5, 0, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, 0, 1),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block, 1, 0, 0),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__block, 1, 0, 0), SHIFT(23),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__json_list_values_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__json_list_values_repeat1, 2, 0, 0),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__json_list_values_repeat1, 2, 0, 0), SHIFT_REPEAT(99),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_value_list, 2, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2, 0, 0),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_value_list, 1, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_list_values, 2, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url_encoded_value, 1, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_encoded_value, 1, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__key_value_list_repeat2, 2, 0, 0), SHIFT_REPEAT(52),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__key_value_list_repeat2, 2, 0, 0),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__key_value_list_repeat2, 2, 0, 0), SHIFT_REPEAT(93),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_value_list, 3, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_list_values, 1, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_list_values, 3, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_url_encoded_value_repeat1, 2, 0, 0),
  [233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_url_encoded_value_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_url_encoded_value_repeat1, 2, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_list_values, 4, 0, 0),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 2, 0, 0),
  [256] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rest_of_line_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rest_of_line_repeat1, 2, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_list, 2, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rest_of_line, 1, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 3, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(69),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_list, 3, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 6, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 7, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_value_list, 4, 0, 0),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0), SHIFT_REPEAT(132),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__json_list_values_repeat1, 3, 0, 0),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_encoded_body, 2, 0, 0),
  [316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_url_encoded_body_repeat1, 2, 0, 0), SHIFT_REPEAT(91),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_url_encoded_body_repeat1, 2, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_key_value, 3, 0, 3),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_encoded_body, 1, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__key_value_list_repeat2, 3, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__key_value_list_repeat2, 4, 0, 0),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__json_list_values_repeat1, 4, 0, 0),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_encoded_key_value, 3, 0, 3),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response_start_line, 3, 0, 0),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 1, 0, 0),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_encoded_key, 1, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3, 0, 2),
  [359] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_key, 3, 0, 0),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 1, 0, 0),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reason_phrase, 1, 0, 0),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_version, 2, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_line, 1, 0, 0),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_line, 2, 0, 0),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_http2(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
