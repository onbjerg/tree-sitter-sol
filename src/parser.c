#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 48
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 31
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
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
  sym_comment = 17,
  sym_source_file = 18,
  sym__source_element = 19,
  sym_pragma_directive = 20,
  sym_pragma_token = 21,
  sym_import_directive = 22,
  sym_import_clause = 23,
  sym_import_name = 24,
  sym_import_alias = 25,
  sym_string_literal = 26,
  aux_sym_source_file_repeat1 = 27,
  aux_sym_import_clause_repeat1 = 28,
  aux_sym_string_literal_repeat1 = 29,
  aux_sym_string_literal_repeat2 = 30,
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
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_import_clause_repeat1] = "import_clause_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
  [aux_sym_string_literal_repeat2] = "string_literal_repeat2",
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
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_import_clause_repeat1] = aux_sym_import_clause_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
  [aux_sym_string_literal_repeat2] = aux_sym_string_literal_repeat2,
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
        '*', 18,
        ',', 20,
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
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 1:
      if (lookahead == '\r') ADVANCE(24);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 2:
      if (lookahead == '\r') ADVANCE(29);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(22);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '\\') ADVANCE(1);
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
      if (lookahead == '\\') ADVANCE(2);
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
      if (lookahead == '/') ADVANCE(34);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(32);
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
      if (lookahead == '/') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(17);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_pragma_value);
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(32);
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
      if (lookahead == '/') ADVANCE(34);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '\\') ADVANCE(1);
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
      if (lookahead == '/') ADVANCE(34);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == '\\') ADVANCE(2);
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
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == ';') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
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
      if (lookahead == 'f') ADVANCE(2);
      if (lookahead == 'i') ADVANCE(3);
      if (lookahead == 'p') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 's') ADVANCE(5);
      END_STATE();
    case 2:
      if (lookahead == 'r') ADVANCE(6);
      END_STATE();
    case 3:
      if (lookahead == 'm') ADVANCE(7);
      END_STATE();
    case 4:
      if (lookahead == 'r') ADVANCE(8);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 6:
      if (lookahead == 'o') ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == 'p') ADVANCE(10);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(11);
      END_STATE();
    case 9:
      if (lookahead == 'm') ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 11:
      if (lookahead == 'g') ADVANCE(14);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 13:
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead == 'm') ADVANCE(16);
      END_STATE();
    case 15:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(18);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_pragma);
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
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 8},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 9},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
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
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(36),
    [sym__source_element] = STATE(2),
    [sym_pragma_directive] = STATE(2),
    [sym_import_directive] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_pragma] = ACTIONS(7),
    [anon_sym_import] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_pragma,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    STATE(3), 4,
      sym__source_element,
      sym_pragma_directive,
      sym_import_directive,
      aux_sym_source_file_repeat1,
  [19] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      anon_sym_pragma,
    ACTIONS(18), 1,
      anon_sym_import,
    STATE(3), 4,
      sym__source_element,
      sym_pragma_directive,
      sym_import_directive,
      aux_sym_source_file_repeat1,
  [38] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_import_star,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    STATE(11), 1,
      sym_string_literal,
    STATE(42), 1,
      sym_import_clause,
  [60] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_as,
    STATE(30), 1,
      sym_import_alias,
    ACTIONS(29), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [74] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 4,
      anon_sym_SEMI,
      anon_sym_from,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [84] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    STATE(32), 1,
      sym_import_name,
  [97] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    STATE(13), 1,
      sym_import_name,
  [110] = 4,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      aux_sym_string_literal_token1,
    ACTIONS(45), 1,
      sym_comment,
    STATE(14), 1,
      aux_sym_string_literal_repeat1,
  [123] = 4,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(47), 1,
      aux_sym_string_literal_token2,
    STATE(15), 1,
      aux_sym_string_literal_repeat2,
  [136] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_as,
    ACTIONS(49), 1,
      anon_sym_SEMI,
    STATE(46), 1,
      sym_import_alias,
  [149] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 3,
      ts_builtin_sym_end,
      anon_sym_pragma,
      anon_sym_import,
  [158] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_COMMA,
    ACTIONS(55), 1,
      anon_sym_RBRACE,
    STATE(20), 1,
      aux_sym_import_clause_repeat1,
  [171] = 4,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      aux_sym_string_literal_token1,
    STATE(21), 1,
      aux_sym_string_literal_repeat1,
  [184] = 4,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_SQUOTE,
    ACTIONS(61), 1,
      aux_sym_string_literal_token2,
    STATE(22), 1,
      aux_sym_string_literal_repeat2,
  [197] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    STATE(39), 1,
      sym_string_literal,
  [210] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 3,
      ts_builtin_sym_end,
      anon_sym_pragma,
      anon_sym_import,
  [219] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    STATE(40), 1,
      sym_string_literal,
  [232] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    STATE(32), 1,
      sym_import_name,
  [245] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    ACTIONS(67), 1,
      anon_sym_COMMA,
    STATE(24), 1,
      aux_sym_import_clause_repeat1,
  [258] = 4,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      aux_sym_string_literal_token1,
    STATE(21), 1,
      aux_sym_string_literal_repeat1,
  [271] = 4,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(74), 1,
      anon_sym_SQUOTE,
    ACTIONS(76), 1,
      aux_sym_string_literal_token2,
    STATE(22), 1,
      aux_sym_string_literal_repeat2,
  [284] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 3,
      ts_builtin_sym_end,
      anon_sym_pragma,
      anon_sym_import,
  [293] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_COMMA,
    ACTIONS(84), 1,
      anon_sym_RBRACE,
    STATE(24), 1,
      aux_sym_import_clause_repeat1,
  [306] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 3,
      ts_builtin_sym_end,
      anon_sym_pragma,
      anon_sym_import,
  [315] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 3,
      ts_builtin_sym_end,
      anon_sym_pragma,
      anon_sym_import,
  [324] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_as,
    STATE(45), 1,
      sym_import_alias,
  [334] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      sym_pragma_name,
    STATE(43), 1,
      sym_pragma_token,
  [344] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 2,
      anon_sym_SEMI,
      anon_sym_as,
  [352] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [360] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 2,
      anon_sym_SEMI,
      anon_sym_as,
  [368] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [376] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      sym_identifier,
    STATE(32), 1,
      sym_import_name,
  [386] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(98), 1,
      sym_pragma_value,
  [393] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_from,
  [400] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      ts_builtin_sym_end,
  [407] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_from,
  [414] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_SEMI,
  [421] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_SEMI,
  [428] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_SEMI,
  [435] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      anon_sym_from,
  [442] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_from,
  [449] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_SEMI,
  [456] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      sym_identifier,
  [463] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_from,
  [470] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_SEMI,
  [477] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_from,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 19,
  [SMALL_STATE(4)] = 38,
  [SMALL_STATE(5)] = 60,
  [SMALL_STATE(6)] = 74,
  [SMALL_STATE(7)] = 84,
  [SMALL_STATE(8)] = 97,
  [SMALL_STATE(9)] = 110,
  [SMALL_STATE(10)] = 123,
  [SMALL_STATE(11)] = 136,
  [SMALL_STATE(12)] = 149,
  [SMALL_STATE(13)] = 158,
  [SMALL_STATE(14)] = 171,
  [SMALL_STATE(15)] = 184,
  [SMALL_STATE(16)] = 197,
  [SMALL_STATE(17)] = 210,
  [SMALL_STATE(18)] = 219,
  [SMALL_STATE(19)] = 232,
  [SMALL_STATE(20)] = 245,
  [SMALL_STATE(21)] = 258,
  [SMALL_STATE(22)] = 271,
  [SMALL_STATE(23)] = 284,
  [SMALL_STATE(24)] = 293,
  [SMALL_STATE(25)] = 306,
  [SMALL_STATE(26)] = 315,
  [SMALL_STATE(27)] = 324,
  [SMALL_STATE(28)] = 334,
  [SMALL_STATE(29)] = 344,
  [SMALL_STATE(30)] = 352,
  [SMALL_STATE(31)] = 360,
  [SMALL_STATE(32)] = 368,
  [SMALL_STATE(33)] = 376,
  [SMALL_STATE(34)] = 386,
  [SMALL_STATE(35)] = 393,
  [SMALL_STATE(36)] = 400,
  [SMALL_STATE(37)] = 407,
  [SMALL_STATE(38)] = 414,
  [SMALL_STATE(39)] = 421,
  [SMALL_STATE(40)] = 428,
  [SMALL_STATE(41)] = 435,
  [SMALL_STATE(42)] = 442,
  [SMALL_STATE(43)] = 449,
  [SMALL_STATE(44)] = 456,
  [SMALL_STATE(45)] = 463,
  [SMALL_STATE(46)] = 470,
  [SMALL_STATE(47)] = 477,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_name, 1, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_alias, 2, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma_directive, 3, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_directive, 3, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat2, 2, 0, 0),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat2, 2, 0, 0), SHIFT_REPEAT(22),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_directive, 4, 0, 0),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_clause_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_clause_repeat1, 2, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_directive, 5, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_directive, 6, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_name, 2, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_clause, 3, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_clause, 2, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma_token, 2, 0, 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_clause, 4, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_clause, 5, 0, 0),
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
