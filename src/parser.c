#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 133
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 90
#define ALIAS_COUNT 0
#define TOKEN_COUNT 52
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
  anon_sym_EQ = 26,
  anon_sym_constant = 27,
  anon_sym_bool = 28,
  anon_sym_string = 29,
  anon_sym_address = 30,
  anon_sym_bytes = 31,
  aux_sym_primitive_type_token1 = 32,
  aux_sym_primitive_type_token2 = 33,
  aux_sym_primitive_type_token3 = 34,
  anon_sym_LBRACK = 35,
  anon_sym_RBRACK = 36,
  anon_sym_mapping = 37,
  anon_sym_EQ_GT = 38,
  anon_sym_public = 39,
  anon_sym_private = 40,
  anon_sym_internal = 41,
  anon_sym_external = 42,
  anon_sym_immutable = 43,
  anon_sym_pure = 44,
  anon_sym_view = 45,
  anon_sym_payable = 46,
  anon_sym_memory = 47,
  anon_sym_storage = 48,
  anon_sym_calldata = 49,
  anon_sym_transient = 50,
  sym_comment = 51,
  sym_source_file = 52,
  sym__source_element = 53,
  sym_pragma_directive = 54,
  sym_pragma_token = 55,
  sym_import_directive = 56,
  sym_import_clause = 57,
  sym_import_name = 58,
  sym_import_alias = 59,
  sym_string_literal = 60,
  sym_contract_declaration = 61,
  sym_interface_declaration = 62,
  sym_library_declaration = 63,
  sym_inheritance_specifier = 64,
  sym_inheritance_type = 65,
  sym_contract_body = 66,
  sym__contract_member = 67,
  sym_user_defined_type = 68,
  sym_call_arguments = 69,
  sym__expression = 70,
  sym_state_variable_declaration = 71,
  sym_constant_variable_declaration = 72,
  sym_type_name = 73,
  sym_primitive_type = 74,
  sym_array_type = 75,
  sym_mapping_type = 76,
  sym_visibility = 77,
  sym_state_mutability = 78,
  sym_storage_location = 79,
  aux_sym_source_file_repeat1 = 80,
  aux_sym_import_clause_repeat1 = 81,
  aux_sym_string_literal_repeat1 = 82,
  aux_sym_string_literal_repeat2 = 83,
  aux_sym_contract_declaration_repeat1 = 84,
  aux_sym_inheritance_specifier_repeat1 = 85,
  aux_sym_contract_body_repeat1 = 86,
  aux_sym_user_defined_type_repeat1 = 87,
  aux_sym_call_arguments_repeat1 = 88,
  aux_sym_state_variable_declaration_repeat1 = 89,
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
  [anon_sym_EQ] = "=",
  [anon_sym_constant] = "constant",
  [anon_sym_bool] = "bool",
  [anon_sym_string] = "string",
  [anon_sym_address] = "address",
  [anon_sym_bytes] = "bytes",
  [aux_sym_primitive_type_token1] = "primitive_type_token1",
  [aux_sym_primitive_type_token2] = "primitive_type_token2",
  [aux_sym_primitive_type_token3] = "primitive_type_token3",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_mapping] = "mapping",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_public] = "public",
  [anon_sym_private] = "private",
  [anon_sym_internal] = "internal",
  [anon_sym_external] = "external",
  [anon_sym_immutable] = "immutable",
  [anon_sym_pure] = "pure",
  [anon_sym_view] = "view",
  [anon_sym_payable] = "payable",
  [anon_sym_memory] = "memory",
  [anon_sym_storage] = "storage",
  [anon_sym_calldata] = "calldata",
  [anon_sym_transient] = "transient",
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
  [sym__contract_member] = "_contract_member",
  [sym_user_defined_type] = "user_defined_type",
  [sym_call_arguments] = "call_arguments",
  [sym__expression] = "_expression",
  [sym_state_variable_declaration] = "state_variable_declaration",
  [sym_constant_variable_declaration] = "constant_variable_declaration",
  [sym_type_name] = "type_name",
  [sym_primitive_type] = "primitive_type",
  [sym_array_type] = "array_type",
  [sym_mapping_type] = "mapping_type",
  [sym_visibility] = "visibility",
  [sym_state_mutability] = "state_mutability",
  [sym_storage_location] = "storage_location",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_import_clause_repeat1] = "import_clause_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
  [aux_sym_string_literal_repeat2] = "string_literal_repeat2",
  [aux_sym_contract_declaration_repeat1] = "contract_declaration_repeat1",
  [aux_sym_inheritance_specifier_repeat1] = "inheritance_specifier_repeat1",
  [aux_sym_contract_body_repeat1] = "contract_body_repeat1",
  [aux_sym_user_defined_type_repeat1] = "user_defined_type_repeat1",
  [aux_sym_call_arguments_repeat1] = "call_arguments_repeat1",
  [aux_sym_state_variable_declaration_repeat1] = "state_variable_declaration_repeat1",
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
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_constant] = anon_sym_constant,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_address] = anon_sym_address,
  [anon_sym_bytes] = anon_sym_bytes,
  [aux_sym_primitive_type_token1] = aux_sym_primitive_type_token1,
  [aux_sym_primitive_type_token2] = aux_sym_primitive_type_token2,
  [aux_sym_primitive_type_token3] = aux_sym_primitive_type_token3,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_mapping] = anon_sym_mapping,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_public] = anon_sym_public,
  [anon_sym_private] = anon_sym_private,
  [anon_sym_internal] = anon_sym_internal,
  [anon_sym_external] = anon_sym_external,
  [anon_sym_immutable] = anon_sym_immutable,
  [anon_sym_pure] = anon_sym_pure,
  [anon_sym_view] = anon_sym_view,
  [anon_sym_payable] = anon_sym_payable,
  [anon_sym_memory] = anon_sym_memory,
  [anon_sym_storage] = anon_sym_storage,
  [anon_sym_calldata] = anon_sym_calldata,
  [anon_sym_transient] = anon_sym_transient,
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
  [sym__contract_member] = sym__contract_member,
  [sym_user_defined_type] = sym_user_defined_type,
  [sym_call_arguments] = sym_call_arguments,
  [sym__expression] = sym__expression,
  [sym_state_variable_declaration] = sym_state_variable_declaration,
  [sym_constant_variable_declaration] = sym_constant_variable_declaration,
  [sym_type_name] = sym_type_name,
  [sym_primitive_type] = sym_primitive_type,
  [sym_array_type] = sym_array_type,
  [sym_mapping_type] = sym_mapping_type,
  [sym_visibility] = sym_visibility,
  [sym_state_mutability] = sym_state_mutability,
  [sym_storage_location] = sym_storage_location,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_import_clause_repeat1] = aux_sym_import_clause_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
  [aux_sym_string_literal_repeat2] = aux_sym_string_literal_repeat2,
  [aux_sym_contract_declaration_repeat1] = aux_sym_contract_declaration_repeat1,
  [aux_sym_inheritance_specifier_repeat1] = aux_sym_inheritance_specifier_repeat1,
  [aux_sym_contract_body_repeat1] = aux_sym_contract_body_repeat1,
  [aux_sym_user_defined_type_repeat1] = aux_sym_user_defined_type_repeat1,
  [aux_sym_call_arguments_repeat1] = aux_sym_call_arguments_repeat1,
  [aux_sym_state_variable_declaration_repeat1] = aux_sym_state_variable_declaration_repeat1,
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
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_constant] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_address] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_primitive_type_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_primitive_type_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_primitive_type_token3] = {
    .visible = false,
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
  [anon_sym_mapping] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_public] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_private] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_internal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_external] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_immutable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pure] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_view] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_payable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_memory] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_storage] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_calldata] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_transient] = {
    .visible = true,
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
  [sym__contract_member] = {
    .visible = false,
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
  [sym_state_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_constant_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_type_name] = {
    .visible = true,
    .named = true,
  },
  [sym_primitive_type] = {
    .visible = true,
    .named = true,
  },
  [sym_array_type] = {
    .visible = true,
    .named = true,
  },
  [sym_mapping_type] = {
    .visible = true,
    .named = true,
  },
  [sym_visibility] = {
    .visible = true,
    .named = true,
  },
  [sym_state_mutability] = {
    .visible = true,
    .named = true,
  },
  [sym_storage_location] = {
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
  [aux_sym_contract_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_inheritance_specifier_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_contract_body_repeat1] = {
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
  [aux_sym_state_variable_declaration_repeat1] = {
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
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(12);
      ADVANCE_MAP(
        '"', 24,
        '\'', 29,
        '(', 35,
        ')', 36,
        '*', 20,
        ',', 22,
        '.', 34,
        '/', 6,
        ';', 13,
        '=', 39,
        '[', 40,
        ']', 41,
        '{', 21,
        '}', 23,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 1:
      if (lookahead == '\r') ADVANCE(26);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 2:
      if (lookahead == '\r') ADVANCE(31);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(24);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '\\') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(28);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '\\') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(33);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '(', 35,
        ')', 36,
        ',', 22,
        '.', 34,
        '/', 6,
        '=', 11,
        '[', 40,
        '{', 21,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(5);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(45);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == ';') ADVANCE(13);
      if (lookahead == '=') ADVANCE(38);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(19);
      END_STATE();
    case 11:
      if (lookahead == '>') ADVANCE(42);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_pragma_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_pragma_value);
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == '/') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(19);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_pragma_value);
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == ';') ADVANCE(8);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_pragma_value);
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == ';') ADVANCE(8);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_pragma_value);
      if (lookahead == '/') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_pragma_value);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_import_star);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '\n') ADVANCE(25);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(45);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '\\') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(25);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      if (lookahead == '\n') ADVANCE(30);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(45);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '\\') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(30);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(42);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == ';') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
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
      ADVANCE_MAP(
        'a', 1,
        'b', 2,
        'c', 3,
        'e', 4,
        'f', 5,
        'i', 6,
        'l', 7,
        'm', 8,
        'p', 9,
        's', 10,
        't', 11,
        'u', 12,
        'v', 13,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'b') ADVANCE(14);
      if (lookahead == 'd') ADVANCE(15);
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 2:
      if (lookahead == 'o') ADVANCE(17);
      if (lookahead == 'y') ADVANCE(18);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 4:
      if (lookahead == 'x') ADVANCE(21);
      END_STATE();
    case 5:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 6:
      if (lookahead == 'm') ADVANCE(23);
      if (lookahead == 'n') ADVANCE(24);
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 7:
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(27);
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(29);
      if (lookahead == 'r') ADVANCE(30);
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 10:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 11:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 12:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 13:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 14:
      if (lookahead == 's') ADVANCE(36);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(37);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 17:
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 18:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 20:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 21:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 22:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 23:
      if (lookahead == 'm') ADVANCE(44);
      if (lookahead == 'p') ADVANCE(45);
      END_STATE();
    case 24:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 26:
      if (lookahead == 'b') ADVANCE(47);
      END_STATE();
    case 27:
      if (lookahead == 'p') ADVANCE(48);
      END_STATE();
    case 28:
      if (lookahead == 'm') ADVANCE(49);
      END_STATE();
    case 29:
      if (lookahead == 'y') ADVANCE(50);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(51);
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 31:
      if (lookahead == 'b') ADVANCE(53);
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 32:
      if (lookahead == 'o') ADVANCE(55);
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 34:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 37:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 41:
      if (lookahead == 's') ADVANCE(65);
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 43:
      if (lookahead == 'm') ADVANCE(68);
      END_STATE();
    case 44:
      if (lookahead == 'u') ADVANCE(69);
      END_STATE();
    case 45:
      if (lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_primitive_type_token2);
      ADVANCE_MAP(
        '1', 71,
        '2', 72,
        '3', 73,
        '4', 74,
        '5', 75,
        '6', 76,
        '7', 77,
        '8', 78,
        '9', 79,
        'e', 80,
      );
      END_STATE();
    case 47:
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 48:
      if (lookahead == 'p') ADVANCE(82);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(84);
      END_STATE();
    case 51:
      if (lookahead == 'g') ADVANCE(85);
      END_STATE();
    case 52:
      if (lookahead == 'v') ADVANCE(86);
      END_STATE();
    case 53:
      if (lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 55:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 59:
      if (lookahead == 'w') ADVANCE(93);
      END_STATE();
    case 60:
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 63:
      if (lookahead == 's') ADVANCE(96);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(97);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 66:
      if (lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 67:
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 70:
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 71:
      ADVANCE_MAP(
        '0', 103,
        '1', 104,
        '2', 105,
        '3', 106,
        '4', 107,
        '5', 108,
        '6', 109,
        '7', 110,
        '8', 111,
        '9', 112,
      );
      END_STATE();
    case 72:
      if (lookahead == '0') ADVANCE(113);
      if (lookahead == '1') ADVANCE(114);
      if (lookahead == '2') ADVANCE(115);
      if (lookahead == '3') ADVANCE(116);
      if (lookahead == '4') ADVANCE(117);
      if (lookahead == '5') ADVANCE(118);
      END_STATE();
    case 73:
      if (lookahead == '2') ADVANCE(119);
      END_STATE();
    case 74:
      if (lookahead == '0' ||
          lookahead == '8') ADVANCE(119);
      END_STATE();
    case 75:
      if (lookahead == '6') ADVANCE(119);
      END_STATE();
    case 76:
      if (lookahead == '4') ADVANCE(119);
      END_STATE();
    case 77:
      if (lookahead == '2') ADVANCE(119);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_primitive_type_token2);
      if (lookahead == '0' ||
          lookahead == '8') ADVANCE(119);
      END_STATE();
    case 79:
      if (lookahead == '6') ADVANCE(119);
      END_STATE();
    case 80:
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 81:
      if (lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 83:
      if (lookahead == 'r') ADVANCE(123);
      END_STATE();
    case 84:
      if (lookahead == 'b') ADVANCE(124);
      END_STATE();
    case 85:
      if (lookahead == 'm') ADVANCE(125);
      END_STATE();
    case 86:
      if (lookahead == 'a') ADVANCE(126);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(127);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_pure);
      END_STATE();
    case 89:
      if (lookahead == 'a') ADVANCE(128);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(129);
      END_STATE();
    case 91:
      if (lookahead == 's') ADVANCE(130);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_primitive_type_token1);
      ADVANCE_MAP(
        '1', 131,
        '2', 132,
        '3', 133,
        '4', 134,
        '5', 135,
        '6', 136,
        '7', 137,
        '8', 138,
        '9', 139,
      );
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_view);
      END_STATE();
    case 94:
      if (lookahead == 'a') ADVANCE(140);
      END_STATE();
    case 95:
      if (lookahead == 's') ADVANCE(141);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_bytes);
      if (lookahead == '1') ADVANCE(142);
      if (lookahead == '2') ADVANCE(143);
      if (lookahead == '3') ADVANCE(144);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(145);
      END_STATE();
    case 97:
      if (lookahead == 'a') ADVANCE(146);
      END_STATE();
    case 98:
      if (lookahead == 'a') ADVANCE(147);
      END_STATE();
    case 99:
      if (lookahead == 'a') ADVANCE(148);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(149);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(150);
      END_STATE();
    case 102:
      if (lookahead == 't') ADVANCE(151);
      END_STATE();
    case 103:
      if (lookahead == '4') ADVANCE(119);
      END_STATE();
    case 104:
      if (lookahead == '2') ADVANCE(119);
      END_STATE();
    case 105:
      if (lookahead == '0' ||
          lookahead == '8') ADVANCE(119);
      END_STATE();
    case 106:
      if (lookahead == '6') ADVANCE(119);
      END_STATE();
    case 107:
      if (lookahead == '4') ADVANCE(119);
      END_STATE();
    case 108:
      if (lookahead == '2') ADVANCE(119);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_primitive_type_token2);
      if (lookahead == '0' ||
          lookahead == '8') ADVANCE(119);
      END_STATE();
    case 110:
      if (lookahead == '6') ADVANCE(119);
      END_STATE();
    case 111:
      if (lookahead == '4') ADVANCE(119);
      END_STATE();
    case 112:
      if (lookahead == '2') ADVANCE(119);
      END_STATE();
    case 113:
      if (lookahead == '0' ||
          lookahead == '8') ADVANCE(119);
      END_STATE();
    case 114:
      if (lookahead == '6') ADVANCE(119);
      END_STATE();
    case 115:
      if (lookahead == '4') ADVANCE(119);
      END_STATE();
    case 116:
      if (lookahead == '2') ADVANCE(119);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_primitive_type_token2);
      if (lookahead == '0' ||
          lookahead == '8') ADVANCE(119);
      END_STATE();
    case 118:
      if (lookahead == '6') ADVANCE(119);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_primitive_type_token2);
      END_STATE();
    case 120:
      if (lookahead == 'f') ADVANCE(152);
      if (lookahead == 'n') ADVANCE(153);
      END_STATE();
    case 121:
      if (lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 122:
      if (lookahead == 'n') ADVANCE(155);
      END_STATE();
    case 123:
      if (lookahead == 'y') ADVANCE(156);
      END_STATE();
    case 124:
      if (lookahead == 'l') ADVANCE(157);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(158);
      END_STATE();
    case 126:
      if (lookahead == 't') ADVANCE(159);
      END_STATE();
    case 127:
      if (lookahead == 'c') ADVANCE(160);
      END_STATE();
    case 128:
      if (lookahead == 'g') ADVANCE(161);
      END_STATE();
    case 129:
      if (lookahead == 'g') ADVANCE(162);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 131:
      ADVANCE_MAP(
        '0', 164,
        '1', 165,
        '2', 166,
        '3', 167,
        '4', 168,
        '5', 169,
        '6', 170,
        '7', 171,
        '8', 172,
        '9', 173,
      );
      END_STATE();
    case 132:
      if (lookahead == '0') ADVANCE(174);
      if (lookahead == '1') ADVANCE(175);
      if (lookahead == '2') ADVANCE(176);
      if (lookahead == '3') ADVANCE(177);
      if (lookahead == '4') ADVANCE(178);
      if (lookahead == '5') ADVANCE(179);
      END_STATE();
    case 133:
      if (lookahead == '2') ADVANCE(180);
      END_STATE();
    case 134:
      if (lookahead == '0' ||
          lookahead == '8') ADVANCE(180);
      END_STATE();
    case 135:
      if (lookahead == '6') ADVANCE(180);
      END_STATE();
    case 136:
      if (lookahead == '4') ADVANCE(180);
      END_STATE();
    case 137:
      if (lookahead == '2') ADVANCE(180);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_primitive_type_token1);
      if (lookahead == '0' ||
          lookahead == '8') ADVANCE(180);
      END_STATE();
    case 139:
      if (lookahead == '6') ADVANCE(180);
      END_STATE();
    case 140:
      if (lookahead == 'c') ADVANCE(181);
      END_STATE();
    case 141:
      if (lookahead == 's') ADVANCE(182);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_primitive_type_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_primitive_type_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_primitive_type_token3);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(145);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_primitive_type_token3);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(183);
      END_STATE();
    case 147:
      if (lookahead == 'n') ADVANCE(184);
      END_STATE();
    case 148:
      if (lookahead == 'c') ADVANCE(185);
      END_STATE();
    case 149:
      if (lookahead == 'a') ADVANCE(186);
      END_STATE();
    case 150:
      if (lookahead == 'b') ADVANCE(187);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 152:
      if (lookahead == 'a') ADVANCE(188);
      END_STATE();
    case 153:
      if (lookahead == 'a') ADVANCE(189);
      END_STATE();
    case 154:
      if (lookahead == 'y') ADVANCE(190);
      END_STATE();
    case 155:
      if (lookahead == 'g') ADVANCE(191);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_memory);
      END_STATE();
    case 157:
      if (lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_pragma);
      END_STATE();
    case 159:
      if (lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 161:
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 163:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 164:
      if (lookahead == '4') ADVANCE(180);
      END_STATE();
    case 165:
      if (lookahead == '2') ADVANCE(180);
      END_STATE();
    case 166:
      if (lookahead == '0' ||
          lookahead == '8') ADVANCE(180);
      END_STATE();
    case 167:
      if (lookahead == '6') ADVANCE(180);
      END_STATE();
    case 168:
      if (lookahead == '4') ADVANCE(180);
      END_STATE();
    case 169:
      if (lookahead == '2') ADVANCE(180);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_primitive_type_token1);
      if (lookahead == '0' ||
          lookahead == '8') ADVANCE(180);
      END_STATE();
    case 171:
      if (lookahead == '6') ADVANCE(180);
      END_STATE();
    case 172:
      if (lookahead == '4') ADVANCE(180);
      END_STATE();
    case 173:
      if (lookahead == '2') ADVANCE(180);
      END_STATE();
    case 174:
      if (lookahead == '0' ||
          lookahead == '8') ADVANCE(180);
      END_STATE();
    case 175:
      if (lookahead == '6') ADVANCE(180);
      END_STATE();
    case 176:
      if (lookahead == '4') ADVANCE(180);
      END_STATE();
    case 177:
      if (lookahead == '2') ADVANCE(180);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_primitive_type_token1);
      if (lookahead == '0' ||
          lookahead == '8') ADVANCE(180);
      END_STATE();
    case 179:
      if (lookahead == '6') ADVANCE(180);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_primitive_type_token1);
      END_STATE();
    case 181:
      if (lookahead == 't') ADVANCE(196);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_address);
      END_STATE();
    case 183:
      if (lookahead == 'a') ADVANCE(197);
      END_STATE();
    case 184:
      if (lookahead == 't') ADVANCE(198);
      END_STATE();
    case 185:
      if (lookahead == 't') ADVANCE(199);
      END_STATE();
    case 186:
      if (lookahead == 'l') ADVANCE(200);
      END_STATE();
    case 187:
      if (lookahead == 'l') ADVANCE(201);
      END_STATE();
    case 188:
      if (lookahead == 'c') ADVANCE(202);
      END_STATE();
    case 189:
      if (lookahead == 'l') ADVANCE(203);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_library);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_mapping);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_payable);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_storage);
      END_STATE();
    case 195:
      if (lookahead == 'n') ADVANCE(204);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_calldata);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_constant);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_contract);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_external);
      END_STATE();
    case 201:
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 202:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_internal);
      END_STATE();
    case 204:
      if (lookahead == 't') ADVANCE(207);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_immutable);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_transient);
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
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 5},
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
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
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
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 4},
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
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 9},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 5},
  [103] = {.lex_state = 9},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 9},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 9},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 10},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
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
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_constant] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_address] = ACTIONS(1),
    [anon_sym_bytes] = ACTIONS(1),
    [aux_sym_primitive_type_token1] = ACTIONS(1),
    [aux_sym_primitive_type_token2] = ACTIONS(1),
    [aux_sym_primitive_type_token3] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_mapping] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_public] = ACTIONS(1),
    [anon_sym_private] = ACTIONS(1),
    [anon_sym_internal] = ACTIONS(1),
    [anon_sym_external] = ACTIONS(1),
    [anon_sym_immutable] = ACTIONS(1),
    [anon_sym_pure] = ACTIONS(1),
    [anon_sym_view] = ACTIONS(1),
    [anon_sym_payable] = ACTIONS(1),
    [anon_sym_memory] = ACTIONS(1),
    [anon_sym_storage] = ACTIONS(1),
    [anon_sym_calldata] = ACTIONS(1),
    [anon_sym_transient] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(114),
    [sym__source_element] = STATE(2),
    [sym_pragma_directive] = STATE(2),
    [sym_import_directive] = STATE(2),
    [sym_contract_declaration] = STATE(2),
    [sym_interface_declaration] = STATE(2),
    [sym_library_declaration] = STATE(2),
    [sym_user_defined_type] = STATE(14),
    [sym_constant_variable_declaration] = STATE(2),
    [sym_type_name] = STATE(97),
    [sym_primitive_type] = STATE(14),
    [sym_array_type] = STATE(14),
    [sym_mapping_type] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_pragma] = ACTIONS(9),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_abstract] = ACTIONS(13),
    [anon_sym_contract] = ACTIONS(15),
    [anon_sym_interface] = ACTIONS(17),
    [anon_sym_library] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(21),
    [anon_sym_string] = ACTIONS(21),
    [anon_sym_address] = ACTIONS(21),
    [anon_sym_bytes] = ACTIONS(21),
    [aux_sym_primitive_type_token1] = ACTIONS(21),
    [aux_sym_primitive_type_token2] = ACTIONS(21),
    [aux_sym_primitive_type_token3] = ACTIONS(21),
    [anon_sym_mapping] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_pragma,
    ACTIONS(11), 1,
      anon_sym_import,
    ACTIONS(13), 1,
      anon_sym_abstract,
    ACTIONS(15), 1,
      anon_sym_contract,
    ACTIONS(17), 1,
      anon_sym_interface,
    ACTIONS(19), 1,
      anon_sym_library,
    ACTIONS(23), 1,
      anon_sym_mapping,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    STATE(97), 1,
      sym_type_name,
    STATE(14), 4,
      sym_user_defined_type,
      sym_primitive_type,
      sym_array_type,
      sym_mapping_type,
    ACTIONS(21), 7,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_address,
      anon_sym_bytes,
      aux_sym_primitive_type_token1,
      aux_sym_primitive_type_token2,
      aux_sym_primitive_type_token3,
    STATE(3), 8,
      sym__source_element,
      sym_pragma_directive,
      sym_import_directive,
      sym_contract_declaration,
      sym_interface_declaration,
      sym_library_declaration,
      sym_constant_variable_declaration,
      aux_sym_source_file_repeat1,
  [59] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(32), 1,
      anon_sym_pragma,
    ACTIONS(35), 1,
      anon_sym_import,
    ACTIONS(38), 1,
      anon_sym_abstract,
    ACTIONS(41), 1,
      anon_sym_contract,
    ACTIONS(44), 1,
      anon_sym_interface,
    ACTIONS(47), 1,
      anon_sym_library,
    ACTIONS(53), 1,
      anon_sym_mapping,
    STATE(97), 1,
      sym_type_name,
    STATE(14), 4,
      sym_user_defined_type,
      sym_primitive_type,
      sym_array_type,
      sym_mapping_type,
    ACTIONS(50), 7,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_address,
      anon_sym_bytes,
      aux_sym_primitive_type_token1,
      aux_sym_primitive_type_token2,
      aux_sym_primitive_type_token3,
    STATE(3), 8,
      sym__source_element,
      sym_pragma_directive,
      sym_import_directive,
      sym_contract_declaration,
      sym_interface_declaration,
      sym_library_declaration,
      sym_constant_variable_declaration,
      aux_sym_source_file_repeat1,
  [118] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 1,
      anon_sym_DOT,
    STATE(6), 1,
      aux_sym_user_defined_type_repeat1,
    ACTIONS(58), 6,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_EQ_GT,
    ACTIONS(56), 15,
      anon_sym_is,
      anon_sym_constant,
      anon_sym_public,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_external,
      anon_sym_immutable,
      anon_sym_pure,
      anon_sym_view,
      anon_sym_payable,
      anon_sym_memory,
      anon_sym_storage,
      anon_sym_calldata,
      anon_sym_transient,
      sym_identifier,
  [153] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_DOT,
    STATE(5), 1,
      aux_sym_user_defined_type_repeat1,
    ACTIONS(64), 6,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_EQ_GT,
    ACTIONS(62), 15,
      anon_sym_is,
      anon_sym_constant,
      anon_sym_public,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_external,
      anon_sym_immutable,
      anon_sym_pure,
      anon_sym_view,
      anon_sym_payable,
      anon_sym_memory,
      anon_sym_storage,
      anon_sym_calldata,
      anon_sym_transient,
      sym_identifier,
  [188] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 1,
      anon_sym_DOT,
    STATE(5), 1,
      aux_sym_user_defined_type_repeat1,
    ACTIONS(71), 6,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_EQ_GT,
    ACTIONS(69), 15,
      anon_sym_is,
      anon_sym_constant,
      anon_sym_public,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_external,
      anon_sym_immutable,
      anon_sym_pure,
      anon_sym_view,
      anon_sym_payable,
      anon_sym_memory,
      anon_sym_storage,
      anon_sym_calldata,
      anon_sym_transient,
      sym_identifier,
  [223] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 7,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_EQ_GT,
    ACTIONS(62), 15,
      anon_sym_is,
      anon_sym_constant,
      anon_sym_public,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_external,
      anon_sym_immutable,
      anon_sym_pure,
      anon_sym_view,
      anon_sym_payable,
      anon_sym_memory,
      anon_sym_storage,
      anon_sym_calldata,
      anon_sym_transient,
      sym_identifier,
  [253] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(77), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_external,
    ACTIONS(81), 4,
      anon_sym_memory,
      anon_sym_storage,
      anon_sym_calldata,
      anon_sym_transient,
    STATE(13), 4,
      sym_visibility,
      sym_state_mutability,
      sym_storage_location,
      aux_sym_state_variable_declaration_repeat1,
    ACTIONS(75), 5,
      anon_sym_constant,
      anon_sym_immutable,
      anon_sym_pure,
      anon_sym_view,
      anon_sym_payable,
  [288] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_mapping,
    ACTIONS(83), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      sym_type_name,
    STATE(10), 3,
      sym__contract_member,
      sym_state_variable_declaration,
      aux_sym_contract_body_repeat1,
    STATE(14), 4,
      sym_user_defined_type,
      sym_primitive_type,
      sym_array_type,
      sym_mapping_type,
    ACTIONS(21), 7,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_address,
      anon_sym_bytes,
      aux_sym_primitive_type_token1,
      aux_sym_primitive_type_token2,
      aux_sym_primitive_type_token3,
  [324] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_mapping,
    ACTIONS(85), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      sym_type_name,
    STATE(12), 3,
      sym__contract_member,
      sym_state_variable_declaration,
      aux_sym_contract_body_repeat1,
    STATE(14), 4,
      sym_user_defined_type,
      sym_primitive_type,
      sym_array_type,
      sym_mapping_type,
    ACTIONS(21), 7,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_address,
      anon_sym_bytes,
      aux_sym_primitive_type_token1,
      aux_sym_primitive_type_token2,
      aux_sym_primitive_type_token3,
  [360] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      sym_identifier,
    ACTIONS(92), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_external,
    ACTIONS(95), 4,
      anon_sym_memory,
      anon_sym_storage,
      anon_sym_calldata,
      anon_sym_transient,
    STATE(11), 4,
      sym_visibility,
      sym_state_mutability,
      sym_storage_location,
      aux_sym_state_variable_declaration_repeat1,
    ACTIONS(89), 5,
      anon_sym_constant,
      anon_sym_immutable,
      anon_sym_pure,
      anon_sym_view,
      anon_sym_payable,
  [392] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      sym_identifier,
    ACTIONS(101), 1,
      anon_sym_RBRACE,
    ACTIONS(106), 1,
      anon_sym_mapping,
    STATE(8), 1,
      sym_type_name,
    STATE(12), 3,
      sym__contract_member,
      sym_state_variable_declaration,
      aux_sym_contract_body_repeat1,
    STATE(14), 4,
      sym_user_defined_type,
      sym_primitive_type,
      sym_array_type,
      sym_mapping_type,
    ACTIONS(103), 7,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_address,
      anon_sym_bytes,
      aux_sym_primitive_type_token1,
      aux_sym_primitive_type_token2,
      aux_sym_primitive_type_token3,
  [428] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      sym_identifier,
    ACTIONS(79), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_external,
    ACTIONS(81), 4,
      anon_sym_memory,
      anon_sym_storage,
      anon_sym_calldata,
      anon_sym_transient,
    STATE(11), 4,
      sym_visibility,
      sym_state_mutability,
      sym_storage_location,
      aux_sym_state_variable_declaration_repeat1,
    ACTIONS(75), 5,
      anon_sym_constant,
      anon_sym_immutable,
      anon_sym_pure,
      anon_sym_view,
      anon_sym_payable,
  [460] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 3,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_EQ_GT,
    ACTIONS(111), 14,
      anon_sym_constant,
      anon_sym_public,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_external,
      anon_sym_immutable,
      anon_sym_pure,
      anon_sym_view,
      anon_sym_payable,
      anon_sym_memory,
      anon_sym_storage,
      anon_sym_calldata,
      anon_sym_transient,
      sym_identifier,
  [485] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 3,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_EQ_GT,
    ACTIONS(115), 14,
      anon_sym_constant,
      anon_sym_public,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_external,
      anon_sym_immutable,
      anon_sym_pure,
      anon_sym_view,
      anon_sym_payable,
      anon_sym_memory,
      anon_sym_storage,
      anon_sym_calldata,
      anon_sym_transient,
      sym_identifier,
  [510] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 3,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_EQ_GT,
    ACTIONS(119), 14,
      anon_sym_constant,
      anon_sym_public,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_external,
      anon_sym_immutable,
      anon_sym_pure,
      anon_sym_view,
      anon_sym_payable,
      anon_sym_memory,
      anon_sym_storage,
      anon_sym_calldata,
      anon_sym_transient,
      sym_identifier,
  [535] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 3,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_EQ_GT,
    ACTIONS(123), 14,
      anon_sym_constant,
      anon_sym_public,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_external,
      anon_sym_immutable,
      anon_sym_pure,
      anon_sym_view,
      anon_sym_payable,
      anon_sym_memory,
      anon_sym_storage,
      anon_sym_calldata,
      anon_sym_transient,
      sym_identifier,
  [560] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 3,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_EQ_GT,
    ACTIONS(127), 14,
      anon_sym_constant,
      anon_sym_public,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_external,
      anon_sym_immutable,
      anon_sym_pure,
      anon_sym_view,
      anon_sym_payable,
      anon_sym_memory,
      anon_sym_storage,
      anon_sym_calldata,
      anon_sym_transient,
      sym_identifier,
  [585] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      ts_builtin_sym_end,
    ACTIONS(133), 15,
      anon_sym_pragma,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_contract,
      anon_sym_interface,
      anon_sym_library,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_address,
      anon_sym_bytes,
      aux_sym_primitive_type_token1,
      aux_sym_primitive_type_token2,
      aux_sym_primitive_type_token3,
      anon_sym_mapping,
      sym_identifier,
  [609] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      ts_builtin_sym_end,
    ACTIONS(137), 15,
      anon_sym_pragma,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_contract,
      anon_sym_interface,
      anon_sym_library,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_address,
      anon_sym_bytes,
      aux_sym_primitive_type_token1,
      aux_sym_primitive_type_token2,
      aux_sym_primitive_type_token3,
      anon_sym_mapping,
      sym_identifier,
  [633] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      ts_builtin_sym_end,
    ACTIONS(141), 15,
      anon_sym_pragma,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_contract,
      anon_sym_interface,
      anon_sym_library,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_address,
      anon_sym_bytes,
      aux_sym_primitive_type_token1,
      aux_sym_primitive_type_token2,
      aux_sym_primitive_type_token3,
      anon_sym_mapping,
      sym_identifier,
  [657] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      ts_builtin_sym_end,
    ACTIONS(145), 15,
      anon_sym_pragma,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_contract,
      anon_sym_interface,
      anon_sym_library,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_address,
      anon_sym_bytes,
      aux_sym_primitive_type_token1,
      aux_sym_primitive_type_token2,
      aux_sym_primitive_type_token3,
      anon_sym_mapping,
      sym_identifier,
  [681] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      ts_builtin_sym_end,
    ACTIONS(149), 15,
      anon_sym_pragma,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_contract,
      anon_sym_interface,
      anon_sym_library,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_address,
      anon_sym_bytes,
      aux_sym_primitive_type_token1,
      aux_sym_primitive_type_token2,
      aux_sym_primitive_type_token3,
      anon_sym_mapping,
      sym_identifier,
  [705] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      ts_builtin_sym_end,
    ACTIONS(153), 15,
      anon_sym_pragma,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_contract,
      anon_sym_interface,
      anon_sym_library,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_address,
      anon_sym_bytes,
      aux_sym_primitive_type_token1,
      aux_sym_primitive_type_token2,
      aux_sym_primitive_type_token3,
      anon_sym_mapping,
      sym_identifier,
  [729] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      ts_builtin_sym_end,
    ACTIONS(157), 15,
      anon_sym_pragma,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_contract,
      anon_sym_interface,
      anon_sym_library,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_address,
      anon_sym_bytes,
      aux_sym_primitive_type_token1,
      aux_sym_primitive_type_token2,
      aux_sym_primitive_type_token3,
      anon_sym_mapping,
      sym_identifier,
  [753] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      ts_builtin_sym_end,
    ACTIONS(161), 15,
      anon_sym_pragma,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_contract,
      anon_sym_interface,
      anon_sym_library,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_address,
      anon_sym_bytes,
      aux_sym_primitive_type_token1,
      aux_sym_primitive_type_token2,
      aux_sym_primitive_type_token3,
      anon_sym_mapping,
      sym_identifier,
  [777] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      ts_builtin_sym_end,
    ACTIONS(165), 15,
      anon_sym_pragma,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_contract,
      anon_sym_interface,
      anon_sym_library,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_address,
      anon_sym_bytes,
      aux_sym_primitive_type_token1,
      aux_sym_primitive_type_token2,
      aux_sym_primitive_type_token3,
      anon_sym_mapping,
      sym_identifier,
  [801] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      ts_builtin_sym_end,
    ACTIONS(169), 15,
      anon_sym_pragma,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_contract,
      anon_sym_interface,
      anon_sym_library,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_address,
      anon_sym_bytes,
      aux_sym_primitive_type_token1,
      aux_sym_primitive_type_token2,
      aux_sym_primitive_type_token3,
      anon_sym_mapping,
      sym_identifier,
  [825] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      ts_builtin_sym_end,
    ACTIONS(173), 15,
      anon_sym_pragma,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_contract,
      anon_sym_interface,
      anon_sym_library,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_address,
      anon_sym_bytes,
      aux_sym_primitive_type_token1,
      aux_sym_primitive_type_token2,
      aux_sym_primitive_type_token3,
      anon_sym_mapping,
      sym_identifier,
  [849] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      ts_builtin_sym_end,
    ACTIONS(177), 15,
      anon_sym_pragma,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_contract,
      anon_sym_interface,
      anon_sym_library,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_address,
      anon_sym_bytes,
      aux_sym_primitive_type_token1,
      aux_sym_primitive_type_token2,
      aux_sym_primitive_type_token3,
      anon_sym_mapping,
      sym_identifier,
  [873] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      ts_builtin_sym_end,
    ACTIONS(181), 15,
      anon_sym_pragma,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_contract,
      anon_sym_interface,
      anon_sym_library,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_address,
      anon_sym_bytes,
      aux_sym_primitive_type_token1,
      aux_sym_primitive_type_token2,
      aux_sym_primitive_type_token3,
      anon_sym_mapping,
      sym_identifier,
  [897] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      ts_builtin_sym_end,
    ACTIONS(185), 15,
      anon_sym_pragma,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_contract,
      anon_sym_interface,
      anon_sym_library,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_address,
      anon_sym_bytes,
      aux_sym_primitive_type_token1,
      aux_sym_primitive_type_token2,
      aux_sym_primitive_type_token3,
      anon_sym_mapping,
      sym_identifier,
  [921] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_mapping,
    STATE(98), 1,
      sym_type_name,
    STATE(14), 4,
      sym_user_defined_type,
      sym_primitive_type,
      sym_array_type,
      sym_mapping_type,
    ACTIONS(21), 7,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_address,
      anon_sym_bytes,
      aux_sym_primitive_type_token1,
      aux_sym_primitive_type_token2,
      aux_sym_primitive_type_token3,
  [949] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 14,
      anon_sym_constant,
      anon_sym_public,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_external,
      anon_sym_immutable,
      anon_sym_pure,
      anon_sym_view,
      anon_sym_payable,
      anon_sym_memory,
      anon_sym_storage,
      anon_sym_calldata,
      anon_sym_transient,
      sym_identifier,
  [969] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 14,
      anon_sym_constant,
      anon_sym_public,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_external,
      anon_sym_immutable,
      anon_sym_pure,
      anon_sym_view,
      anon_sym_payable,
      anon_sym_memory,
      anon_sym_storage,
      anon_sym_calldata,
      anon_sym_transient,
      sym_identifier,
  [989] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 14,
      anon_sym_constant,
      anon_sym_public,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_external,
      anon_sym_immutable,
      anon_sym_pure,
      anon_sym_view,
      anon_sym_payable,
      anon_sym_memory,
      anon_sym_storage,
      anon_sym_calldata,
      anon_sym_transient,
      sym_identifier,
  [1009] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_mapping,
    STATE(102), 1,
      sym_type_name,
    STATE(14), 4,
      sym_user_defined_type,
      sym_primitive_type,
      sym_array_type,
      sym_mapping_type,
    ACTIONS(21), 7,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_address,
      anon_sym_bytes,
      aux_sym_primitive_type_token1,
      aux_sym_primitive_type_token2,
      aux_sym_primitive_type_token3,
  [1037] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_RBRACE,
    ACTIONS(193), 9,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_address,
      anon_sym_bytes,
      aux_sym_primitive_type_token1,
      aux_sym_primitive_type_token2,
      aux_sym_primitive_type_token3,
      anon_sym_mapping,
      sym_identifier,
  [1055] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_RBRACE,
    ACTIONS(197), 9,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_address,
      anon_sym_bytes,
      aux_sym_primitive_type_token1,
      aux_sym_primitive_type_token2,
      aux_sym_primitive_type_token3,
      anon_sym_mapping,
      sym_identifier,
  [1073] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_RBRACE,
    ACTIONS(201), 9,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_address,
      anon_sym_bytes,
      aux_sym_primitive_type_token1,
      aux_sym_primitive_type_token2,
      aux_sym_primitive_type_token3,
      anon_sym_mapping,
      sym_identifier,
  [1091] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_RBRACE,
    ACTIONS(205), 9,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_address,
      anon_sym_bytes,
      aux_sym_primitive_type_token1,
      aux_sym_primitive_type_token2,
      aux_sym_primitive_type_token3,
      anon_sym_mapping,
      sym_identifier,
  [1109] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_DQUOTE,
    ACTIONS(213), 1,
      anon_sym_SQUOTE,
    ACTIONS(215), 1,
      anon_sym_RBRACK,
    ACTIONS(209), 2,
      sym_number_literal,
      sym_identifier,
    STATE(124), 2,
      sym_string_literal,
      sym__expression,
  [1130] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_DQUOTE,
    ACTIONS(213), 1,
      anon_sym_SQUOTE,
    ACTIONS(219), 1,
      anon_sym_RPAREN,
    ACTIONS(217), 2,
      sym_number_literal,
      sym_identifier,
    STATE(87), 2,
      sym_string_literal,
      sym__expression,
  [1151] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_DQUOTE,
    ACTIONS(213), 1,
      anon_sym_SQUOTE,
    ACTIONS(223), 1,
      anon_sym_RPAREN,
    ACTIONS(221), 2,
      sym_number_literal,
      sym_identifier,
    STATE(104), 2,
      sym_string_literal,
      sym__expression,
  [1172] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_DQUOTE,
    ACTIONS(213), 1,
      anon_sym_SQUOTE,
    ACTIONS(225), 1,
      anon_sym_RPAREN,
    ACTIONS(221), 2,
      sym_number_literal,
      sym_identifier,
    STATE(104), 2,
      sym_string_literal,
      sym__expression,
  [1193] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_DQUOTE,
    ACTIONS(213), 1,
      anon_sym_SQUOTE,
    ACTIONS(227), 1,
      sym_import_star,
    ACTIONS(229), 1,
      anon_sym_LBRACE,
    STATE(84), 1,
      sym_string_literal,
    STATE(109), 1,
      sym_import_clause,
  [1215] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_DQUOTE,
    ACTIONS(213), 1,
      anon_sym_SQUOTE,
    ACTIONS(231), 2,
      sym_number_literal,
      sym_identifier,
    STATE(111), 2,
      sym_string_literal,
      sym__expression,
  [1233] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_DQUOTE,
    ACTIONS(213), 1,
      anon_sym_SQUOTE,
    ACTIONS(233), 2,
      sym_number_literal,
      sym_identifier,
    STATE(125), 2,
      sym_string_literal,
      sym__expression,
  [1251] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_DQUOTE,
    ACTIONS(213), 1,
      anon_sym_SQUOTE,
    ACTIONS(235), 2,
      sym_number_literal,
      sym_identifier,
    STATE(117), 2,
      sym_string_literal,
      sym__expression,
  [1269] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_DQUOTE,
    ACTIONS(213), 1,
      anon_sym_SQUOTE,
    ACTIONS(221), 2,
      sym_number_literal,
      sym_identifier,
    STATE(104), 2,
      sym_string_literal,
      sym__expression,
  [1287] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_LBRACE,
    ACTIONS(239), 1,
      anon_sym_is,
    STATE(28), 1,
      sym_contract_body,
    STATE(61), 2,
      sym_inheritance_specifier,
      aux_sym_contract_declaration_repeat1,
  [1304] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_LBRACE,
    ACTIONS(239), 1,
      anon_sym_is,
    STATE(23), 1,
      sym_contract_body,
    STATE(62), 2,
      sym_inheritance_specifier,
      aux_sym_contract_declaration_repeat1,
  [1321] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_LBRACE,
    ACTIONS(239), 1,
      anon_sym_is,
    STATE(20), 1,
      sym_contract_body,
    STATE(60), 2,
      sym_inheritance_specifier,
      aux_sym_contract_declaration_repeat1,
  [1338] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_LBRACE,
    ACTIONS(239), 1,
      anon_sym_is,
    STATE(21), 1,
      sym_contract_body,
    STATE(52), 2,
      sym_inheritance_specifier,
      aux_sym_contract_declaration_repeat1,
  [1355] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(241), 1,
      anon_sym_LBRACE,
    ACTIONS(243), 1,
      anon_sym_is,
    STATE(56), 1,
      sym_user_defined_type,
    STATE(83), 1,
      sym_inheritance_type,
  [1374] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    STATE(79), 1,
      sym_call_arguments,
    ACTIONS(245), 3,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_is,
  [1389] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_as,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1400] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_as,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1411] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
    ACTIONS(255), 1,
      anon_sym_is,
    STATE(56), 1,
      sym_user_defined_type,
    STATE(83), 1,
      sym_inheritance_type,
  [1430] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_LBRACE,
    ACTIONS(239), 1,
      anon_sym_is,
    STATE(28), 1,
      sym_contract_body,
    STATE(62), 2,
      sym_inheritance_specifier,
      aux_sym_contract_declaration_repeat1,
  [1447] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_LBRACE,
    ACTIONS(239), 1,
      anon_sym_is,
    STATE(25), 1,
      sym_contract_body,
    STATE(62), 2,
      sym_inheritance_specifier,
      aux_sym_contract_declaration_repeat1,
  [1464] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_LBRACE,
    ACTIONS(259), 1,
      anon_sym_is,
    STATE(62), 2,
      sym_inheritance_specifier,
      aux_sym_contract_declaration_repeat1,
  [1478] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 4,
      anon_sym_SEMI,
      anon_sym_from,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1488] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      anon_sym_COMMA,
    STATE(66), 1,
      aux_sym_inheritance_specifier_repeat1,
    ACTIONS(264), 2,
      anon_sym_LBRACE,
      anon_sym_is,
  [1502] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_as,
    STATE(95), 1,
      sym_import_alias,
    ACTIONS(268), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1516] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_COMMA,
    STATE(67), 1,
      aux_sym_inheritance_specifier_repeat1,
    ACTIONS(241), 2,
      anon_sym_LBRACE,
      anon_sym_is,
  [1530] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      anon_sym_COMMA,
    STATE(67), 1,
      aux_sym_inheritance_specifier_repeat1,
    ACTIONS(274), 2,
      anon_sym_LBRACE,
      anon_sym_is,
  [1544] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      sym_identifier,
    ACTIONS(281), 1,
      anon_sym_RBRACE,
    STATE(101), 1,
      sym_import_name,
  [1557] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 3,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_is,
  [1566] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_RBRACE,
    ACTIONS(285), 1,
      anon_sym_COMMA,
    STATE(72), 1,
      aux_sym_import_clause_repeat1,
  [1579] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      sym_identifier,
    ACTIONS(287), 1,
      anon_sym_RBRACE,
    STATE(101), 1,
      sym_import_name,
  [1592] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      anon_sym_COMMA,
    ACTIONS(292), 1,
      anon_sym_RBRACE,
    STATE(72), 1,
      aux_sym_import_clause_repeat1,
  [1605] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_COMMA,
    ACTIONS(296), 1,
      anon_sym_RBRACE,
    STATE(70), 1,
      aux_sym_import_clause_repeat1,
  [1618] = 4,
    ACTIONS(298), 1,
      anon_sym_DQUOTE,
    ACTIONS(300), 1,
      aux_sym_string_literal_token1,
    ACTIONS(302), 1,
      sym_comment,
    STATE(77), 1,
      aux_sym_string_literal_repeat1,
  [1631] = 4,
    ACTIONS(298), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      sym_comment,
    ACTIONS(304), 1,
      aux_sym_string_literal_token2,
    STATE(85), 1,
      aux_sym_string_literal_repeat2,
  [1644] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_DQUOTE,
    ACTIONS(213), 1,
      anon_sym_SQUOTE,
    STATE(128), 1,
      sym_string_literal,
  [1657] = 4,
    ACTIONS(302), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      aux_sym_string_literal_token1,
    STATE(77), 1,
      aux_sym_string_literal_repeat1,
  [1670] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      sym_identifier,
    STATE(56), 1,
      sym_user_defined_type,
    STATE(64), 1,
      sym_inheritance_type,
  [1683] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 3,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_is,
  [1692] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      sym_identifier,
    ACTIONS(315), 1,
      anon_sym_RBRACE,
    STATE(73), 1,
      sym_import_name,
  [1705] = 4,
    ACTIONS(302), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_DQUOTE,
    ACTIONS(319), 1,
      aux_sym_string_literal_token1,
    STATE(74), 1,
      aux_sym_string_literal_repeat1,
  [1718] = 4,
    ACTIONS(302), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(321), 1,
      aux_sym_string_literal_token2,
    STATE(75), 1,
      aux_sym_string_literal_repeat2,
  [1731] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 3,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_is,
  [1740] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_as,
    ACTIONS(323), 1,
      anon_sym_SEMI,
    STATE(131), 1,
      sym_import_alias,
  [1753] = 4,
    ACTIONS(302), 1,
      sym_comment,
    ACTIONS(325), 1,
      anon_sym_SQUOTE,
    ACTIONS(327), 1,
      aux_sym_string_literal_token2,
    STATE(85), 1,
      aux_sym_string_literal_repeat2,
  [1766] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 3,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_is,
  [1775] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_COMMA,
    ACTIONS(334), 1,
      anon_sym_RPAREN,
    STATE(90), 1,
      aux_sym_call_arguments_repeat1,
  [1788] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      sym_identifier,
    STATE(56), 1,
      sym_user_defined_type,
    STATE(83), 1,
      sym_inheritance_type,
  [1801] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 3,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_is,
  [1810] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_RPAREN,
    ACTIONS(338), 1,
      anon_sym_COMMA,
    STATE(92), 1,
      aux_sym_call_arguments_repeat1,
  [1823] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 3,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_is,
  [1832] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_COMMA,
    ACTIONS(345), 1,
      anon_sym_RPAREN,
    STATE(92), 1,
      aux_sym_call_arguments_repeat1,
  [1845] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_DQUOTE,
    ACTIONS(213), 1,
      anon_sym_SQUOTE,
    STATE(132), 1,
      sym_string_literal,
  [1858] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      sym_identifier,
    STATE(101), 1,
      sym_import_name,
  [1868] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1876] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_as,
    STATE(129), 1,
      sym_import_alias,
  [1886] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_LBRACK,
    ACTIONS(349), 1,
      anon_sym_constant,
  [1896] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_LBRACK,
    ACTIONS(351), 1,
      anon_sym_RPAREN,
  [1906] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_LBRACE,
    STATE(22), 1,
      sym_contract_body,
  [1916] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_SEMI,
    ACTIONS(355), 1,
      anon_sym_EQ,
  [1926] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1934] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_LBRACK,
    ACTIONS(357), 1,
      anon_sym_EQ_GT,
  [1944] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      sym_pragma_name,
    STATE(107), 1,
      sym_pragma_token,
  [1954] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1962] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      anon_sym_SEMI,
    ACTIONS(363), 1,
      anon_sym_EQ,
  [1972] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      sym_identifier,
  [1979] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_SEMI,
  [1986] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      sym_identifier,
  [1993] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_from,
  [2000] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_from,
  [2007] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_SEMI,
  [2014] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_contract,
  [2021] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      sym_identifier,
  [2028] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      ts_builtin_sym_end,
  [2035] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_from,
  [2042] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      sym_identifier,
  [2049] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      anon_sym_SEMI,
  [2056] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      sym_identifier,
  [2063] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      anon_sym_EQ,
  [2070] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      sym_identifier,
  [2077] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      anon_sym_from,
  [2084] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      sym_identifier,
  [2091] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      anon_sym_LPAREN,
  [2098] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_RBRACK,
  [2105] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_SEMI,
  [2112] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      anon_sym_SEMI,
  [2119] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      anon_sym_from,
  [2126] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      anon_sym_SEMI,
  [2133] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_from,
  [2140] = 2,
    ACTIONS(302), 1,
      sym_comment,
    ACTIONS(413), 1,
      sym_pragma_value,
  [2147] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      anon_sym_SEMI,
  [2154] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 59,
  [SMALL_STATE(4)] = 118,
  [SMALL_STATE(5)] = 153,
  [SMALL_STATE(6)] = 188,
  [SMALL_STATE(7)] = 223,
  [SMALL_STATE(8)] = 253,
  [SMALL_STATE(9)] = 288,
  [SMALL_STATE(10)] = 324,
  [SMALL_STATE(11)] = 360,
  [SMALL_STATE(12)] = 392,
  [SMALL_STATE(13)] = 428,
  [SMALL_STATE(14)] = 460,
  [SMALL_STATE(15)] = 485,
  [SMALL_STATE(16)] = 510,
  [SMALL_STATE(17)] = 535,
  [SMALL_STATE(18)] = 560,
  [SMALL_STATE(19)] = 585,
  [SMALL_STATE(20)] = 609,
  [SMALL_STATE(21)] = 633,
  [SMALL_STATE(22)] = 657,
  [SMALL_STATE(23)] = 681,
  [SMALL_STATE(24)] = 705,
  [SMALL_STATE(25)] = 729,
  [SMALL_STATE(26)] = 753,
  [SMALL_STATE(27)] = 777,
  [SMALL_STATE(28)] = 801,
  [SMALL_STATE(29)] = 825,
  [SMALL_STATE(30)] = 849,
  [SMALL_STATE(31)] = 873,
  [SMALL_STATE(32)] = 897,
  [SMALL_STATE(33)] = 921,
  [SMALL_STATE(34)] = 949,
  [SMALL_STATE(35)] = 969,
  [SMALL_STATE(36)] = 989,
  [SMALL_STATE(37)] = 1009,
  [SMALL_STATE(38)] = 1037,
  [SMALL_STATE(39)] = 1055,
  [SMALL_STATE(40)] = 1073,
  [SMALL_STATE(41)] = 1091,
  [SMALL_STATE(42)] = 1109,
  [SMALL_STATE(43)] = 1130,
  [SMALL_STATE(44)] = 1151,
  [SMALL_STATE(45)] = 1172,
  [SMALL_STATE(46)] = 1193,
  [SMALL_STATE(47)] = 1215,
  [SMALL_STATE(48)] = 1233,
  [SMALL_STATE(49)] = 1251,
  [SMALL_STATE(50)] = 1269,
  [SMALL_STATE(51)] = 1287,
  [SMALL_STATE(52)] = 1304,
  [SMALL_STATE(53)] = 1321,
  [SMALL_STATE(54)] = 1338,
  [SMALL_STATE(55)] = 1355,
  [SMALL_STATE(56)] = 1374,
  [SMALL_STATE(57)] = 1389,
  [SMALL_STATE(58)] = 1400,
  [SMALL_STATE(59)] = 1411,
  [SMALL_STATE(60)] = 1430,
  [SMALL_STATE(61)] = 1447,
  [SMALL_STATE(62)] = 1464,
  [SMALL_STATE(63)] = 1478,
  [SMALL_STATE(64)] = 1488,
  [SMALL_STATE(65)] = 1502,
  [SMALL_STATE(66)] = 1516,
  [SMALL_STATE(67)] = 1530,
  [SMALL_STATE(68)] = 1544,
  [SMALL_STATE(69)] = 1557,
  [SMALL_STATE(70)] = 1566,
  [SMALL_STATE(71)] = 1579,
  [SMALL_STATE(72)] = 1592,
  [SMALL_STATE(73)] = 1605,
  [SMALL_STATE(74)] = 1618,
  [SMALL_STATE(75)] = 1631,
  [SMALL_STATE(76)] = 1644,
  [SMALL_STATE(77)] = 1657,
  [SMALL_STATE(78)] = 1670,
  [SMALL_STATE(79)] = 1683,
  [SMALL_STATE(80)] = 1692,
  [SMALL_STATE(81)] = 1705,
  [SMALL_STATE(82)] = 1718,
  [SMALL_STATE(83)] = 1731,
  [SMALL_STATE(84)] = 1740,
  [SMALL_STATE(85)] = 1753,
  [SMALL_STATE(86)] = 1766,
  [SMALL_STATE(87)] = 1775,
  [SMALL_STATE(88)] = 1788,
  [SMALL_STATE(89)] = 1801,
  [SMALL_STATE(90)] = 1810,
  [SMALL_STATE(91)] = 1823,
  [SMALL_STATE(92)] = 1832,
  [SMALL_STATE(93)] = 1845,
  [SMALL_STATE(94)] = 1858,
  [SMALL_STATE(95)] = 1868,
  [SMALL_STATE(96)] = 1876,
  [SMALL_STATE(97)] = 1886,
  [SMALL_STATE(98)] = 1896,
  [SMALL_STATE(99)] = 1906,
  [SMALL_STATE(100)] = 1916,
  [SMALL_STATE(101)] = 1926,
  [SMALL_STATE(102)] = 1934,
  [SMALL_STATE(103)] = 1944,
  [SMALL_STATE(104)] = 1954,
  [SMALL_STATE(105)] = 1962,
  [SMALL_STATE(106)] = 1972,
  [SMALL_STATE(107)] = 1979,
  [SMALL_STATE(108)] = 1986,
  [SMALL_STATE(109)] = 1993,
  [SMALL_STATE(110)] = 2000,
  [SMALL_STATE(111)] = 2007,
  [SMALL_STATE(112)] = 2014,
  [SMALL_STATE(113)] = 2021,
  [SMALL_STATE(114)] = 2028,
  [SMALL_STATE(115)] = 2035,
  [SMALL_STATE(116)] = 2042,
  [SMALL_STATE(117)] = 2049,
  [SMALL_STATE(118)] = 2056,
  [SMALL_STATE(119)] = 2063,
  [SMALL_STATE(120)] = 2070,
  [SMALL_STATE(121)] = 2077,
  [SMALL_STATE(122)] = 2084,
  [SMALL_STATE(123)] = 2091,
  [SMALL_STATE(124)] = 2098,
  [SMALL_STATE(125)] = 2105,
  [SMALL_STATE(126)] = 2112,
  [SMALL_STATE(127)] = 2119,
  [SMALL_STATE(128)] = 2126,
  [SMALL_STATE(129)] = 2133,
  [SMALL_STATE(130)] = 2140,
  [SMALL_STATE(131)] = 2147,
  [SMALL_STATE(132)] = 2154,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(103),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(112),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(122),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(120),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(118),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(123),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_user_defined_type, 1, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_defined_type, 1, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_user_defined_type_repeat1, 2, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_user_defined_type_repeat1, 2, 0, 0),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_user_defined_type_repeat1, 2, 0, 0), SHIFT_REPEAT(106),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_user_defined_type, 2, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_defined_type, 2, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_state_variable_declaration_repeat1, 2, 0, 0),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_state_variable_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_state_variable_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_state_variable_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_contract_body_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_contract_body_repeat1, 2, 0, 0),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_contract_body_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_contract_body_repeat1, 2, 0, 0), SHIFT_REPEAT(123),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_name, 1, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_type, 1, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 3, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 4, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 4, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mapping_type, 6, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_type, 6, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_variable_declaration, 6, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant_variable_declaration, 6, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract_declaration, 3, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contract_declaration, 3, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_declaration, 3, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_declaration, 3, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_library_declaration, 3, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_library_declaration, 3, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_declaration, 4, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_declaration, 4, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma_directive, 3, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pragma_directive, 3, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract_declaration, 5, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contract_declaration, 5, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_directive, 5, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_directive, 5, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract_body, 3, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contract_body, 3, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract_declaration, 4, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contract_declaration, 4, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_directive, 3, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_directive, 3, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_directive, 4, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_directive, 4, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract_body, 2, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contract_body, 2, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_directive, 6, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_directive, 6, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_mutability, 1, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_visibility, 1, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_storage_location, 1, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_variable_declaration, 3, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_variable_declaration, 3, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_variable_declaration, 4, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_variable_declaration, 4, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_variable_declaration, 5, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_variable_declaration, 5, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_variable_declaration, 6, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_variable_declaration, 6, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inheritance_specifier, 3, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inheritance_specifier, 3, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inheritance_type, 1, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inheritance_specifier, 4, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inheritance_specifier, 4, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_contract_declaration_repeat1, 2, 0, 0),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_contract_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_alias, 2, 0, 0),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inheritance_specifier, 2, 0, 0),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_name, 1, 0, 0),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inheritance_specifier_repeat1, 2, 0, 0),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inheritance_specifier_repeat1, 2, 0, 0), SHIFT_REPEAT(88),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_arguments, 5, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_clause_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_clause_repeat1, 2, 0, 0),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0),
  [308] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(77),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inheritance_type, 2, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat2, 2, 0, 0),
  [327] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat2, 2, 0, 0), SHIFT_REPEAT(85),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_arguments, 2, 0, 0),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_arguments, 3, 0, 0),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_arguments, 4, 0, 0),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_arguments_repeat1, 2, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_name, 2, 0, 0),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_clause, 4, 0, 0),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [381] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_clause, 2, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_clause, 5, 0, 0),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma_token, 2, 0, 1),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_clause, 3, 0, 0),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
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
