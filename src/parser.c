#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 96
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 53
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_pragma = 2,
  anon_sym_SEMI = 3,
  sym_pragma_name = 4,
  sym_pragma_value = 5,
  anon_sym_import = 6,
  anon_sym_from = 7,
  sym_import_star = 8,
  anon_sym_LBRACE = 9,
  anon_sym_COMMA = 10,
  anon_sym_RBRACE = 11,
  anon_sym_as = 12,
  anon_sym_DQUOTE = 13,
  aux_sym_string_literal_token1 = 14,
  anon_sym_SQUOTE = 15,
  aux_sym_string_literal_token2 = 16,
  anon_sym_abstract = 17,
  anon_sym_contract = 18,
  anon_sym_interface = 19,
  anon_sym_library = 20,
  anon_sym_is = 21,
  anon_sym_DOT = 22,
  anon_sym_LPAREN = 23,
  anon_sym_RPAREN = 24,
  sym_number_literal = 25,
  sym_comment = 26,
  sym_source_file = 27,
  sym__source_element = 28,
  sym_pragma_directive = 29,
  sym_pragma_token = 30,
  sym_import_directive = 31,
  sym_import_clause = 32,
  sym_import_name = 33,
  sym_import_alias = 34,
  sym_string_literal = 35,
  sym_contract_declaration = 36,
  sym_interface_declaration = 37,
  sym_library_declaration = 38,
  sym_inheritance_specifier = 39,
  sym_inheritance_type = 40,
  sym_contract_body = 41,
  sym_user_defined_type = 42,
  sym_call_arguments = 43,
  sym__expression = 44,
  aux_sym_source_file_repeat1 = 45,
  aux_sym_import_clause_repeat1 = 46,
  aux_sym_string_literal_repeat1 = 47,
  aux_sym_string_literal_repeat2 = 48,
  aux_sym_contract_declaration_repeat1 = 49,
  aux_sym_inheritance_specifier_repeat1 = 50,
  aux_sym_user_defined_type_repeat1 = 51,
  aux_sym_call_arguments_repeat1 = 52,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_pragma] = "pragma",
  [anon_sym_SEMI] = ";",
  [sym_pragma_name] = "pragma_name",
  [sym_pragma_value] = "pragma_value",
  [anon_sym_import] = "import",
  [anon_sym_from] = "from",
  [sym_import_star] = "import_star",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_as] = "as",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_literal_token1] = "string_literal_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_literal_token2] = "string_literal_token2",
  [anon_sym_abstract] = "abstract",
  [anon_sym_contract] = "contract",
  [anon_sym_interface] = "interface",
  [anon_sym_library] = "library",
  [anon_sym_is] = "is",
  [anon_sym_DOT] = ".",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_number_literal] = "number_literal",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__source_element] = "_source_element",
  [sym_pragma_directive] = "pragma_directive",
  [sym_pragma_token] = "pragma_token",
  [sym_import_directive] = "import_directive",
  [sym_import_clause] = "import_clause",
  [sym_import_name] = "import_name",
  [sym_import_alias] = "import_alias",
  [sym_string_literal] = "string_literal",
  [sym_contract_declaration] = "contract_declaration",
  [sym_interface_declaration] = "interface_declaration",
  [sym_library_declaration] = "library_declaration",
  [sym_inheritance_specifier] = "inheritance_specifier",
  [sym_inheritance_type] = "inheritance_type",
  [sym_contract_body] = "contract_body",
  [sym_user_defined_type] = "user_defined_type",
  [sym_call_arguments] = "call_arguments",
  [sym__expression] = "_expression",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_import_clause_repeat1] = "import_clause_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
  [aux_sym_string_literal_repeat2] = "string_literal_repeat2",
  [aux_sym_contract_declaration_repeat1] = "contract_declaration_repeat1",
  [aux_sym_inheritance_specifier_repeat1] = "inheritance_specifier_repeat1",
  [aux_sym_user_defined_type_repeat1] = "user_defined_type_repeat1",
  [aux_sym_call_arguments_repeat1] = "call_arguments_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_pragma] = anon_sym_pragma,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_pragma_name] = sym_pragma_name,
  [sym_pragma_value] = sym_pragma_value,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_from] = anon_sym_from,
  [sym_import_star] = sym_import_star,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_literal_token2] = aux_sym_string_literal_token2,
  [anon_sym_abstract] = anon_sym_abstract,
  [anon_sym_contract] = anon_sym_contract,
  [anon_sym_interface] = anon_sym_interface,
  [anon_sym_library] = anon_sym_library,
  [anon_sym_is] = anon_sym_is,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_number_literal] = sym_number_literal,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__source_element] = sym__source_element,
  [sym_pragma_directive] = sym_pragma_directive,
  [sym_pragma_token] = sym_pragma_token,
  [sym_import_directive] = sym_import_directive,
  [sym_import_clause] = sym_import_clause,
  [sym_import_name] = sym_import_name,
  [sym_import_alias] = sym_import_alias,
  [sym_string_literal] = sym_string_literal,
  [sym_contract_declaration] = sym_contract_declaration,
  [sym_interface_declaration] = sym_interface_declaration,
  [sym_library_declaration] = sym_library_declaration,
  [sym_inheritance_specifier] = sym_inheritance_specifier,
  [sym_inheritance_type] = sym_inheritance_type,
  [sym_contract_body] = sym_contract_body,
  [sym_user_defined_type] = sym_user_defined_type,
  [sym_call_arguments] = sym_call_arguments,
  [sym__expression] = sym__expression,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_import_clause_repeat1] = aux_sym_import_clause_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
  [aux_sym_string_literal_repeat2] = aux_sym_string_literal_repeat2,
  [aux_sym_contract_declaration_repeat1] = aux_sym_contract_declaration_repeat1,
  [aux_sym_inheritance_specifier_repeat1] = aux_sym_inheritance_specifier_repeat1,
  [aux_sym_user_defined_type_repeat1] = aux_sym_user_defined_type_repeat1,
  [aux_sym_call_arguments_repeat1] = aux_sym_call_arguments_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_pragma] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_pragma_name] = {
    .visible = true,
    .named = true,
  },
  [sym_pragma_value] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_from] = {
    .visible = true,
    .named = false,
  },
  [sym_import_star] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_literal_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_abstract] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_contract] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_interface] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_library] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_number_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__source_element] = {
    .visible = false,
    .named = true,
  },
  [sym_pragma_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_pragma_token] = {
    .visible = true,
    .named = true,
  },
  [sym_import_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_import_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_import_name] = {
    .visible = true,
    .named = true,
  },
  [sym_import_alias] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_contract_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_interface_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_library_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_inheritance_specifier] = {
    .visible = true,
    .named = true,
  },
  [sym_inheritance_type] = {
    .visible = true,
    .named = true,
  },
  [sym_contract_body] = {
    .visible = true,
    .named = true,
  },
  [sym_user_defined_type] = {
    .visible = true,
    .named = true,
  },
  [sym_call_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_import_clause_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_contract_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_inheritance_specifier_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_user_defined_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_call_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_name = 1,
  field_value = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
    {field_value, 1},
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
  [25] = 25,
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
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(10);
      ADVANCE_MAP(
        '"', 22,
        '\'', 27,
        '(', 33,
        ')', 34,
        '*', 18,
        ',', 20,
        '.', 32,
        '/', 5,
        ';', 11,
        '{', 19,
        '}', 21,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 1:
      if (lookahead == '\r') ADVANCE(29);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 2:
      if (lookahead == '\r') ADVANCE(24);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(22);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '\\') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(26);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(27);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == '\\') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(31);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(38);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(8);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(17);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_pragma_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_pragma_value);
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '/') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(17);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_pragma_value);
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == ';') ADVANCE(7);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_pragma_value);
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == ';') ADVANCE(7);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_pragma_value);
      if (lookahead == '/') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_pragma_value);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_import_star);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '\n') ADVANCE(23);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(38);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '\\') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(23);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      if (lookahead == '\n') ADVANCE(28);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(38);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == '\\') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(28);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == ';') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'a') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(2);
      if (lookahead == 'f') ADVANCE(3);
      if (lookahead == 'i') ADVANCE(4);
      if (lookahead == 'l') ADVANCE(5);
      if (lookahead == 'p') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'b') ADVANCE(7);
      if (lookahead == 's') ADVANCE(8);
      END_STATE();
    case 2:
      if (lookahead == 'o') ADVANCE(9);
      END_STATE();
    case 3:
      if (lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 4:
      if (lookahead == 'm') ADVANCE(11);
      if (lookahead == 'n') ADVANCE(12);
      if (lookahead == 's') ADVANCE(13);
      END_STATE();
    case 5:
      if (lookahead == 'i') ADVANCE(14);
      END_STATE();
    case 6:
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 7:
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 9:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 10:
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 11:
      if (lookahead == 'p') ADVANCE(19);
      END_STATE();
    case 12:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 14:
      if (lookahead == 'b') ADVANCE(21);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 16:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 17:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 18:
      if (lookahead == 'm') ADVANCE(25);
      END_STATE();
    case 19:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 21:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 22:
      if (lookahead == 'g') ADVANCE(29);
      END_STATE();
    case 23:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 24:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 26:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 27:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 29:
      if (lookahead == 'm') ADVANCE(35);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 33:
      if (lookahead == 'f') ADVANCE(39);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(42);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(43);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 40:
      if (lookahead == 'y') ADVANCE(45);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_pragma);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(48);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_library);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_contract);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 8},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 9},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_pragma] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [sym_import_star] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_abstract] = ACTIONS(1),
    [anon_sym_contract] = ACTIONS(1),
    [anon_sym_interface] = ACTIONS(1),
    [anon_sym_library] = ACTIONS(1),
    [anon_sym_is] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_number_literal] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(89),
    [sym__source_element] = STATE(2),
    [sym_pragma_directive] = STATE(2),
    [sym_import_directive] = STATE(2),
    [sym_contract_declaration] = STATE(2),
    [sym_interface_declaration] = STATE(2),
    [sym_library_declaration] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_pragma] = ACTIONS(7),
    [anon_sym_import] = ACTIONS(9),
    [anon_sym_abstract] = ACTIONS(11),
    [anon_sym_contract] = ACTIONS(13),
    [anon_sym_interface] = ACTIONS(15),
    [anon_sym_library] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_pragma,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_abstract,
    ACTIONS(13), 1,
      anon_sym_contract,
    ACTIONS(15), 1,
      anon_sym_interface,
    ACTIONS(17), 1,
      anon_sym_library,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    STATE(3), 7,
      sym__source_element,
      sym_pragma_directive,
      sym_import_directive,
      sym_contract_declaration,
      sym_interface_declaration,
      sym_library_declaration,
      aux_sym_source_file_repeat1,
  [34] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      anon_sym_pragma,
    ACTIONS(26), 1,
      anon_sym_import,
    ACTIONS(29), 1,
      anon_sym_abstract,
    ACTIONS(32), 1,
      anon_sym_contract,
    ACTIONS(35), 1,
      anon_sym_interface,
    ACTIONS(38), 1,
      anon_sym_library,
    STATE(3), 7,
      sym__source_element,
      sym_pragma_directive,
      sym_import_directive,
      sym_contract_declaration,
      sym_interface_declaration,
      sym_library_declaration,
      aux_sym_source_file_repeat1,
  [68] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 7,
      ts_builtin_sym_end,
      anon_sym_pragma,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_contract,
      anon_sym_interface,
      anon_sym_library,
  [81] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 7,
      ts_builtin_sym_end,
      anon_sym_pragma,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_contract,
      anon_sym_interface,
      anon_sym_library,
  [94] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 7,
      ts_builtin_sym_end,
      anon_sym_pragma,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_contract,
      anon_sym_interface,
      anon_sym_library,
  [107] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 7,
      ts_builtin_sym_end,
      anon_sym_pragma,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_contract,
      anon_sym_interface,
      anon_sym_library,
  [120] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 7,
      ts_builtin_sym_end,
      anon_sym_pragma,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_contract,
      anon_sym_interface,
      anon_sym_library,
  [133] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 7,
      ts_builtin_sym_end,
      anon_sym_pragma,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_contract,
      anon_sym_interface,
      anon_sym_library,
  [146] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 7,
      ts_builtin_sym_end,
      anon_sym_pragma,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_contract,
      anon_sym_interface,
      anon_sym_library,
  [159] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 7,
      ts_builtin_sym_end,
      anon_sym_pragma,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_contract,
      anon_sym_interface,
      anon_sym_library,
  [172] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 7,
      ts_builtin_sym_end,
      anon_sym_pragma,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_contract,
      anon_sym_interface,
      anon_sym_library,
  [185] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 7,
      ts_builtin_sym_end,
      anon_sym_pragma,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_contract,
      anon_sym_interface,
      anon_sym_library,
  [198] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 7,
      ts_builtin_sym_end,
      anon_sym_pragma,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_contract,
      anon_sym_interface,
      anon_sym_library,
  [211] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
    ACTIONS(63), 2,
      sym_number_literal,
      sym_identifier,
    STATE(57), 2,
      sym_string_literal,
      sym__expression,
  [232] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 7,
      ts_builtin_sym_end,
      anon_sym_pragma,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_contract,
      anon_sym_interface,
      anon_sym_library,
  [245] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(73), 2,
      sym_number_literal,
      sym_identifier,
    STATE(73), 2,
      sym_string_literal,
      sym__expression,
  [266] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    ACTIONS(73), 2,
      sym_number_literal,
      sym_identifier,
    STATE(73), 2,
      sym_string_literal,
      sym__expression,
  [287] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(79), 1,
      sym_import_star,
    ACTIONS(81), 1,
      anon_sym_LBRACE,
    STATE(43), 1,
      sym_string_literal,
    STATE(95), 1,
      sym_import_clause,
  [309] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_DOT,
    STATE(21), 1,
      aux_sym_user_defined_type_repeat1,
    ACTIONS(83), 4,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_is,
      anon_sym_LPAREN,
  [325] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_DOT,
    STATE(22), 1,
      aux_sym_user_defined_type_repeat1,
    ACTIONS(87), 4,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_is,
      anon_sym_LPAREN,
  [341] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_DOT,
    STATE(22), 1,
      aux_sym_user_defined_type_repeat1,
    ACTIONS(89), 4,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_is,
      anon_sym_LPAREN,
  [357] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 2,
      sym_number_literal,
      sym_identifier,
    STATE(73), 2,
      sym_string_literal,
      sym__expression,
  [375] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_LBRACE,
    ACTIONS(96), 1,
      anon_sym_is,
    STATE(14), 1,
      sym_contract_body,
    STATE(34), 2,
      sym_inheritance_specifier,
      aux_sym_contract_declaration_repeat1,
  [392] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_LBRACE,
    ACTIONS(96), 1,
      anon_sym_is,
    STATE(4), 1,
      sym_contract_body,
    STATE(34), 2,
      sym_inheritance_specifier,
      aux_sym_contract_declaration_repeat1,
  [409] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_LBRACE,
    ACTIONS(96), 1,
      anon_sym_is,
    STATE(7), 1,
      sym_contract_body,
    STATE(25), 2,
      sym_inheritance_specifier,
      aux_sym_contract_declaration_repeat1,
  [426] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_LBRACE,
    ACTIONS(96), 1,
      anon_sym_is,
    STATE(12), 1,
      sym_contract_body,
    STATE(34), 2,
      sym_inheritance_specifier,
      aux_sym_contract_declaration_repeat1,
  [443] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    STATE(53), 1,
      sym_call_arguments,
    ACTIONS(98), 3,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_is,
  [458] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_LBRACE,
    ACTIONS(96), 1,
      anon_sym_is,
    STATE(4), 1,
      sym_contract_body,
    STATE(24), 2,
      sym_inheritance_specifier,
      aux_sym_contract_declaration_repeat1,
  [475] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_LBRACE,
    ACTIONS(96), 1,
      anon_sym_is,
    STATE(8), 1,
      sym_contract_body,
    STATE(27), 2,
      sym_inheritance_specifier,
      aux_sym_contract_declaration_repeat1,
  [492] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_identifier,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    ACTIONS(106), 1,
      anon_sym_is,
    STATE(28), 1,
      sym_user_defined_type,
    STATE(54), 1,
      sym_inheritance_type,
  [511] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_identifier,
    ACTIONS(108), 1,
      anon_sym_LBRACE,
    ACTIONS(110), 1,
      anon_sym_is,
    STATE(28), 1,
      sym_user_defined_type,
    STATE(54), 1,
      sym_inheritance_type,
  [530] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 5,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_is,
      anon_sym_DOT,
      anon_sym_LPAREN,
  [541] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      anon_sym_LBRACE,
    ACTIONS(114), 1,
      anon_sym_is,
    STATE(34), 2,
      sym_inheritance_specifier,
      aux_sym_contract_declaration_repeat1,
  [555] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_as,
    STATE(71), 1,
      sym_import_alias,
    ACTIONS(117), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [569] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_COMMA,
    STATE(37), 1,
      aux_sym_inheritance_specifier_repeat1,
    ACTIONS(121), 2,
      anon_sym_LBRACE,
      anon_sym_is,
  [583] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_COMMA,
    STATE(39), 1,
      aux_sym_inheritance_specifier_repeat1,
    ACTIONS(104), 2,
      anon_sym_LBRACE,
      anon_sym_is,
  [597] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 4,
      anon_sym_SEMI,
      anon_sym_from,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [607] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_COMMA,
    STATE(39), 1,
      aux_sym_inheritance_specifier_repeat1,
    ACTIONS(129), 2,
      anon_sym_LBRACE,
      anon_sym_is,
  [621] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_as,
      anon_sym_RPAREN,
  [631] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_as,
      anon_sym_RPAREN,
  [641] = 4,
    ACTIONS(138), 1,
      anon_sym_SQUOTE,
    ACTIONS(140), 1,
      aux_sym_string_literal_token2,
    ACTIONS(143), 1,
      sym_comment,
    STATE(42), 1,
      aux_sym_string_literal_repeat2,
  [654] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_as,
    ACTIONS(145), 1,
      anon_sym_SEMI,
    STATE(83), 1,
      sym_import_alias,
  [667] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    STATE(90), 1,
      sym_string_literal,
  [680] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(149), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      sym_import_name,
  [693] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_RBRACE,
    ACTIONS(151), 1,
      anon_sym_COMMA,
    STATE(67), 1,
      aux_sym_import_clause_repeat1,
  [706] = 4,
    ACTIONS(143), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_DQUOTE,
    ACTIONS(155), 1,
      aux_sym_string_literal_token1,
    STATE(47), 1,
      aux_sym_string_literal_repeat1,
  [719] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(158), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      sym_import_name,
  [732] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      anon_sym_COMMA,
    ACTIONS(162), 1,
      anon_sym_RBRACE,
    STATE(46), 1,
      aux_sym_import_clause_repeat1,
  [745] = 4,
    ACTIONS(143), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_DQUOTE,
    ACTIONS(166), 1,
      aux_sym_string_literal_token1,
    STATE(47), 1,
      aux_sym_string_literal_repeat1,
  [758] = 4,
    ACTIONS(143), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_SQUOTE,
    ACTIONS(168), 1,
      aux_sym_string_literal_token2,
    STATE(42), 1,
      aux_sym_string_literal_repeat2,
  [771] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    STATE(78), 1,
      sym_string_literal,
  [784] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 3,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_is,
  [793] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 3,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_is,
  [802] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      sym_identifier,
    STATE(28), 1,
      sym_user_defined_type,
    STATE(36), 1,
      sym_inheritance_type,
  [815] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 3,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_is,
  [824] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_COMMA,
    ACTIONS(178), 1,
      anon_sym_RPAREN,
    STATE(61), 1,
      aux_sym_call_arguments_repeat1,
  [837] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      sym_identifier,
    STATE(28), 1,
      sym_user_defined_type,
    STATE(54), 1,
      sym_inheritance_type,
  [850] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(180), 1,
      anon_sym_RBRACE,
    STATE(49), 1,
      sym_import_name,
  [863] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 3,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_is,
  [872] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(184), 1,
      anon_sym_COMMA,
    STATE(64), 1,
      aux_sym_call_arguments_repeat1,
  [885] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 3,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_is,
  [894] = 4,
    ACTIONS(143), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
    ACTIONS(190), 1,
      aux_sym_string_literal_token1,
    STATE(50), 1,
      aux_sym_string_literal_repeat1,
  [907] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_COMMA,
    ACTIONS(195), 1,
      anon_sym_RPAREN,
    STATE(64), 1,
      aux_sym_call_arguments_repeat1,
  [920] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 3,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_is,
  [929] = 4,
    ACTIONS(143), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_SQUOTE,
    ACTIONS(199), 1,
      aux_sym_string_literal_token2,
    STATE(51), 1,
      aux_sym_string_literal_repeat2,
  [942] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_COMMA,
    ACTIONS(204), 1,
      anon_sym_RBRACE,
    STATE(67), 1,
      aux_sym_import_clause_repeat1,
  [955] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      sym_pragma_name,
    STATE(84), 1,
      sym_pragma_token,
  [965] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(74), 1,
      sym_import_name,
  [975] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_LBRACE,
    STATE(9), 1,
      sym_contract_body,
  [985] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [993] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_as,
    STATE(93), 1,
      sym_import_alias,
  [1003] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1011] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1019] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      sym_identifier,
  [1026] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_from,
  [1033] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      sym_identifier,
  [1040] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_SEMI,
  [1047] = 2,
    ACTIONS(143), 1,
      sym_comment,
    ACTIONS(218), 1,
      sym_pragma_value,
  [1054] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      anon_sym_contract,
  [1061] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      sym_identifier,
  [1068] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_from,
  [1075] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_SEMI,
  [1082] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_SEMI,
  [1089] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_RBRACE,
  [1096] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym_identifier,
  [1103] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      sym_identifier,
  [1110] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_from,
  [1117] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      ts_builtin_sym_end,
  [1124] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_SEMI,
  [1131] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_SEMI,
  [1138] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_from,
  [1145] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      anon_sym_from,
  [1152] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      sym_identifier,
  [1159] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_from,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 34,
  [SMALL_STATE(4)] = 68,
  [SMALL_STATE(5)] = 81,
  [SMALL_STATE(6)] = 94,
  [SMALL_STATE(7)] = 107,
  [SMALL_STATE(8)] = 120,
  [SMALL_STATE(9)] = 133,
  [SMALL_STATE(10)] = 146,
  [SMALL_STATE(11)] = 159,
  [SMALL_STATE(12)] = 172,
  [SMALL_STATE(13)] = 185,
  [SMALL_STATE(14)] = 198,
  [SMALL_STATE(15)] = 211,
  [SMALL_STATE(16)] = 232,
  [SMALL_STATE(17)] = 245,
  [SMALL_STATE(18)] = 266,
  [SMALL_STATE(19)] = 287,
  [SMALL_STATE(20)] = 309,
  [SMALL_STATE(21)] = 325,
  [SMALL_STATE(22)] = 341,
  [SMALL_STATE(23)] = 357,
  [SMALL_STATE(24)] = 375,
  [SMALL_STATE(25)] = 392,
  [SMALL_STATE(26)] = 409,
  [SMALL_STATE(27)] = 426,
  [SMALL_STATE(28)] = 443,
  [SMALL_STATE(29)] = 458,
  [SMALL_STATE(30)] = 475,
  [SMALL_STATE(31)] = 492,
  [SMALL_STATE(32)] = 511,
  [SMALL_STATE(33)] = 530,
  [SMALL_STATE(34)] = 541,
  [SMALL_STATE(35)] = 555,
  [SMALL_STATE(36)] = 569,
  [SMALL_STATE(37)] = 583,
  [SMALL_STATE(38)] = 597,
  [SMALL_STATE(39)] = 607,
  [SMALL_STATE(40)] = 621,
  [SMALL_STATE(41)] = 631,
  [SMALL_STATE(42)] = 641,
  [SMALL_STATE(43)] = 654,
  [SMALL_STATE(44)] = 667,
  [SMALL_STATE(45)] = 680,
  [SMALL_STATE(46)] = 693,
  [SMALL_STATE(47)] = 706,
  [SMALL_STATE(48)] = 719,
  [SMALL_STATE(49)] = 732,
  [SMALL_STATE(50)] = 745,
  [SMALL_STATE(51)] = 758,
  [SMALL_STATE(52)] = 771,
  [SMALL_STATE(53)] = 784,
  [SMALL_STATE(54)] = 793,
  [SMALL_STATE(55)] = 802,
  [SMALL_STATE(56)] = 815,
  [SMALL_STATE(57)] = 824,
  [SMALL_STATE(58)] = 837,
  [SMALL_STATE(59)] = 850,
  [SMALL_STATE(60)] = 863,
  [SMALL_STATE(61)] = 872,
  [SMALL_STATE(62)] = 885,
  [SMALL_STATE(63)] = 894,
  [SMALL_STATE(64)] = 907,
  [SMALL_STATE(65)] = 920,
  [SMALL_STATE(66)] = 929,
  [SMALL_STATE(67)] = 942,
  [SMALL_STATE(68)] = 955,
  [SMALL_STATE(69)] = 965,
  [SMALL_STATE(70)] = 975,
  [SMALL_STATE(71)] = 985,
  [SMALL_STATE(72)] = 993,
  [SMALL_STATE(73)] = 1003,
  [SMALL_STATE(74)] = 1011,
  [SMALL_STATE(75)] = 1019,
  [SMALL_STATE(76)] = 1026,
  [SMALL_STATE(77)] = 1033,
  [SMALL_STATE(78)] = 1040,
  [SMALL_STATE(79)] = 1047,
  [SMALL_STATE(80)] = 1054,
  [SMALL_STATE(81)] = 1061,
  [SMALL_STATE(82)] = 1068,
  [SMALL_STATE(83)] = 1075,
  [SMALL_STATE(84)] = 1082,
  [SMALL_STATE(85)] = 1089,
  [SMALL_STATE(86)] = 1096,
  [SMALL_STATE(87)] = 1103,
  [SMALL_STATE(88)] = 1110,
  [SMALL_STATE(89)] = 1117,
  [SMALL_STATE(90)] = 1124,
  [SMALL_STATE(91)] = 1131,
  [SMALL_STATE(92)] = 1138,
  [SMALL_STATE(93)] = 1145,
  [SMALL_STATE(94)] = 1152,
  [SMALL_STATE(95)] = 1159,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(81),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(86),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract_declaration, 4, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma_directive, 3, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_directive, 3, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract_declaration, 3, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_declaration, 3, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_library_declaration, 3, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_directive, 4, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract_body, 2, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_declaration, 4, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_directive, 5, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract_declaration, 5, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_directive, 6, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_defined_type, 1, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_defined_type, 2, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_user_defined_type_repeat1, 2, 0, 0),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_user_defined_type_repeat1, 2, 0, 0), SHIFT_REPEAT(77),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inheritance_type, 1, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inheritance_specifier, 3, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inheritance_specifier, 3, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inheritance_specifier, 4, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inheritance_specifier, 4, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_contract_declaration_repeat1, 2, 0, 0),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_contract_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_name, 1, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inheritance_specifier, 2, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_alias, 2, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inheritance_specifier_repeat1, 2, 0, 0),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inheritance_specifier_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat2, 2, 0, 0),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat2, 2, 0, 0), SHIFT_REPEAT(42),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inheritance_type, 2, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_arguments, 2, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_arguments, 3, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_arguments, 4, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_arguments_repeat1, 2, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_arguments, 5, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_clause_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_clause_repeat1, 2, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_name, 2, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_clause, 3, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_clause, 5, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_clause, 2, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma_token, 2, 0, 1),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_clause, 4, 0, 0),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
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

TS_PUBLIC const TSLanguage *tree_sitter_solidity(void) {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
