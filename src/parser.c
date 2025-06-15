#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 182
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 110
#define ALIAS_COUNT 0
#define TOKEN_COUNT 59
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
  anon_sym_function = 51,
  anon_sym_constructor = 52,
  anon_sym_receive = 53,
  anon_sym_fallback = 54,
  anon_sym_returns = 55,
  sym_virtual_specifier = 56,
  sym_override_specifier = 57,
  sym_comment = 58,
  sym_source_file = 59,
  sym__source_element = 60,
  sym_pragma_directive = 61,
  sym_pragma_token = 62,
  sym_import_directive = 63,
  sym_import_clause = 64,
  sym_import_name = 65,
  sym_import_alias = 66,
  sym_string_literal = 67,
  sym_contract_declaration = 68,
  sym_interface_declaration = 69,
  sym_library_declaration = 70,
  sym_inheritance_specifier = 71,
  sym_inheritance_type = 72,
  sym_contract_body = 73,
  sym__contract_member = 74,
  sym_user_defined_type = 75,
  sym_call_arguments = 76,
  sym__expression = 77,
  sym_state_variable_declaration = 78,
  sym_constant_variable_declaration = 79,
  sym_type_name = 80,
  sym_primitive_type = 81,
  sym_array_type = 82,
  sym_mapping_type = 83,
  sym_visibility = 84,
  sym_state_mutability = 85,
  sym_storage_location = 86,
  sym_function_definition = 87,
  sym_constructor_definition = 88,
  sym_receive_definition = 89,
  sym_fallback_definition = 90,
  sym_parameter_list = 91,
  sym_parameter = 92,
  sym_return_type_definition = 93,
  sym_function_body = 94,
  sym_modifier_invocation = 95,
  aux_sym_source_file_repeat1 = 96,
  aux_sym_import_clause_repeat1 = 97,
  aux_sym_string_literal_repeat1 = 98,
  aux_sym_string_literal_repeat2 = 99,
  aux_sym_contract_declaration_repeat1 = 100,
  aux_sym_inheritance_specifier_repeat1 = 101,
  aux_sym_contract_body_repeat1 = 102,
  aux_sym_user_defined_type_repeat1 = 103,
  aux_sym_call_arguments_repeat1 = 104,
  aux_sym_state_variable_declaration_repeat1 = 105,
  aux_sym_function_definition_repeat1 = 106,
  aux_sym_constructor_definition_repeat1 = 107,
  aux_sym_receive_definition_repeat1 = 108,
  aux_sym_parameter_list_repeat1 = 109,
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
  [anon_sym_function] = "function",
  [anon_sym_constructor] = "constructor",
  [anon_sym_receive] = "receive",
  [anon_sym_fallback] = "fallback",
  [anon_sym_returns] = "returns",
  [sym_virtual_specifier] = "virtual_specifier",
  [sym_override_specifier] = "override_specifier",
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
  [sym_function_definition] = "function_definition",
  [sym_constructor_definition] = "constructor_definition",
  [sym_receive_definition] = "receive_definition",
  [sym_fallback_definition] = "fallback_definition",
  [sym_parameter_list] = "parameter_list",
  [sym_parameter] = "parameter",
  [sym_return_type_definition] = "return_type_definition",
  [sym_function_body] = "function_body",
  [sym_modifier_invocation] = "modifier_invocation",
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
  [aux_sym_function_definition_repeat1] = "function_definition_repeat1",
  [aux_sym_constructor_definition_repeat1] = "constructor_definition_repeat1",
  [aux_sym_receive_definition_repeat1] = "receive_definition_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
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
  [anon_sym_function] = anon_sym_function,
  [anon_sym_constructor] = anon_sym_constructor,
  [anon_sym_receive] = anon_sym_receive,
  [anon_sym_fallback] = anon_sym_fallback,
  [anon_sym_returns] = anon_sym_returns,
  [sym_virtual_specifier] = sym_virtual_specifier,
  [sym_override_specifier] = sym_override_specifier,
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
  [sym_function_definition] = sym_function_definition,
  [sym_constructor_definition] = sym_constructor_definition,
  [sym_receive_definition] = sym_receive_definition,
  [sym_fallback_definition] = sym_fallback_definition,
  [sym_parameter_list] = sym_parameter_list,
  [sym_parameter] = sym_parameter,
  [sym_return_type_definition] = sym_return_type_definition,
  [sym_function_body] = sym_function_body,
  [sym_modifier_invocation] = sym_modifier_invocation,
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
  [aux_sym_function_definition_repeat1] = aux_sym_function_definition_repeat1,
  [aux_sym_constructor_definition_repeat1] = aux_sym_constructor_definition_repeat1,
  [aux_sym_receive_definition_repeat1] = aux_sym_receive_definition_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
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
  [anon_sym_function] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_constructor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_receive] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fallback] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_returns] = {
    .visible = true,
    .named = false,
  },
  [sym_virtual_specifier] = {
    .visible = true,
    .named = true,
  },
  [sym_override_specifier] = {
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
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_constructor_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_receive_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_fallback_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_return_type_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_function_body] = {
    .visible = true,
    .named = true,
  },
  [sym_modifier_invocation] = {
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
  [aux_sym_function_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_constructor_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_receive_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
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
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
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
      if (lookahead == '\r') ADVANCE(31);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 2:
      if (lookahead == '\r') ADVANCE(26);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(24);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '\\') ADVANCE(2);
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
      if (lookahead == '\\') ADVANCE(1);
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
      if (lookahead == '\\') ADVANCE(2);
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
      if (lookahead == '\\') ADVANCE(1);
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
        'o', 9,
        'p', 10,
        'r', 11,
        's', 12,
        't', 13,
        'u', 14,
        'v', 15,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'b') ADVANCE(16);
      if (lookahead == 'd') ADVANCE(17);
      if (lookahead == 's') ADVANCE(18);
      END_STATE();
    case 2:
      if (lookahead == 'o') ADVANCE(19);
      if (lookahead == 'y') ADVANCE(20);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(21);
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 4:
      if (lookahead == 'x') ADVANCE(23);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(24);
      if (lookahead == 'r') ADVANCE(25);
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 6:
      if (lookahead == 'm') ADVANCE(27);
      if (lookahead == 'n') ADVANCE(28);
      if (lookahead == 's') ADVANCE(29);
      END_STATE();
    case 7:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(31);
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 9:
      if (lookahead == 'v') ADVANCE(33);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(34);
      if (lookahead == 'r') ADVANCE(35);
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 12:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 13:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 14:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 15:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 16:
      if (lookahead == 's') ADVANCE(42);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(43);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 19:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 20:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(46);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 23:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(49);
      END_STATE();
    case 25:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 27:
      if (lookahead == 'm') ADVANCE(52);
      if (lookahead == 'p') ADVANCE(53);
      END_STATE();
    case 28:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 30:
      if (lookahead == 'b') ADVANCE(55);
      END_STATE();
    case 31:
      if (lookahead == 'p') ADVANCE(56);
      END_STATE();
    case 32:
      if (lookahead == 'm') ADVANCE(57);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 34:
      if (lookahead == 'y') ADVANCE(59);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(60);
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 36:
      if (lookahead == 'b') ADVANCE(62);
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(64);
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 38:
      if (lookahead == 'o') ADVANCE(66);
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(70);
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 43:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(76);
      END_STATE();
    case 47:
      if (lookahead == 's') ADVANCE(77);
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 50:
      if (lookahead == 'm') ADVANCE(81);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(82);
      END_STATE();
    case 52:
      if (lookahead == 'u') ADVANCE(83);
      END_STATE();
    case 53:
      if (lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_primitive_type_token2);
      ADVANCE_MAP(
        '1', 85,
        '2', 86,
        '3', 87,
        '4', 88,
        '5', 89,
        '6', 90,
        '7', 91,
        '8', 92,
        '9', 93,
        'e', 94,
      );
      END_STATE();
    case 55:
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 56:
      if (lookahead == 'p') ADVANCE(96);
      END_STATE();
    case 57:
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 60:
      if (lookahead == 'g') ADVANCE(100);
      END_STATE();
    case 61:
      if (lookahead == 'v') ADVANCE(101);
      END_STATE();
    case 62:
      if (lookahead == 'l') ADVANCE(102);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 65:
      if (lookahead == 'u') ADVANCE(105);
      END_STATE();
    case 66:
      if (lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 68:
      if (lookahead == 'n') ADVANCE(108);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 70:
      if (lookahead == 'w') ADVANCE(110);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 72:
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 75:
      if (lookahead == 's') ADVANCE(114);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(115);
      END_STATE();
    case 77:
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 78:
      if (lookahead == 'r') ADVANCE(117);
      END_STATE();
    case 79:
      if (lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 80:
      if (lookahead == 'b') ADVANCE(119);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 82:
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 84:
      if (lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 85:
      ADVANCE_MAP(
        '0', 123,
        '1', 124,
        '2', 125,
        '3', 126,
        '4', 127,
        '5', 128,
        '6', 129,
        '7', 130,
        '8', 131,
        '9', 132,
      );
      END_STATE();
    case 86:
      if (lookahead == '0') ADVANCE(133);
      if (lookahead == '1') ADVANCE(134);
      if (lookahead == '2') ADVANCE(135);
      if (lookahead == '3') ADVANCE(136);
      if (lookahead == '4') ADVANCE(137);
      if (lookahead == '5') ADVANCE(138);
      END_STATE();
    case 87:
      if (lookahead == '2') ADVANCE(139);
      END_STATE();
    case 88:
      if (lookahead == '0' ||
          lookahead == '8') ADVANCE(139);
      END_STATE();
    case 89:
      if (lookahead == '6') ADVANCE(139);
      END_STATE();
    case 90:
      if (lookahead == '4') ADVANCE(139);
      END_STATE();
    case 91:
      if (lookahead == '2') ADVANCE(139);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_primitive_type_token2);
      if (lookahead == '0' ||
          lookahead == '8') ADVANCE(139);
      END_STATE();
    case 93:
      if (lookahead == '6') ADVANCE(139);
      END_STATE();
    case 94:
      if (lookahead == 'r') ADVANCE(140);
      END_STATE();
    case 95:
      if (lookahead == 'a') ADVANCE(141);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(142);
      END_STATE();
    case 97:
      if (lookahead == 'r') ADVANCE(143);
      END_STATE();
    case 98:
      if (lookahead == 'r') ADVANCE(144);
      END_STATE();
    case 99:
      if (lookahead == 'b') ADVANCE(145);
      END_STATE();
    case 100:
      if (lookahead == 'm') ADVANCE(146);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(147);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(148);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_pure);
      END_STATE();
    case 104:
      if (lookahead == 'i') ADVANCE(149);
      END_STATE();
    case 105:
      if (lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(151);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(152);
      END_STATE();
    case 108:
      if (lookahead == 's') ADVANCE(153);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_primitive_type_token1);
      ADVANCE_MAP(
        '1', 154,
        '2', 155,
        '3', 156,
        '4', 157,
        '5', 158,
        '6', 159,
        '7', 160,
        '8', 161,
        '9', 162,
      );
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_view);
      END_STATE();
    case 111:
      if (lookahead == 'u') ADVANCE(163);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(164);
      END_STATE();
    case 113:
      if (lookahead == 's') ADVANCE(165);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_bytes);
      if (lookahead == '1') ADVANCE(166);
      if (lookahead == '2') ADVANCE(167);
      if (lookahead == '3') ADVANCE(168);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(169);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(170);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(171);
      if (lookahead == 'r') ADVANCE(172);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(173);
      END_STATE();
    case 118:
      if (lookahead == 'n') ADVANCE(174);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(175);
      END_STATE();
    case 120:
      if (lookahead == 'i') ADVANCE(176);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(177);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(178);
      END_STATE();
    case 123:
      if (lookahead == '4') ADVANCE(139);
      END_STATE();
    case 124:
      if (lookahead == '2') ADVANCE(139);
      END_STATE();
    case 125:
      if (lookahead == '0' ||
          lookahead == '8') ADVANCE(139);
      END_STATE();
    case 126:
      if (lookahead == '6') ADVANCE(139);
      END_STATE();
    case 127:
      if (lookahead == '4') ADVANCE(139);
      END_STATE();
    case 128:
      if (lookahead == '2') ADVANCE(139);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_primitive_type_token2);
      if (lookahead == '0' ||
          lookahead == '8') ADVANCE(139);
      END_STATE();
    case 130:
      if (lookahead == '6') ADVANCE(139);
      END_STATE();
    case 131:
      if (lookahead == '4') ADVANCE(139);
      END_STATE();
    case 132:
      if (lookahead == '2') ADVANCE(139);
      END_STATE();
    case 133:
      if (lookahead == '0' ||
          lookahead == '8') ADVANCE(139);
      END_STATE();
    case 134:
      if (lookahead == '6') ADVANCE(139);
      END_STATE();
    case 135:
      if (lookahead == '4') ADVANCE(139);
      END_STATE();
    case 136:
      if (lookahead == '2') ADVANCE(139);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_primitive_type_token2);
      if (lookahead == '0' ||
          lookahead == '8') ADVANCE(139);
      END_STATE();
    case 138:
      if (lookahead == '6') ADVANCE(139);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_primitive_type_token2);
      END_STATE();
    case 140:
      if (lookahead == 'f') ADVANCE(179);
      if (lookahead == 'n') ADVANCE(180);
      END_STATE();
    case 141:
      if (lookahead == 'r') ADVANCE(181);
      END_STATE();
    case 142:
      if (lookahead == 'n') ADVANCE(182);
      END_STATE();
    case 143:
      if (lookahead == 'y') ADVANCE(183);
      END_STATE();
    case 144:
      if (lookahead == 'i') ADVANCE(184);
      END_STATE();
    case 145:
      if (lookahead == 'l') ADVANCE(185);
      END_STATE();
    case 146:
      if (lookahead == 'a') ADVANCE(186);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(187);
      END_STATE();
    case 148:
      if (lookahead == 'c') ADVANCE(188);
      END_STATE();
    case 149:
      if (lookahead == 'v') ADVANCE(189);
      END_STATE();
    case 150:
      if (lookahead == 'n') ADVANCE(190);
      END_STATE();
    case 151:
      if (lookahead == 'g') ADVANCE(191);
      END_STATE();
    case 152:
      if (lookahead == 'g') ADVANCE(192);
      END_STATE();
    case 153:
      if (lookahead == 'i') ADVANCE(193);
      END_STATE();
    case 154:
      ADVANCE_MAP(
        '0', 194,
        '1', 195,
        '2', 196,
        '3', 197,
        '4', 198,
        '5', 199,
        '6', 200,
        '7', 201,
        '8', 202,
        '9', 203,
      );
      END_STATE();
    case 155:
      if (lookahead == '0') ADVANCE(204);
      if (lookahead == '1') ADVANCE(205);
      if (lookahead == '2') ADVANCE(206);
      if (lookahead == '3') ADVANCE(207);
      if (lookahead == '4') ADVANCE(208);
      if (lookahead == '5') ADVANCE(209);
      END_STATE();
    case 156:
      if (lookahead == '2') ADVANCE(210);
      END_STATE();
    case 157:
      if (lookahead == '0' ||
          lookahead == '8') ADVANCE(210);
      END_STATE();
    case 158:
      if (lookahead == '6') ADVANCE(210);
      END_STATE();
    case 159:
      if (lookahead == '4') ADVANCE(210);
      END_STATE();
    case 160:
      if (lookahead == '2') ADVANCE(210);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_primitive_type_token1);
      if (lookahead == '0' ||
          lookahead == '8') ADVANCE(210);
      END_STATE();
    case 162:
      if (lookahead == '6') ADVANCE(210);
      END_STATE();
    case 163:
      if (lookahead == 'a') ADVANCE(211);
      END_STATE();
    case 164:
      if (lookahead == 'c') ADVANCE(212);
      END_STATE();
    case 165:
      if (lookahead == 's') ADVANCE(213);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_primitive_type_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_primitive_type_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_primitive_type_token3);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(169);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_primitive_type_token3);
      END_STATE();
    case 170:
      if (lookahead == 't') ADVANCE(214);
      END_STATE();
    case 171:
      if (lookahead == 'n') ADVANCE(215);
      END_STATE();
    case 172:
      if (lookahead == 'u') ADVANCE(216);
      END_STATE();
    case 173:
      if (lookahead == 'c') ADVANCE(217);
      END_STATE();
    case 174:
      if (lookahead == 'a') ADVANCE(218);
      END_STATE();
    case 175:
      if (lookahead == 'c') ADVANCE(219);
      END_STATE();
    case 176:
      if (lookahead == 'o') ADVANCE(220);
      END_STATE();
    case 177:
      if (lookahead == 'b') ADVANCE(221);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 179:
      if (lookahead == 'a') ADVANCE(222);
      END_STATE();
    case 180:
      if (lookahead == 'a') ADVANCE(223);
      END_STATE();
    case 181:
      if (lookahead == 'y') ADVANCE(224);
      END_STATE();
    case 182:
      if (lookahead == 'g') ADVANCE(225);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_memory);
      END_STATE();
    case 184:
      if (lookahead == 'd') ADVANCE(226);
      END_STATE();
    case 185:
      if (lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_pragma);
      END_STATE();
    case 187:
      if (lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 189:
      if (lookahead == 'e') ADVANCE(229);
      END_STATE();
    case 190:
      if (lookahead == 's') ADVANCE(230);
      END_STATE();
    case 191:
      if (lookahead == 'e') ADVANCE(231);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 193:
      if (lookahead == 'e') ADVANCE(232);
      END_STATE();
    case 194:
      if (lookahead == '4') ADVANCE(210);
      END_STATE();
    case 195:
      if (lookahead == '2') ADVANCE(210);
      END_STATE();
    case 196:
      if (lookahead == '0' ||
          lookahead == '8') ADVANCE(210);
      END_STATE();
    case 197:
      if (lookahead == '6') ADVANCE(210);
      END_STATE();
    case 198:
      if (lookahead == '4') ADVANCE(210);
      END_STATE();
    case 199:
      if (lookahead == '2') ADVANCE(210);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_primitive_type_token1);
      if (lookahead == '0' ||
          lookahead == '8') ADVANCE(210);
      END_STATE();
    case 201:
      if (lookahead == '6') ADVANCE(210);
      END_STATE();
    case 202:
      if (lookahead == '4') ADVANCE(210);
      END_STATE();
    case 203:
      if (lookahead == '2') ADVANCE(210);
      END_STATE();
    case 204:
      if (lookahead == '0' ||
          lookahead == '8') ADVANCE(210);
      END_STATE();
    case 205:
      if (lookahead == '6') ADVANCE(210);
      END_STATE();
    case 206:
      if (lookahead == '4') ADVANCE(210);
      END_STATE();
    case 207:
      if (lookahead == '2') ADVANCE(210);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_primitive_type_token1);
      if (lookahead == '0' ||
          lookahead == '8') ADVANCE(210);
      END_STATE();
    case 209:
      if (lookahead == '6') ADVANCE(210);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_primitive_type_token1);
      END_STATE();
    case 211:
      if (lookahead == 'l') ADVANCE(233);
      END_STATE();
    case 212:
      if (lookahead == 't') ADVANCE(234);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_address);
      END_STATE();
    case 214:
      if (lookahead == 'a') ADVANCE(235);
      END_STATE();
    case 215:
      if (lookahead == 't') ADVANCE(236);
      END_STATE();
    case 216:
      if (lookahead == 'c') ADVANCE(237);
      END_STATE();
    case 217:
      if (lookahead == 't') ADVANCE(238);
      END_STATE();
    case 218:
      if (lookahead == 'l') ADVANCE(239);
      END_STATE();
    case 219:
      if (lookahead == 'k') ADVANCE(240);
      END_STATE();
    case 220:
      if (lookahead == 'n') ADVANCE(241);
      END_STATE();
    case 221:
      if (lookahead == 'l') ADVANCE(242);
      END_STATE();
    case 222:
      if (lookahead == 'c') ADVANCE(243);
      END_STATE();
    case 223:
      if (lookahead == 'l') ADVANCE(244);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_library);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_mapping);
      END_STATE();
    case 226:
      if (lookahead == 'e') ADVANCE(245);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_payable);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_receive);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_returns);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_storage);
      END_STATE();
    case 232:
      if (lookahead == 'n') ADVANCE(246);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_virtual_specifier);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_calldata);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_constant);
      END_STATE();
    case 237:
      if (lookahead == 't') ADVANCE(247);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_contract);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_external);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_fallback);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 242:
      if (lookahead == 'e') ADVANCE(248);
      END_STATE();
    case 243:
      if (lookahead == 'e') ADVANCE(249);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_internal);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_override_specifier);
      END_STATE();
    case 246:
      if (lookahead == 't') ADVANCE(250);
      END_STATE();
    case 247:
      if (lookahead == 'o') ADVANCE(251);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_immutable);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_transient);
      END_STATE();
    case 251:
      if (lookahead == 'r') ADVANCE(252);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_constructor);
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
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 5},
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
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
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
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 3},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 3},
  [114] = {.lex_state = 4},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 3},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 4},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 9},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 9},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 9},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 5},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 10},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 9},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
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
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_constructor] = ACTIONS(1),
    [anon_sym_receive] = ACTIONS(1),
    [anon_sym_fallback] = ACTIONS(1),
    [anon_sym_returns] = ACTIONS(1),
    [sym_virtual_specifier] = ACTIONS(1),
    [sym_override_specifier] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(172),
    [sym__source_element] = STATE(2),
    [sym_pragma_directive] = STATE(2),
    [sym_import_directive] = STATE(2),
    [sym_contract_declaration] = STATE(2),
    [sym_interface_declaration] = STATE(2),
    [sym_library_declaration] = STATE(2),
    [sym_user_defined_type] = STATE(14),
    [sym_constant_variable_declaration] = STATE(2),
    [sym_type_name] = STATE(145),
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
    STATE(145), 1,
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
    STATE(145), 1,
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
  [118] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_mapping,
    ACTIONS(56), 1,
      anon_sym_RBRACE,
    ACTIONS(58), 1,
      anon_sym_function,
    ACTIONS(60), 1,
      anon_sym_constructor,
    ACTIONS(62), 1,
      anon_sym_receive,
    ACTIONS(64), 1,
      anon_sym_fallback,
    STATE(13), 1,
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
    STATE(5), 7,
      sym__contract_member,
      sym_state_variable_declaration,
      sym_function_definition,
      sym_constructor_definition,
      sym_receive_definition,
      sym_fallback_definition,
      aux_sym_contract_body_repeat1,
  [170] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_mapping,
    ACTIONS(58), 1,
      anon_sym_function,
    ACTIONS(60), 1,
      anon_sym_constructor,
    ACTIONS(62), 1,
      anon_sym_receive,
    ACTIONS(64), 1,
      anon_sym_fallback,
    ACTIONS(66), 1,
      anon_sym_RBRACE,
    STATE(13), 1,
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
    STATE(6), 7,
      sym__contract_member,
      sym_state_variable_declaration,
      sym_function_definition,
      sym_constructor_definition,
      sym_receive_definition,
      sym_fallback_definition,
      aux_sym_contract_body_repeat1,
  [222] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      sym_identifier,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
    ACTIONS(76), 1,
      anon_sym_mapping,
    ACTIONS(79), 1,
      anon_sym_function,
    ACTIONS(82), 1,
      anon_sym_constructor,
    ACTIONS(85), 1,
      anon_sym_receive,
    ACTIONS(88), 1,
      anon_sym_fallback,
    STATE(13), 1,
      sym_type_name,
    STATE(14), 4,
      sym_user_defined_type,
      sym_primitive_type,
      sym_array_type,
      sym_mapping_type,
    ACTIONS(73), 7,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_address,
      anon_sym_bytes,
      aux_sym_primitive_type_token1,
      aux_sym_primitive_type_token2,
      aux_sym_primitive_type_token3,
    STATE(6), 7,
      sym__contract_member,
      sym_state_variable_declaration,
      sym_function_definition,
      sym_constructor_definition,
      sym_receive_definition,
      sym_fallback_definition,
      aux_sym_contract_body_repeat1,
  [274] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_DOT,
    STATE(7), 1,
      aux_sym_user_defined_type_repeat1,
    ACTIONS(93), 6,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_EQ_GT,
    ACTIONS(91), 15,
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
  [309] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_DOT,
    STATE(9), 1,
      aux_sym_user_defined_type_repeat1,
    ACTIONS(100), 6,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_EQ_GT,
    ACTIONS(98), 15,
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
  [344] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_DOT,
    STATE(7), 1,
      aux_sym_user_defined_type_repeat1,
    ACTIONS(106), 6,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_EQ_GT,
    ACTIONS(104), 15,
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
  [379] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 7,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_EQ_GT,
    ACTIONS(91), 15,
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
  [409] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(116), 1,
      anon_sym_returns,
    STATE(51), 1,
      sym_function_body,
    STATE(143), 1,
      sym_return_type_definition,
    ACTIONS(118), 2,
      sym_virtual_specifier,
      sym_override_specifier,
    ACTIONS(114), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_external,
    STATE(23), 4,
      sym_visibility,
      sym_state_mutability,
      sym_modifier_invocation,
      aux_sym_function_definition_repeat1,
    ACTIONS(112), 5,
      anon_sym_constant,
      anon_sym_immutable,
      anon_sym_pure,
      anon_sym_view,
      anon_sym_payable,
  [451] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(116), 1,
      anon_sym_returns,
    STATE(63), 1,
      sym_function_body,
    STATE(135), 1,
      sym_return_type_definition,
    ACTIONS(120), 2,
      sym_virtual_specifier,
      sym_override_specifier,
    ACTIONS(114), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_external,
    STATE(11), 4,
      sym_visibility,
      sym_state_mutability,
      sym_modifier_invocation,
      aux_sym_function_definition_repeat1,
    ACTIONS(112), 5,
      anon_sym_constant,
      anon_sym_immutable,
      anon_sym_pure,
      anon_sym_view,
      anon_sym_payable,
  [493] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      sym_identifier,
    ACTIONS(124), 1,
      anon_sym_LBRACK,
    ACTIONS(114), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_external,
    ACTIONS(126), 4,
      anon_sym_memory,
      anon_sym_storage,
      anon_sym_calldata,
      anon_sym_transient,
    STATE(22), 4,
      sym_visibility,
      sym_state_mutability,
      sym_storage_location,
      aux_sym_state_variable_declaration_repeat1,
    ACTIONS(112), 5,
      anon_sym_constant,
      anon_sym_immutable,
      anon_sym_pure,
      anon_sym_view,
      anon_sym_payable,
  [528] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_EQ_GT,
    ACTIONS(128), 14,
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
  [554] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_EQ_GT,
    ACTIONS(132), 14,
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
  [580] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_EQ_GT,
    ACTIONS(136), 14,
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
  [606] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_LBRACE,
    ACTIONS(140), 17,
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
      anon_sym_returns,
      sym_virtual_specifier,
      sym_override_specifier,
      sym_identifier,
  [632] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_EQ_GT,
    ACTIONS(144), 14,
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
  [658] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      anon_sym_LBRACE,
    ACTIONS(148), 17,
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
      anon_sym_returns,
      sym_virtual_specifier,
      sym_override_specifier,
      sym_identifier,
  [684] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      sym_identifier,
    ACTIONS(157), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_external,
    ACTIONS(160), 4,
      anon_sym_memory,
      anon_sym_storage,
      anon_sym_calldata,
      anon_sym_transient,
    STATE(20), 4,
      sym_visibility,
      sym_state_mutability,
      sym_storage_location,
      aux_sym_state_variable_declaration_repeat1,
    ACTIONS(154), 5,
      anon_sym_constant,
      anon_sym_immutable,
      anon_sym_pure,
      anon_sym_view,
      anon_sym_payable,
  [716] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_EQ_GT,
    ACTIONS(163), 14,
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
  [742] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      sym_identifier,
    ACTIONS(114), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_external,
    ACTIONS(126), 4,
      anon_sym_memory,
      anon_sym_storage,
      anon_sym_calldata,
      anon_sym_transient,
    STATE(20), 4,
      sym_visibility,
      sym_state_mutability,
      sym_storage_location,
      aux_sym_state_variable_declaration_repeat1,
    ACTIONS(112), 5,
      anon_sym_constant,
      anon_sym_immutable,
      anon_sym_pure,
      anon_sym_view,
      anon_sym_payable,
  [774] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      sym_identifier,
    ACTIONS(172), 1,
      anon_sym_LBRACE,
    ACTIONS(180), 1,
      anon_sym_returns,
    ACTIONS(182), 2,
      sym_virtual_specifier,
      sym_override_specifier,
    ACTIONS(177), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_external,
    STATE(23), 4,
      sym_visibility,
      sym_state_mutability,
      sym_modifier_invocation,
      aux_sym_function_definition_repeat1,
    ACTIONS(174), 5,
      anon_sym_constant,
      anon_sym_immutable,
      anon_sym_pure,
      anon_sym_view,
      anon_sym_payable,
  [810] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_mapping,
    ACTIONS(185), 1,
      anon_sym_RPAREN,
    STATE(77), 1,
      sym_type_name,
    STATE(146), 1,
      sym_parameter,
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
  [844] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_mapping,
    ACTIONS(187), 1,
      anon_sym_RPAREN,
    STATE(77), 1,
      sym_type_name,
    STATE(124), 1,
      sym_parameter,
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
  [878] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    STATE(60), 1,
      sym_function_body,
    ACTIONS(114), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_external,
    STATE(36), 4,
      sym_visibility,
      sym_state_mutability,
      sym_modifier_invocation,
      aux_sym_constructor_definition_repeat1,
    ACTIONS(112), 5,
      anon_sym_constant,
      anon_sym_immutable,
      anon_sym_pure,
      anon_sym_view,
      anon_sym_payable,
  [910] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      ts_builtin_sym_end,
    ACTIONS(191), 15,
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
  [934] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      ts_builtin_sym_end,
    ACTIONS(195), 15,
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
  [958] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(197), 14,
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
  [982] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      ts_builtin_sym_end,
    ACTIONS(203), 15,
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
  [1006] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      ts_builtin_sym_end,
    ACTIONS(207), 15,
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
  [1030] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      ts_builtin_sym_end,
    ACTIONS(211), 15,
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
  [1054] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      ts_builtin_sym_end,
    ACTIONS(215), 15,
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
  [1078] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      ts_builtin_sym_end,
    ACTIONS(219), 15,
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
  [1102] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_LBRACE,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    STATE(66), 1,
      sym_call_arguments,
    ACTIONS(221), 13,
      anon_sym_constant,
      anon_sym_public,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_external,
      anon_sym_immutable,
      anon_sym_pure,
      anon_sym_view,
      anon_sym_payable,
      anon_sym_returns,
      sym_virtual_specifier,
      sym_override_specifier,
      sym_identifier,
  [1130] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    STATE(67), 1,
      sym_function_body,
    ACTIONS(114), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_external,
    STATE(49), 4,
      sym_visibility,
      sym_state_mutability,
      sym_modifier_invocation,
      aux_sym_constructor_definition_repeat1,
    ACTIONS(112), 5,
      anon_sym_constant,
      anon_sym_immutable,
      anon_sym_pure,
      anon_sym_view,
      anon_sym_payable,
  [1162] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      ts_builtin_sym_end,
    ACTIONS(229), 15,
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
  [1186] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 2,
      anon_sym_LBRACE,
      anon_sym_COMMA,
    ACTIONS(231), 14,
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
      anon_sym_returns,
      sym_virtual_specifier,
      sym_override_specifier,
      sym_identifier,
  [1210] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      ts_builtin_sym_end,
    ACTIONS(237), 15,
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
  [1234] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      ts_builtin_sym_end,
    ACTIONS(241), 15,
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
  [1258] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      ts_builtin_sym_end,
    ACTIONS(245), 15,
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
  [1282] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      ts_builtin_sym_end,
    ACTIONS(249), 15,
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
  [1306] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_mapping,
    ACTIONS(251), 1,
      anon_sym_RPAREN,
    STATE(77), 1,
      sym_type_name,
    STATE(146), 1,
      sym_parameter,
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
  [1340] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 2,
      anon_sym_LBRACE,
      anon_sym_COMMA,
    ACTIONS(253), 14,
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
      anon_sym_returns,
      sym_virtual_specifier,
      sym_override_specifier,
      sym_identifier,
  [1364] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      ts_builtin_sym_end,
    ACTIONS(259), 15,
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
  [1388] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      ts_builtin_sym_end,
    ACTIONS(263), 15,
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
  [1412] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 2,
      anon_sym_LBRACE,
      anon_sym_COMMA,
    ACTIONS(265), 14,
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
      anon_sym_returns,
      sym_virtual_specifier,
      sym_override_specifier,
      sym_identifier,
  [1436] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 2,
      anon_sym_LBRACE,
      anon_sym_COMMA,
    ACTIONS(269), 14,
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
      anon_sym_returns,
      sym_virtual_specifier,
      sym_override_specifier,
      sym_identifier,
  [1460] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      sym_identifier,
    ACTIONS(276), 1,
      anon_sym_LBRACE,
    ACTIONS(281), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_external,
    STATE(49), 4,
      sym_visibility,
      sym_state_mutability,
      sym_modifier_invocation,
      aux_sym_constructor_definition_repeat1,
    ACTIONS(278), 5,
      anon_sym_constant,
      anon_sym_immutable,
      anon_sym_pure,
      anon_sym_view,
      anon_sym_payable,
  [1489] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_mapping,
    STATE(77), 1,
      sym_type_name,
    STATE(146), 1,
      sym_parameter,
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
  [1520] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      anon_sym_RBRACE,
    ACTIONS(284), 13,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_address,
      anon_sym_bytes,
      aux_sym_primitive_type_token1,
      aux_sym_primitive_type_token2,
      aux_sym_primitive_type_token3,
      anon_sym_mapping,
      anon_sym_function,
      anon_sym_constructor,
      anon_sym_receive,
      anon_sym_fallback,
      sym_identifier,
  [1542] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_mapping,
    STATE(132), 1,
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
  [1570] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_mapping,
    STATE(149), 1,
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
  [1598] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    STATE(59), 1,
      sym_function_body,
    STATE(61), 3,
      sym_visibility,
      sym_state_mutability,
      aux_sym_receive_definition_repeat1,
    ACTIONS(290), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_external,
    ACTIONS(288), 5,
      anon_sym_constant,
      anon_sym_immutable,
      anon_sym_pure,
      anon_sym_view,
      anon_sym_payable,
  [1626] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    STATE(57), 1,
      sym_function_body,
    STATE(58), 3,
      sym_visibility,
      sym_state_mutability,
      aux_sym_receive_definition_repeat1,
    ACTIONS(290), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_external,
    ACTIONS(288), 5,
      anon_sym_constant,
      anon_sym_immutable,
      anon_sym_pure,
      anon_sym_view,
      anon_sym_payable,
  [1654] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_LBRACE,
    ACTIONS(292), 13,
      anon_sym_constant,
      anon_sym_public,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_external,
      anon_sym_immutable,
      anon_sym_pure,
      anon_sym_view,
      anon_sym_payable,
      anon_sym_returns,
      sym_virtual_specifier,
      sym_override_specifier,
      sym_identifier,
  [1676] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_RBRACE,
    ACTIONS(296), 13,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_address,
      anon_sym_bytes,
      aux_sym_primitive_type_token1,
      aux_sym_primitive_type_token2,
      aux_sym_primitive_type_token3,
      anon_sym_mapping,
      anon_sym_function,
      anon_sym_constructor,
      anon_sym_receive,
      anon_sym_fallback,
      sym_identifier,
  [1698] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    STATE(70), 1,
      sym_function_body,
    STATE(76), 3,
      sym_visibility,
      sym_state_mutability,
      aux_sym_receive_definition_repeat1,
    ACTIONS(290), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_external,
    ACTIONS(288), 5,
      anon_sym_constant,
      anon_sym_immutable,
      anon_sym_pure,
      anon_sym_view,
      anon_sym_payable,
  [1726] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_RBRACE,
    ACTIONS(300), 13,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_address,
      anon_sym_bytes,
      aux_sym_primitive_type_token1,
      aux_sym_primitive_type_token2,
      aux_sym_primitive_type_token3,
      anon_sym_mapping,
      anon_sym_function,
      anon_sym_constructor,
      anon_sym_receive,
      anon_sym_fallback,
      sym_identifier,
  [1748] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_RBRACE,
    ACTIONS(304), 13,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_address,
      anon_sym_bytes,
      aux_sym_primitive_type_token1,
      aux_sym_primitive_type_token2,
      aux_sym_primitive_type_token3,
      anon_sym_mapping,
      anon_sym_function,
      anon_sym_constructor,
      anon_sym_receive,
      anon_sym_fallback,
      sym_identifier,
  [1770] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    STATE(68), 1,
      sym_function_body,
    STATE(76), 3,
      sym_visibility,
      sym_state_mutability,
      aux_sym_receive_definition_repeat1,
    ACTIONS(290), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_external,
    ACTIONS(288), 5,
      anon_sym_constant,
      anon_sym_immutable,
      anon_sym_pure,
      anon_sym_view,
      anon_sym_payable,
  [1798] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_RBRACE,
    ACTIONS(308), 13,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_address,
      anon_sym_bytes,
      aux_sym_primitive_type_token1,
      aux_sym_primitive_type_token2,
      aux_sym_primitive_type_token3,
      anon_sym_mapping,
      anon_sym_function,
      anon_sym_constructor,
      anon_sym_receive,
      anon_sym_fallback,
      sym_identifier,
  [1820] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_RBRACE,
    ACTIONS(312), 13,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_address,
      anon_sym_bytes,
      aux_sym_primitive_type_token1,
      aux_sym_primitive_type_token2,
      aux_sym_primitive_type_token3,
      anon_sym_mapping,
      anon_sym_function,
      anon_sym_constructor,
      anon_sym_receive,
      anon_sym_fallback,
      sym_identifier,
  [1842] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_LBRACE,
    ACTIONS(316), 13,
      anon_sym_constant,
      anon_sym_public,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_external,
      anon_sym_immutable,
      anon_sym_pure,
      anon_sym_view,
      anon_sym_payable,
      anon_sym_returns,
      sym_virtual_specifier,
      sym_override_specifier,
      sym_identifier,
  [1864] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_RBRACE,
    ACTIONS(320), 13,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_address,
      anon_sym_bytes,
      aux_sym_primitive_type_token1,
      aux_sym_primitive_type_token2,
      aux_sym_primitive_type_token3,
      anon_sym_mapping,
      anon_sym_function,
      anon_sym_constructor,
      anon_sym_receive,
      anon_sym_fallback,
      sym_identifier,
  [1886] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_LBRACE,
    ACTIONS(324), 13,
      anon_sym_constant,
      anon_sym_public,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_external,
      anon_sym_immutable,
      anon_sym_pure,
      anon_sym_view,
      anon_sym_payable,
      anon_sym_returns,
      sym_virtual_specifier,
      sym_override_specifier,
      sym_identifier,
  [1908] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_RBRACE,
    ACTIONS(328), 13,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_address,
      anon_sym_bytes,
      aux_sym_primitive_type_token1,
      aux_sym_primitive_type_token2,
      aux_sym_primitive_type_token3,
      anon_sym_mapping,
      anon_sym_function,
      anon_sym_constructor,
      anon_sym_receive,
      anon_sym_fallback,
      sym_identifier,
  [1930] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_RBRACE,
    ACTIONS(332), 13,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_address,
      anon_sym_bytes,
      aux_sym_primitive_type_token1,
      aux_sym_primitive_type_token2,
      aux_sym_primitive_type_token3,
      anon_sym_mapping,
      anon_sym_function,
      anon_sym_constructor,
      anon_sym_receive,
      anon_sym_fallback,
      sym_identifier,
  [1952] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      anon_sym_LBRACE,
    ACTIONS(336), 13,
      anon_sym_constant,
      anon_sym_public,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_external,
      anon_sym_immutable,
      anon_sym_pure,
      anon_sym_view,
      anon_sym_payable,
      anon_sym_returns,
      sym_virtual_specifier,
      sym_override_specifier,
      sym_identifier,
  [1974] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_RBRACE,
    ACTIONS(340), 13,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_address,
      anon_sym_bytes,
      aux_sym_primitive_type_token1,
      aux_sym_primitive_type_token2,
      aux_sym_primitive_type_token3,
      anon_sym_mapping,
      anon_sym_function,
      anon_sym_constructor,
      anon_sym_receive,
      anon_sym_fallback,
      sym_identifier,
  [1996] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      anon_sym_RBRACE,
    ACTIONS(344), 13,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_address,
      anon_sym_bytes,
      aux_sym_primitive_type_token1,
      aux_sym_primitive_type_token2,
      aux_sym_primitive_type_token3,
      anon_sym_mapping,
      anon_sym_function,
      anon_sym_constructor,
      anon_sym_receive,
      anon_sym_fallback,
      sym_identifier,
  [2018] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_RBRACE,
    ACTIONS(348), 13,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_address,
      anon_sym_bytes,
      aux_sym_primitive_type_token1,
      aux_sym_primitive_type_token2,
      aux_sym_primitive_type_token3,
      anon_sym_mapping,
      anon_sym_function,
      anon_sym_constructor,
      anon_sym_receive,
      anon_sym_fallback,
      sym_identifier,
  [2040] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_RBRACE,
    ACTIONS(352), 13,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_address,
      anon_sym_bytes,
      aux_sym_primitive_type_token1,
      aux_sym_primitive_type_token2,
      aux_sym_primitive_type_token3,
      anon_sym_mapping,
      anon_sym_function,
      anon_sym_constructor,
      anon_sym_receive,
      anon_sym_fallback,
      sym_identifier,
  [2062] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      anon_sym_LBRACE,
    ACTIONS(356), 13,
      anon_sym_constant,
      anon_sym_public,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_external,
      anon_sym_immutable,
      anon_sym_pure,
      anon_sym_view,
      anon_sym_payable,
      anon_sym_returns,
      sym_virtual_specifier,
      sym_override_specifier,
      sym_identifier,
  [2084] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      anon_sym_RBRACE,
    ACTIONS(360), 13,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_address,
      anon_sym_bytes,
      aux_sym_primitive_type_token1,
      aux_sym_primitive_type_token2,
      aux_sym_primitive_type_token3,
      anon_sym_mapping,
      anon_sym_function,
      anon_sym_constructor,
      anon_sym_receive,
      anon_sym_fallback,
      sym_identifier,
  [2106] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_LBRACE,
    STATE(76), 3,
      sym_visibility,
      sym_state_mutability,
      aux_sym_receive_definition_repeat1,
    ACTIONS(369), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_external,
    ACTIONS(366), 5,
      anon_sym_constant,
      anon_sym_immutable,
      anon_sym_pure,
      anon_sym_view,
      anon_sym_payable,
  [2131] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_LBRACK,
    ACTIONS(372), 1,
      sym_identifier,
    STATE(115), 1,
      sym_storage_location,
    ACTIONS(374), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(126), 4,
      anon_sym_memory,
      anon_sym_storage,
      anon_sym_calldata,
      anon_sym_transient,
  [2154] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      anon_sym_DQUOTE,
    ACTIONS(380), 1,
      anon_sym_SQUOTE,
    ACTIONS(382), 1,
      anon_sym_RBRACK,
    ACTIONS(376), 2,
      sym_number_literal,
      sym_identifier,
    STATE(166), 2,
      sym_string_literal,
      sym__expression,
  [2175] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      anon_sym_DQUOTE,
    ACTIONS(380), 1,
      anon_sym_SQUOTE,
    ACTIONS(386), 1,
      anon_sym_RPAREN,
    ACTIONS(384), 2,
      sym_number_literal,
      sym_identifier,
    STATE(111), 2,
      sym_string_literal,
      sym__expression,
  [2196] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      anon_sym_DQUOTE,
    ACTIONS(380), 1,
      anon_sym_SQUOTE,
    ACTIONS(390), 1,
      anon_sym_RPAREN,
    ACTIONS(388), 2,
      sym_number_literal,
      sym_identifier,
    STATE(148), 2,
      sym_string_literal,
      sym__expression,
  [2217] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      anon_sym_DQUOTE,
    ACTIONS(380), 1,
      anon_sym_SQUOTE,
    ACTIONS(392), 1,
      anon_sym_RPAREN,
    ACTIONS(388), 2,
      sym_number_literal,
      sym_identifier,
    STATE(148), 2,
      sym_string_literal,
      sym__expression,
  [2238] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      anon_sym_DQUOTE,
    ACTIONS(380), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 2,
      sym_number_literal,
      sym_identifier,
    STATE(154), 2,
      sym_string_literal,
      sym__expression,
  [2256] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      anon_sym_DQUOTE,
    ACTIONS(380), 1,
      anon_sym_SQUOTE,
    ACTIONS(388), 2,
      sym_number_literal,
      sym_identifier,
    STATE(148), 2,
      sym_string_literal,
      sym__expression,
  [2274] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      anon_sym_DQUOTE,
    ACTIONS(380), 1,
      anon_sym_SQUOTE,
    ACTIONS(396), 1,
      sym_import_star,
    ACTIONS(398), 1,
      anon_sym_LBRACE,
    STATE(128), 1,
      sym_string_literal,
    STATE(156), 1,
      sym_import_clause,
  [2296] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      anon_sym_DQUOTE,
    ACTIONS(380), 1,
      anon_sym_SQUOTE,
    ACTIONS(400), 2,
      sym_number_literal,
      sym_identifier,
    STATE(153), 2,
      sym_string_literal,
      sym__expression,
  [2314] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      anon_sym_DQUOTE,
    ACTIONS(380), 1,
      anon_sym_SQUOTE,
    ACTIONS(402), 2,
      sym_number_literal,
      sym_identifier,
    STATE(171), 2,
      sym_string_literal,
      sym__expression,
  [2332] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_LBRACE,
    ACTIONS(406), 1,
      anon_sym_is,
    STATE(32), 1,
      sym_contract_body,
    STATE(102), 2,
      sym_inheritance_specifier,
      aux_sym_contract_declaration_repeat1,
  [2349] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    STATE(121), 1,
      sym_call_arguments,
    ACTIONS(408), 3,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_is,
  [2364] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_LBRACE,
    ACTIONS(406), 1,
      anon_sym_is,
    STATE(28), 1,
      sym_contract_body,
    STATE(87), 2,
      sym_inheritance_specifier,
      aux_sym_contract_declaration_repeat1,
  [2381] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_LBRACE,
    ACTIONS(406), 1,
      anon_sym_is,
    STATE(37), 1,
      sym_contract_body,
    STATE(97), 2,
      sym_inheritance_specifier,
      aux_sym_contract_declaration_repeat1,
  [2398] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(410), 1,
      anon_sym_LBRACE,
    ACTIONS(412), 1,
      anon_sym_is,
    STATE(88), 1,
      sym_user_defined_type,
    STATE(108), 1,
      sym_inheritance_type,
  [2417] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_as,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [2428] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(416), 1,
      anon_sym_LBRACE,
    ACTIONS(418), 1,
      anon_sym_is,
    STATE(88), 1,
      sym_user_defined_type,
    STATE(108), 1,
      sym_inheritance_type,
  [2447] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_as,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [2458] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_LBRACE,
    ACTIONS(406), 1,
      anon_sym_is,
    STATE(46), 1,
      sym_contract_body,
    STATE(102), 2,
      sym_inheritance_specifier,
      aux_sym_contract_declaration_repeat1,
  [2475] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_LBRACE,
    ACTIONS(406), 1,
      anon_sym_is,
    STATE(32), 1,
      sym_contract_body,
    STATE(95), 2,
      sym_inheritance_specifier,
      aux_sym_contract_declaration_repeat1,
  [2492] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_LBRACE,
    ACTIONS(406), 1,
      anon_sym_is,
    STATE(41), 1,
      sym_contract_body,
    STATE(102), 2,
      sym_inheritance_specifier,
      aux_sym_contract_declaration_repeat1,
  [2509] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 4,
      anon_sym_SEMI,
      anon_sym_from,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2519] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      anon_sym_as,
    STATE(139), 1,
      sym_import_alias,
    ACTIONS(424), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2533] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      anon_sym_COMMA,
    STATE(100), 1,
      aux_sym_inheritance_specifier_repeat1,
    ACTIONS(428), 2,
      anon_sym_LBRACE,
      anon_sym_is,
  [2547] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_COMMA,
    STATE(100), 1,
      aux_sym_inheritance_specifier_repeat1,
    ACTIONS(410), 2,
      anon_sym_LBRACE,
      anon_sym_is,
  [2561] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      anon_sym_LBRACE,
    ACTIONS(437), 1,
      anon_sym_is,
    STATE(102), 2,
      sym_inheritance_specifier,
      aux_sym_contract_declaration_repeat1,
  [2575] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_COMMA,
    STATE(101), 1,
      aux_sym_inheritance_specifier_repeat1,
    ACTIONS(440), 2,
      anon_sym_LBRACE,
      anon_sym_is,
  [2589] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_COMMA,
    ACTIONS(447), 1,
      anon_sym_RBRACE,
    STATE(104), 1,
      aux_sym_import_clause_repeat1,
  [2602] = 4,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      aux_sym_string_literal_token2,
    ACTIONS(454), 1,
      sym_comment,
    STATE(105), 1,
      aux_sym_string_literal_repeat2,
  [2615] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      sym_identifier,
    ACTIONS(458), 1,
      anon_sym_RBRACE,
    STATE(151), 1,
      sym_import_name,
  [2628] = 4,
    ACTIONS(454), 1,
      sym_comment,
    ACTIONS(460), 1,
      anon_sym_DQUOTE,
    ACTIONS(462), 1,
      aux_sym_string_literal_token1,
    STATE(107), 1,
      aux_sym_string_literal_repeat1,
  [2641] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 3,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_is,
  [2650] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      anon_sym_RBRACE,
    ACTIONS(465), 1,
      anon_sym_COMMA,
    STATE(104), 1,
      aux_sym_import_clause_repeat1,
  [2663] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      anon_sym_COMMA,
    ACTIONS(469), 1,
      anon_sym_RBRACE,
    STATE(109), 1,
      aux_sym_import_clause_repeat1,
  [2676] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      anon_sym_COMMA,
    ACTIONS(473), 1,
      anon_sym_RPAREN,
    STATE(122), 1,
      aux_sym_call_arguments_repeat1,
  [2689] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      sym_identifier,
    ACTIONS(475), 1,
      anon_sym_RBRACE,
    STATE(151), 1,
      sym_import_name,
  [2702] = 4,
    ACTIONS(454), 1,
      sym_comment,
    ACTIONS(477), 1,
      anon_sym_DQUOTE,
    ACTIONS(479), 1,
      aux_sym_string_literal_token1,
    STATE(107), 1,
      aux_sym_string_literal_repeat1,
  [2715] = 4,
    ACTIONS(454), 1,
      sym_comment,
    ACTIONS(477), 1,
      anon_sym_SQUOTE,
    ACTIONS(481), 1,
      aux_sym_string_literal_token2,
    STATE(105), 1,
      aux_sym_string_literal_repeat2,
  [2728] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      sym_identifier,
    ACTIONS(485), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2739] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      sym_identifier,
    ACTIONS(487), 1,
      anon_sym_RBRACE,
    STATE(110), 1,
      sym_import_name,
  [2752] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_RPAREN,
    ACTIONS(489), 1,
      anon_sym_COMMA,
    STATE(127), 1,
      aux_sym_parameter_list_repeat1,
  [2765] = 4,
    ACTIONS(454), 1,
      sym_comment,
    ACTIONS(491), 1,
      anon_sym_DQUOTE,
    ACTIONS(493), 1,
      aux_sym_string_literal_token1,
    STATE(113), 1,
      aux_sym_string_literal_repeat1,
  [2778] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      anon_sym_DQUOTE,
    ACTIONS(380), 1,
      anon_sym_SQUOTE,
    STATE(169), 1,
      sym_string_literal,
  [2791] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      sym_identifier,
    STATE(88), 1,
      sym_user_defined_type,
    STATE(108), 1,
      sym_inheritance_type,
  [2804] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 3,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_is,
  [2813] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      anon_sym_RPAREN,
    ACTIONS(499), 1,
      anon_sym_COMMA,
    STATE(129), 1,
      aux_sym_call_arguments_repeat1,
  [2826] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      anon_sym_DQUOTE,
    ACTIONS(380), 1,
      anon_sym_SQUOTE,
    STATE(179), 1,
      sym_string_literal,
  [2839] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      anon_sym_COMMA,
    ACTIONS(503), 1,
      anon_sym_RPAREN,
    STATE(117), 1,
      aux_sym_parameter_list_repeat1,
  [2852] = 4,
    ACTIONS(454), 1,
      sym_comment,
    ACTIONS(491), 1,
      anon_sym_SQUOTE,
    ACTIONS(505), 1,
      aux_sym_string_literal_token2,
    STATE(114), 1,
      aux_sym_string_literal_repeat2,
  [2865] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      sym_identifier,
    STATE(88), 1,
      sym_user_defined_type,
    STATE(103), 1,
      sym_inheritance_type,
  [2878] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      anon_sym_COMMA,
    ACTIONS(510), 1,
      anon_sym_RPAREN,
    STATE(127), 1,
      aux_sym_parameter_list_repeat1,
  [2891] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      anon_sym_as,
    ACTIONS(512), 1,
      anon_sym_SEMI,
    STATE(159), 1,
      sym_import_alias,
  [2904] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      anon_sym_COMMA,
    ACTIONS(517), 1,
      anon_sym_RPAREN,
    STATE(129), 1,
      aux_sym_call_arguments_repeat1,
  [2917] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2925] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_LBRACE,
    STATE(39), 1,
      sym_contract_body,
  [2935] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_LBRACK,
    ACTIONS(521), 1,
      anon_sym_RPAREN,
  [2945] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      sym_pragma_name,
    STATE(164), 1,
      sym_pragma_token,
  [2955] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      anon_sym_LPAREN,
    STATE(161), 1,
      sym_parameter_list,
  [2965] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    STATE(51), 1,
      sym_function_body,
  [2975] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      anon_sym_as,
    STATE(155), 1,
      sym_import_alias,
  [2985] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2993] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      sym_identifier,
    STATE(151), 1,
      sym_import_name,
  [3003] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3011] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      anon_sym_LPAREN,
    STATE(26), 1,
      sym_parameter_list,
  [3021] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      anon_sym_LPAREN,
    STATE(54), 1,
      sym_parameter_list,
  [3031] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      anon_sym_LPAREN,
    STATE(55), 1,
      sym_parameter_list,
  [3041] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    STATE(73), 1,
      sym_function_body,
  [3051] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_SEMI,
    ACTIONS(531), 1,
      anon_sym_EQ,
  [3061] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_LBRACK,
    ACTIONS(533), 1,
      anon_sym_constant,
  [3071] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3079] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      anon_sym_SEMI,
    ACTIONS(537), 1,
      anon_sym_EQ,
  [3089] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3097] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_LBRACK,
    ACTIONS(539), 1,
      anon_sym_EQ_GT,
  [3107] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      sym_parameter_list,
  [3117] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3125] = 2,
    ACTIONS(454), 1,
      sym_comment,
    ACTIONS(541), 1,
      sym_pragma_value,
  [3132] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 1,
      anon_sym_SEMI,
  [3139] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 1,
      anon_sym_SEMI,
  [3146] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 1,
      anon_sym_from,
  [3153] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      anon_sym_from,
  [3160] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      sym_identifier,
  [3167] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      anon_sym_from,
  [3174] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_SEMI,
  [3181] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_from,
  [3188] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      anon_sym_LBRACE,
  [3195] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 1,
      sym_identifier,
  [3202] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      sym_identifier,
  [3209] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      anon_sym_SEMI,
  [3216] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      anon_sym_EQ,
  [3223] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_RBRACK,
  [3230] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      sym_identifier,
  [3237] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 1,
      sym_identifier,
  [3244] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      anon_sym_SEMI,
  [3251] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      anon_sym_RBRACE,
  [3258] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      anon_sym_SEMI,
  [3265] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      ts_builtin_sym_end,
  [3272] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 1,
      sym_identifier,
  [3279] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 1,
      anon_sym_LPAREN,
  [3286] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_SEMI,
  [3293] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      sym_identifier,
  [3300] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      sym_identifier,
  [3307] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      anon_sym_from,
  [3314] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_SEMI,
  [3321] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      anon_sym_contract,
  [3328] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      anon_sym_from,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 59,
  [SMALL_STATE(4)] = 118,
  [SMALL_STATE(5)] = 170,
  [SMALL_STATE(6)] = 222,
  [SMALL_STATE(7)] = 274,
  [SMALL_STATE(8)] = 309,
  [SMALL_STATE(9)] = 344,
  [SMALL_STATE(10)] = 379,
  [SMALL_STATE(11)] = 409,
  [SMALL_STATE(12)] = 451,
  [SMALL_STATE(13)] = 493,
  [SMALL_STATE(14)] = 528,
  [SMALL_STATE(15)] = 554,
  [SMALL_STATE(16)] = 580,
  [SMALL_STATE(17)] = 606,
  [SMALL_STATE(18)] = 632,
  [SMALL_STATE(19)] = 658,
  [SMALL_STATE(20)] = 684,
  [SMALL_STATE(21)] = 716,
  [SMALL_STATE(22)] = 742,
  [SMALL_STATE(23)] = 774,
  [SMALL_STATE(24)] = 810,
  [SMALL_STATE(25)] = 844,
  [SMALL_STATE(26)] = 878,
  [SMALL_STATE(27)] = 910,
  [SMALL_STATE(28)] = 934,
  [SMALL_STATE(29)] = 958,
  [SMALL_STATE(30)] = 982,
  [SMALL_STATE(31)] = 1006,
  [SMALL_STATE(32)] = 1030,
  [SMALL_STATE(33)] = 1054,
  [SMALL_STATE(34)] = 1078,
  [SMALL_STATE(35)] = 1102,
  [SMALL_STATE(36)] = 1130,
  [SMALL_STATE(37)] = 1162,
  [SMALL_STATE(38)] = 1186,
  [SMALL_STATE(39)] = 1210,
  [SMALL_STATE(40)] = 1234,
  [SMALL_STATE(41)] = 1258,
  [SMALL_STATE(42)] = 1282,
  [SMALL_STATE(43)] = 1306,
  [SMALL_STATE(44)] = 1340,
  [SMALL_STATE(45)] = 1364,
  [SMALL_STATE(46)] = 1388,
  [SMALL_STATE(47)] = 1412,
  [SMALL_STATE(48)] = 1436,
  [SMALL_STATE(49)] = 1460,
  [SMALL_STATE(50)] = 1489,
  [SMALL_STATE(51)] = 1520,
  [SMALL_STATE(52)] = 1542,
  [SMALL_STATE(53)] = 1570,
  [SMALL_STATE(54)] = 1598,
  [SMALL_STATE(55)] = 1626,
  [SMALL_STATE(56)] = 1654,
  [SMALL_STATE(57)] = 1676,
  [SMALL_STATE(58)] = 1698,
  [SMALL_STATE(59)] = 1726,
  [SMALL_STATE(60)] = 1748,
  [SMALL_STATE(61)] = 1770,
  [SMALL_STATE(62)] = 1798,
  [SMALL_STATE(63)] = 1820,
  [SMALL_STATE(64)] = 1842,
  [SMALL_STATE(65)] = 1864,
  [SMALL_STATE(66)] = 1886,
  [SMALL_STATE(67)] = 1908,
  [SMALL_STATE(68)] = 1930,
  [SMALL_STATE(69)] = 1952,
  [SMALL_STATE(70)] = 1974,
  [SMALL_STATE(71)] = 1996,
  [SMALL_STATE(72)] = 2018,
  [SMALL_STATE(73)] = 2040,
  [SMALL_STATE(74)] = 2062,
  [SMALL_STATE(75)] = 2084,
  [SMALL_STATE(76)] = 2106,
  [SMALL_STATE(77)] = 2131,
  [SMALL_STATE(78)] = 2154,
  [SMALL_STATE(79)] = 2175,
  [SMALL_STATE(80)] = 2196,
  [SMALL_STATE(81)] = 2217,
  [SMALL_STATE(82)] = 2238,
  [SMALL_STATE(83)] = 2256,
  [SMALL_STATE(84)] = 2274,
  [SMALL_STATE(85)] = 2296,
  [SMALL_STATE(86)] = 2314,
  [SMALL_STATE(87)] = 2332,
  [SMALL_STATE(88)] = 2349,
  [SMALL_STATE(89)] = 2364,
  [SMALL_STATE(90)] = 2381,
  [SMALL_STATE(91)] = 2398,
  [SMALL_STATE(92)] = 2417,
  [SMALL_STATE(93)] = 2428,
  [SMALL_STATE(94)] = 2447,
  [SMALL_STATE(95)] = 2458,
  [SMALL_STATE(96)] = 2475,
  [SMALL_STATE(97)] = 2492,
  [SMALL_STATE(98)] = 2509,
  [SMALL_STATE(99)] = 2519,
  [SMALL_STATE(100)] = 2533,
  [SMALL_STATE(101)] = 2547,
  [SMALL_STATE(102)] = 2561,
  [SMALL_STATE(103)] = 2575,
  [SMALL_STATE(104)] = 2589,
  [SMALL_STATE(105)] = 2602,
  [SMALL_STATE(106)] = 2615,
  [SMALL_STATE(107)] = 2628,
  [SMALL_STATE(108)] = 2641,
  [SMALL_STATE(109)] = 2650,
  [SMALL_STATE(110)] = 2663,
  [SMALL_STATE(111)] = 2676,
  [SMALL_STATE(112)] = 2689,
  [SMALL_STATE(113)] = 2702,
  [SMALL_STATE(114)] = 2715,
  [SMALL_STATE(115)] = 2728,
  [SMALL_STATE(116)] = 2739,
  [SMALL_STATE(117)] = 2752,
  [SMALL_STATE(118)] = 2765,
  [SMALL_STATE(119)] = 2778,
  [SMALL_STATE(120)] = 2791,
  [SMALL_STATE(121)] = 2804,
  [SMALL_STATE(122)] = 2813,
  [SMALL_STATE(123)] = 2826,
  [SMALL_STATE(124)] = 2839,
  [SMALL_STATE(125)] = 2852,
  [SMALL_STATE(126)] = 2865,
  [SMALL_STATE(127)] = 2878,
  [SMALL_STATE(128)] = 2891,
  [SMALL_STATE(129)] = 2904,
  [SMALL_STATE(130)] = 2917,
  [SMALL_STATE(131)] = 2925,
  [SMALL_STATE(132)] = 2935,
  [SMALL_STATE(133)] = 2945,
  [SMALL_STATE(134)] = 2955,
  [SMALL_STATE(135)] = 2965,
  [SMALL_STATE(136)] = 2975,
  [SMALL_STATE(137)] = 2985,
  [SMALL_STATE(138)] = 2993,
  [SMALL_STATE(139)] = 3003,
  [SMALL_STATE(140)] = 3011,
  [SMALL_STATE(141)] = 3021,
  [SMALL_STATE(142)] = 3031,
  [SMALL_STATE(143)] = 3041,
  [SMALL_STATE(144)] = 3051,
  [SMALL_STATE(145)] = 3061,
  [SMALL_STATE(146)] = 3071,
  [SMALL_STATE(147)] = 3079,
  [SMALL_STATE(148)] = 3089,
  [SMALL_STATE(149)] = 3097,
  [SMALL_STATE(150)] = 3107,
  [SMALL_STATE(151)] = 3117,
  [SMALL_STATE(152)] = 3125,
  [SMALL_STATE(153)] = 3132,
  [SMALL_STATE(154)] = 3139,
  [SMALL_STATE(155)] = 3146,
  [SMALL_STATE(156)] = 3153,
  [SMALL_STATE(157)] = 3160,
  [SMALL_STATE(158)] = 3167,
  [SMALL_STATE(159)] = 3174,
  [SMALL_STATE(160)] = 3181,
  [SMALL_STATE(161)] = 3188,
  [SMALL_STATE(162)] = 3195,
  [SMALL_STATE(163)] = 3202,
  [SMALL_STATE(164)] = 3209,
  [SMALL_STATE(165)] = 3216,
  [SMALL_STATE(166)] = 3223,
  [SMALL_STATE(167)] = 3230,
  [SMALL_STATE(168)] = 3237,
  [SMALL_STATE(169)] = 3244,
  [SMALL_STATE(170)] = 3251,
  [SMALL_STATE(171)] = 3258,
  [SMALL_STATE(172)] = 3265,
  [SMALL_STATE(173)] = 3272,
  [SMALL_STATE(174)] = 3279,
  [SMALL_STATE(175)] = 3286,
  [SMALL_STATE(176)] = 3293,
  [SMALL_STATE(177)] = 3300,
  [SMALL_STATE(178)] = 3307,
  [SMALL_STATE(179)] = 3314,
  [SMALL_STATE(180)] = 3321,
  [SMALL_STATE(181)] = 3328,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(133),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(84),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(180),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(176),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(157),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(168),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(174),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_contract_body_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_contract_body_repeat1, 2, 0, 0),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_contract_body_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_contract_body_repeat1, 2, 0, 0), SHIFT_REPEAT(174),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_contract_body_repeat1, 2, 0, 0), SHIFT_REPEAT(173),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_contract_body_repeat1, 2, 0, 0), SHIFT_REPEAT(140),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_contract_body_repeat1, 2, 0, 0), SHIFT_REPEAT(141),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_contract_body_repeat1, 2, 0, 0), SHIFT_REPEAT(142),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_user_defined_type_repeat1, 2, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_user_defined_type_repeat1, 2, 0, 0),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_user_defined_type_repeat1, 2, 0, 0), SHIFT_REPEAT(167),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_user_defined_type, 1, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_defined_type, 1, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_user_defined_type, 2, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_defined_type, 2, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_name, 1, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_type, 1, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 3, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_mutability, 1, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_mutability, 1, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 4, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 4, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_visibility, 1, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_visibility, 1, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_state_variable_declaration_repeat1, 2, 0, 0),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_state_variable_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_state_variable_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_state_variable_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mapping_type, 6, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_type, 6, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2, 0, 0),
  [174] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2, 0, 0),
  [182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma_directive, 3, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pragma_directive, 3, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract_declaration, 3, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contract_declaration, 3, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_storage_location, 1, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_storage_location, 1, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_directive, 4, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_directive, 4, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract_body, 3, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contract_body, 3, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract_declaration, 4, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contract_declaration, 4, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_directive, 6, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_directive, 6, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract_body, 2, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contract_body, 2, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier_invocation, 1, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier_invocation, 1, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_declaration, 3, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_declaration, 3, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_arguments, 2, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_arguments, 2, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_library_declaration, 3, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_library_declaration, 3, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_variable_declaration, 6, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant_variable_declaration, 6, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_declaration, 4, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_declaration, 4, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_directive, 3, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_directive, 3, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_arguments, 3, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_arguments, 3, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_directive, 5, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_directive, 5, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract_declaration, 5, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contract_declaration, 5, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_arguments, 4, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_arguments, 4, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_arguments, 5, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_arguments, 5, 0, 0),
  [273] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_constructor_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constructor_definition_repeat1, 2, 0, 0),
  [278] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_constructor_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [281] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_constructor_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5, 0, 0),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, 0, 0),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 2, 0, 0),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2, 0, 0),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fallback_definition, 3, 0, 0),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fallback_definition, 3, 0, 0),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_receive_definition, 3, 0, 0),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_receive_definition, 3, 0, 0),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor_definition, 3, 0, 0),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_definition, 3, 0, 0),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_variable_declaration, 3, 0, 0),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_variable_declaration, 3, 0, 0),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4, 0, 0),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, 0, 0),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 3, 0, 0),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3, 0, 0),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_body, 2, 0, 0),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body, 2, 0, 0),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier_invocation, 2, 0, 0),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier_invocation, 2, 0, 0),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor_definition, 4, 0, 0),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_definition, 4, 0, 0),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_receive_definition, 4, 0, 0),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_receive_definition, 4, 0, 0),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 4, 0, 0),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4, 0, 0),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fallback_definition, 4, 0, 0),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fallback_definition, 4, 0, 0),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_variable_declaration, 4, 0, 0),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_variable_declaration, 4, 0, 0),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_variable_declaration, 5, 0, 0),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_variable_declaration, 5, 0, 0),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 6, 0, 0),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, 0, 0),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 5, 0, 0),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 5, 0, 0),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_variable_declaration, 6, 0, 0),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_variable_declaration, 6, 0, 0),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_receive_definition_repeat1, 2, 0, 0),
  [366] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_receive_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [369] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_receive_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, 0, 0),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inheritance_type, 1, 0, 0),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inheritance_specifier, 3, 0, 0),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inheritance_specifier, 3, 0, 0),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3, 0, 0),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inheritance_specifier, 4, 0, 0),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inheritance_specifier, 4, 0, 0),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2, 0, 0),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_alias, 2, 0, 0),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_name, 1, 0, 0),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inheritance_specifier_repeat1, 2, 0, 0),
  [430] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inheritance_specifier_repeat1, 2, 0, 0), SHIFT_REPEAT(120),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_contract_declaration_repeat1, 2, 0, 0),
  [437] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_contract_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(126),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inheritance_specifier, 2, 0, 0),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [444] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_clause_repeat1, 2, 0, 0), SHIFT_REPEAT(138),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_clause_repeat1, 2, 0, 0),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat2, 2, 0, 0),
  [451] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat2, 2, 0, 0), SHIFT_REPEAT(105),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0),
  [462] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(107),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, 0, 0),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inheritance_type, 2, 0, 0),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [507] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [514] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_arguments_repeat1, 2, 0, 0),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, 0, 0),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_name, 2, 0, 0),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_clause, 2, 0, 0),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_clause, 3, 0, 0),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_type_definition, 2, 0, 0),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [581] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma_token, 2, 0, 1),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_clause, 5, 0, 0),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_clause, 4, 0, 0),
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
