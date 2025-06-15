#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 239
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 121
#define ALIAS_COUNT 0
#define TOKEN_COUNT 64
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
  anon_sym_type = 58,
  anon_sym_error = 59,
  anon_sym_event = 60,
  anon_sym_anonymous = 61,
  anon_sym_indexed = 62,
  sym_comment = 63,
  sym_source_file = 64,
  sym__source_element = 65,
  sym_pragma_directive = 66,
  sym_pragma_token = 67,
  sym_import_directive = 68,
  sym_import_clause = 69,
  sym_import_name = 70,
  sym_import_alias = 71,
  sym_string_literal = 72,
  sym_contract_declaration = 73,
  sym_interface_declaration = 74,
  sym_library_declaration = 75,
  sym_inheritance_specifier = 76,
  sym_inheritance_type = 77,
  sym_contract_body = 78,
  sym__contract_member = 79,
  sym_user_defined_type = 80,
  sym_call_arguments = 81,
  sym__expression = 82,
  sym_state_variable_declaration = 83,
  sym_constant_variable_declaration = 84,
  sym_type_name = 85,
  sym_primitive_type = 86,
  sym_array_type = 87,
  sym_mapping_type = 88,
  sym_visibility = 89,
  sym_state_mutability = 90,
  sym_storage_location = 91,
  sym_function_definition = 92,
  sym_constructor_definition = 93,
  sym_receive_definition = 94,
  sym_fallback_definition = 95,
  sym_parameter_list = 96,
  sym_parameter = 97,
  sym_return_type_definition = 98,
  sym_function_body = 99,
  sym_modifier_invocation = 100,
  sym_user_defined_value_type = 101,
  sym_error_declaration = 102,
  sym_event_declaration = 103,
  sym_event_parameter_list = 104,
  sym_event_parameter = 105,
  aux_sym_source_file_repeat1 = 106,
  aux_sym_import_clause_repeat1 = 107,
  aux_sym_string_literal_repeat1 = 108,
  aux_sym_string_literal_repeat2 = 109,
  aux_sym_contract_declaration_repeat1 = 110,
  aux_sym_inheritance_specifier_repeat1 = 111,
  aux_sym_contract_body_repeat1 = 112,
  aux_sym_user_defined_type_repeat1 = 113,
  aux_sym_call_arguments_repeat1 = 114,
  aux_sym_state_variable_declaration_repeat1 = 115,
  aux_sym_function_definition_repeat1 = 116,
  aux_sym_constructor_definition_repeat1 = 117,
  aux_sym_receive_definition_repeat1 = 118,
  aux_sym_parameter_list_repeat1 = 119,
  aux_sym_event_parameter_list_repeat1 = 120,
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
  [anon_sym_type] = "type",
  [anon_sym_error] = "error",
  [anon_sym_event] = "event",
  [anon_sym_anonymous] = "anonymous",
  [anon_sym_indexed] = "indexed",
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
  [sym_user_defined_value_type] = "user_defined_value_type",
  [sym_error_declaration] = "error_declaration",
  [sym_event_declaration] = "event_declaration",
  [sym_event_parameter_list] = "event_parameter_list",
  [sym_event_parameter] = "event_parameter",
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
  [aux_sym_event_parameter_list_repeat1] = "event_parameter_list_repeat1",
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
  [anon_sym_type] = anon_sym_type,
  [anon_sym_error] = anon_sym_error,
  [anon_sym_event] = anon_sym_event,
  [anon_sym_anonymous] = anon_sym_anonymous,
  [anon_sym_indexed] = anon_sym_indexed,
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
  [sym_user_defined_value_type] = sym_user_defined_value_type,
  [sym_error_declaration] = sym_error_declaration,
  [sym_event_declaration] = sym_event_declaration,
  [sym_event_parameter_list] = sym_event_parameter_list,
  [sym_event_parameter] = sym_event_parameter,
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
  [aux_sym_event_parameter_list_repeat1] = aux_sym_event_parameter_list_repeat1,
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
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_error] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_event] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_anonymous] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_indexed] = {
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
  [sym_user_defined_value_type] = {
    .visible = true,
    .named = true,
  },
  [sym_error_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_event_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_event_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_event_parameter] = {
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
  [aux_sym_event_parameter_list_repeat1] = {
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
  [13] = 11,
  [14] = 12,
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
  [49] = 40,
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
  [64] = 25,
  [65] = 26,
  [66] = 27,
  [67] = 15,
  [68] = 32,
  [69] = 36,
  [70] = 37,
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
  [95] = 92,
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
  [156] = 136,
  [157] = 129,
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
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 165,
  [188] = 188,
  [189] = 189,
  [190] = 163,
  [191] = 191,
  [192] = 189,
  [193] = 181,
  [194] = 179,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 196,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 221,
  [227] = 202,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 223,
  [233] = 206,
  [234] = 216,
  [235] = 235,
  [236] = 235,
  [237] = 237,
  [238] = 237,
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
        ';', 13,
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
      if (lookahead == 'n') ADVANCE(18);
      if (lookahead == 's') ADVANCE(19);
      END_STATE();
    case 2:
      if (lookahead == 'o') ADVANCE(20);
      if (lookahead == 'y') ADVANCE(21);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(22);
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 4:
      if (lookahead == 'r') ADVANCE(24);
      if (lookahead == 'v') ADVANCE(25);
      if (lookahead == 'x') ADVANCE(26);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(27);
      if (lookahead == 'r') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(29);
      END_STATE();
    case 6:
      if (lookahead == 'm') ADVANCE(30);
      if (lookahead == 'n') ADVANCE(31);
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 7:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(34);
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 9:
      if (lookahead == 'v') ADVANCE(36);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(37);
      if (lookahead == 'r') ADVANCE(38);
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 12:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 13:
      if (lookahead == 'r') ADVANCE(42);
      if (lookahead == 'y') ADVANCE(43);
      END_STATE();
    case 14:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 15:
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 16:
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(47);
      END_STATE();
    case 18:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 20:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 21:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 23:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 24:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 26:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 29:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 30:
      if (lookahead == 'm') ADVANCE(59);
      if (lookahead == 'p') ADVANCE(60);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(61);
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 33:
      if (lookahead == 'b') ADVANCE(63);
      END_STATE();
    case 34:
      if (lookahead == 'p') ADVANCE(64);
      END_STATE();
    case 35:
      if (lookahead == 'm') ADVANCE(65);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 37:
      if (lookahead == 'y') ADVANCE(67);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(68);
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 39:
      if (lookahead == 'b') ADVANCE(70);
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(72);
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 41:
      if (lookahead == 'o') ADVANCE(74);
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(76);
      END_STATE();
    case 43:
      if (lookahead == 'p') ADVANCE(77);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(79);
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 47:
      if (lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(84);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 51:
      if (lookahead == 'l') ADVANCE(86);
      END_STATE();
    case 52:
      if (lookahead == 's') ADVANCE(87);
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 53:
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 56:
      if (lookahead == 'l') ADVANCE(92);
      END_STATE();
    case 57:
      if (lookahead == 'm') ADVANCE(93);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(94);
      END_STATE();
    case 59:
      if (lookahead == 'u') ADVANCE(95);
      END_STATE();
    case 60:
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_primitive_type_token2);
      ADVANCE_MAP(
        '1', 98,
        '2', 99,
        '3', 100,
        '4', 101,
        '5', 102,
        '6', 103,
        '7', 104,
        '8', 105,
        '9', 106,
        'e', 107,
      );
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 64:
      if (lookahead == 'p') ADVANCE(109);
      END_STATE();
    case 65:
      if (lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 66:
      if (lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(112);
      END_STATE();
    case 68:
      if (lookahead == 'g') ADVANCE(113);
      END_STATE();
    case 69:
      if (lookahead == 'v') ADVANCE(114);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(115);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 73:
      if (lookahead == 'u') ADVANCE(118);
      END_STATE();
    case 74:
      if (lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(120);
      END_STATE();
    case 76:
      if (lookahead == 'n') ADVANCE(121);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 78:
      if (lookahead == 't') ADVANCE(123);
      END_STATE();
    case 79:
      if (lookahead == 'w') ADVANCE(124);
      END_STATE();
    case 80:
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 81:
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 83:
      if (lookahead == 'y') ADVANCE(128);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 85:
      if (lookahead == 's') ADVANCE(129);
      END_STATE();
    case 86:
      if (lookahead == 'd') ADVANCE(130);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 88:
      if (lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 89:
      if (lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 90:
      if (lookahead == 't') ADVANCE(134);
      END_STATE();
    case 91:
      if (lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 92:
      if (lookahead == 'b') ADVANCE(136);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 94:
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 95:
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 96:
      if (lookahead == 'r') ADVANCE(139);
      END_STATE();
    case 97:
      if (lookahead == 'x') ADVANCE(140);
      END_STATE();
    case 98:
      ADVANCE_MAP(
        '0', 141,
        '1', 142,
        '2', 143,
        '3', 144,
        '4', 145,
        '5', 146,
        '6', 147,
        '7', 148,
        '8', 149,
        '9', 150,
      );
      END_STATE();
    case 99:
      if (lookahead == '0') ADVANCE(151);
      if (lookahead == '1') ADVANCE(152);
      if (lookahead == '2') ADVANCE(153);
      if (lookahead == '3') ADVANCE(154);
      if (lookahead == '4') ADVANCE(155);
      if (lookahead == '5') ADVANCE(156);
      END_STATE();
    case 100:
      if (lookahead == '2') ADVANCE(157);
      END_STATE();
    case 101:
      if (lookahead == '0' ||
          lookahead == '8') ADVANCE(157);
      END_STATE();
    case 102:
      if (lookahead == '6') ADVANCE(157);
      END_STATE();
    case 103:
      if (lookahead == '4') ADVANCE(157);
      END_STATE();
    case 104:
      if (lookahead == '2') ADVANCE(157);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_primitive_type_token2);
      if (lookahead == '0' ||
          lookahead == '8') ADVANCE(157);
      END_STATE();
    case 106:
      if (lookahead == '6') ADVANCE(157);
      END_STATE();
    case 107:
      if (lookahead == 'r') ADVANCE(158);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(159);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(160);
      END_STATE();
    case 110:
      if (lookahead == 'r') ADVANCE(161);
      END_STATE();
    case 111:
      if (lookahead == 'r') ADVANCE(162);
      END_STATE();
    case 112:
      if (lookahead == 'b') ADVANCE(163);
      END_STATE();
    case 113:
      if (lookahead == 'm') ADVANCE(164);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(165);
      END_STATE();
    case 115:
      if (lookahead == 'i') ADVANCE(166);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_pure);
      END_STATE();
    case 117:
      if (lookahead == 'i') ADVANCE(167);
      END_STATE();
    case 118:
      if (lookahead == 'r') ADVANCE(168);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(169);
      END_STATE();
    case 120:
      if (lookahead == 'n') ADVANCE(170);
      END_STATE();
    case 121:
      if (lookahead == 's') ADVANCE(171);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_primitive_type_token1);
      ADVANCE_MAP(
        '1', 172,
        '2', 173,
        '3', 174,
        '4', 175,
        '5', 176,
        '6', 177,
        '7', 178,
        '8', 179,
        '9', 180,
      );
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_view);
      END_STATE();
    case 125:
      if (lookahead == 'u') ADVANCE(181);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(182);
      END_STATE();
    case 127:
      if (lookahead == 's') ADVANCE(183);
      END_STATE();
    case 128:
      if (lookahead == 'm') ADVANCE(184);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_bytes);
      if (lookahead == '1') ADVANCE(185);
      if (lookahead == '2') ADVANCE(186);
      if (lookahead == '3') ADVANCE(187);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(188);
      END_STATE();
    case 130:
      if (lookahead == 'a') ADVANCE(189);
      END_STATE();
    case 131:
      if (lookahead == 'a') ADVANCE(190);
      if (lookahead == 'r') ADVANCE(191);
      END_STATE();
    case 132:
      if (lookahead == 'a') ADVANCE(192);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_error);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_event);
      END_STATE();
    case 135:
      if (lookahead == 'n') ADVANCE(193);
      END_STATE();
    case 136:
      if (lookahead == 'a') ADVANCE(194);
      END_STATE();
    case 137:
      if (lookahead == 'i') ADVANCE(195);
      END_STATE();
    case 138:
      if (lookahead == 'a') ADVANCE(196);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(197);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 141:
      if (lookahead == '4') ADVANCE(157);
      END_STATE();
    case 142:
      if (lookahead == '2') ADVANCE(157);
      END_STATE();
    case 143:
      if (lookahead == '0' ||
          lookahead == '8') ADVANCE(157);
      END_STATE();
    case 144:
      if (lookahead == '6') ADVANCE(157);
      END_STATE();
    case 145:
      if (lookahead == '4') ADVANCE(157);
      END_STATE();
    case 146:
      if (lookahead == '2') ADVANCE(157);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_primitive_type_token2);
      if (lookahead == '0' ||
          lookahead == '8') ADVANCE(157);
      END_STATE();
    case 148:
      if (lookahead == '6') ADVANCE(157);
      END_STATE();
    case 149:
      if (lookahead == '4') ADVANCE(157);
      END_STATE();
    case 150:
      if (lookahead == '2') ADVANCE(157);
      END_STATE();
    case 151:
      if (lookahead == '0' ||
          lookahead == '8') ADVANCE(157);
      END_STATE();
    case 152:
      if (lookahead == '6') ADVANCE(157);
      END_STATE();
    case 153:
      if (lookahead == '4') ADVANCE(157);
      END_STATE();
    case 154:
      if (lookahead == '2') ADVANCE(157);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_primitive_type_token2);
      if (lookahead == '0' ||
          lookahead == '8') ADVANCE(157);
      END_STATE();
    case 156:
      if (lookahead == '6') ADVANCE(157);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_primitive_type_token2);
      END_STATE();
    case 158:
      if (lookahead == 'f') ADVANCE(199);
      if (lookahead == 'n') ADVANCE(200);
      END_STATE();
    case 159:
      if (lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 160:
      if (lookahead == 'n') ADVANCE(202);
      END_STATE();
    case 161:
      if (lookahead == 'y') ADVANCE(203);
      END_STATE();
    case 162:
      if (lookahead == 'i') ADVANCE(204);
      END_STATE();
    case 163:
      if (lookahead == 'l') ADVANCE(205);
      END_STATE();
    case 164:
      if (lookahead == 'a') ADVANCE(206);
      END_STATE();
    case 165:
      if (lookahead == 't') ADVANCE(207);
      END_STATE();
    case 166:
      if (lookahead == 'c') ADVANCE(208);
      END_STATE();
    case 167:
      if (lookahead == 'v') ADVANCE(209);
      END_STATE();
    case 168:
      if (lookahead == 'n') ADVANCE(210);
      END_STATE();
    case 169:
      if (lookahead == 'g') ADVANCE(211);
      END_STATE();
    case 170:
      if (lookahead == 'g') ADVANCE(212);
      END_STATE();
    case 171:
      if (lookahead == 'i') ADVANCE(213);
      END_STATE();
    case 172:
      ADVANCE_MAP(
        '0', 214,
        '1', 215,
        '2', 216,
        '3', 217,
        '4', 218,
        '5', 219,
        '6', 220,
        '7', 221,
        '8', 222,
        '9', 223,
      );
      END_STATE();
    case 173:
      if (lookahead == '0') ADVANCE(224);
      if (lookahead == '1') ADVANCE(225);
      if (lookahead == '2') ADVANCE(226);
      if (lookahead == '3') ADVANCE(227);
      if (lookahead == '4') ADVANCE(228);
      if (lookahead == '5') ADVANCE(229);
      END_STATE();
    case 174:
      if (lookahead == '2') ADVANCE(230);
      END_STATE();
    case 175:
      if (lookahead == '0' ||
          lookahead == '8') ADVANCE(230);
      END_STATE();
    case 176:
      if (lookahead == '6') ADVANCE(230);
      END_STATE();
    case 177:
      if (lookahead == '4') ADVANCE(230);
      END_STATE();
    case 178:
      if (lookahead == '2') ADVANCE(230);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_primitive_type_token1);
      if (lookahead == '0' ||
          lookahead == '8') ADVANCE(230);
      END_STATE();
    case 180:
      if (lookahead == '6') ADVANCE(230);
      END_STATE();
    case 181:
      if (lookahead == 'a') ADVANCE(231);
      END_STATE();
    case 182:
      if (lookahead == 'c') ADVANCE(232);
      END_STATE();
    case 183:
      if (lookahead == 's') ADVANCE(233);
      END_STATE();
    case 184:
      if (lookahead == 'o') ADVANCE(234);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_primitive_type_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_primitive_type_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_primitive_type_token3);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(188);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_primitive_type_token3);
      END_STATE();
    case 189:
      if (lookahead == 't') ADVANCE(235);
      END_STATE();
    case 190:
      if (lookahead == 'n') ADVANCE(236);
      END_STATE();
    case 191:
      if (lookahead == 'u') ADVANCE(237);
      END_STATE();
    case 192:
      if (lookahead == 'c') ADVANCE(238);
      END_STATE();
    case 193:
      if (lookahead == 'a') ADVANCE(239);
      END_STATE();
    case 194:
      if (lookahead == 'c') ADVANCE(240);
      END_STATE();
    case 195:
      if (lookahead == 'o') ADVANCE(241);
      END_STATE();
    case 196:
      if (lookahead == 'b') ADVANCE(242);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 198:
      if (lookahead == 'd') ADVANCE(243);
      END_STATE();
    case 199:
      if (lookahead == 'a') ADVANCE(244);
      END_STATE();
    case 200:
      if (lookahead == 'a') ADVANCE(245);
      END_STATE();
    case 201:
      if (lookahead == 'y') ADVANCE(246);
      END_STATE();
    case 202:
      if (lookahead == 'g') ADVANCE(247);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_memory);
      END_STATE();
    case 204:
      if (lookahead == 'd') ADVANCE(248);
      END_STATE();
    case 205:
      if (lookahead == 'e') ADVANCE(249);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_pragma);
      END_STATE();
    case 207:
      if (lookahead == 'e') ADVANCE(250);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 209:
      if (lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 210:
      if (lookahead == 's') ADVANCE(252);
      END_STATE();
    case 211:
      if (lookahead == 'e') ADVANCE(253);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 213:
      if (lookahead == 'e') ADVANCE(254);
      END_STATE();
    case 214:
      if (lookahead == '4') ADVANCE(230);
      END_STATE();
    case 215:
      if (lookahead == '2') ADVANCE(230);
      END_STATE();
    case 216:
      if (lookahead == '0' ||
          lookahead == '8') ADVANCE(230);
      END_STATE();
    case 217:
      if (lookahead == '6') ADVANCE(230);
      END_STATE();
    case 218:
      if (lookahead == '4') ADVANCE(230);
      END_STATE();
    case 219:
      if (lookahead == '2') ADVANCE(230);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_primitive_type_token1);
      if (lookahead == '0' ||
          lookahead == '8') ADVANCE(230);
      END_STATE();
    case 221:
      if (lookahead == '6') ADVANCE(230);
      END_STATE();
    case 222:
      if (lookahead == '4') ADVANCE(230);
      END_STATE();
    case 223:
      if (lookahead == '2') ADVANCE(230);
      END_STATE();
    case 224:
      if (lookahead == '0' ||
          lookahead == '8') ADVANCE(230);
      END_STATE();
    case 225:
      if (lookahead == '6') ADVANCE(230);
      END_STATE();
    case 226:
      if (lookahead == '4') ADVANCE(230);
      END_STATE();
    case 227:
      if (lookahead == '2') ADVANCE(230);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_primitive_type_token1);
      if (lookahead == '0' ||
          lookahead == '8') ADVANCE(230);
      END_STATE();
    case 229:
      if (lookahead == '6') ADVANCE(230);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_primitive_type_token1);
      END_STATE();
    case 231:
      if (lookahead == 'l') ADVANCE(255);
      END_STATE();
    case 232:
      if (lookahead == 't') ADVANCE(256);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_address);
      END_STATE();
    case 234:
      if (lookahead == 'u') ADVANCE(257);
      END_STATE();
    case 235:
      if (lookahead == 'a') ADVANCE(258);
      END_STATE();
    case 236:
      if (lookahead == 't') ADVANCE(259);
      END_STATE();
    case 237:
      if (lookahead == 'c') ADVANCE(260);
      END_STATE();
    case 238:
      if (lookahead == 't') ADVANCE(261);
      END_STATE();
    case 239:
      if (lookahead == 'l') ADVANCE(262);
      END_STATE();
    case 240:
      if (lookahead == 'k') ADVANCE(263);
      END_STATE();
    case 241:
      if (lookahead == 'n') ADVANCE(264);
      END_STATE();
    case 242:
      if (lookahead == 'l') ADVANCE(265);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_indexed);
      END_STATE();
    case 244:
      if (lookahead == 'c') ADVANCE(266);
      END_STATE();
    case 245:
      if (lookahead == 'l') ADVANCE(267);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_library);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_mapping);
      END_STATE();
    case 248:
      if (lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_payable);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_receive);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_returns);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_storage);
      END_STATE();
    case 254:
      if (lookahead == 'n') ADVANCE(269);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_virtual_specifier);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 257:
      if (lookahead == 's') ADVANCE(270);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_calldata);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_constant);
      END_STATE();
    case 260:
      if (lookahead == 't') ADVANCE(271);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_contract);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_external);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_fallback);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 265:
      if (lookahead == 'e') ADVANCE(272);
      END_STATE();
    case 266:
      if (lookahead == 'e') ADVANCE(273);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_internal);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_override_specifier);
      END_STATE();
    case 269:
      if (lookahead == 't') ADVANCE(274);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_anonymous);
      END_STATE();
    case 271:
      if (lookahead == 'o') ADVANCE(275);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_immutable);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_transient);
      END_STATE();
    case 275:
      if (lookahead == 'r') ADVANCE(276);
      END_STATE();
    case 276:
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
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 5},
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
  [105] = {.lex_state = 0},
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
  [119] = {.lex_state = 0},
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
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 3},
  [144] = {.lex_state = 3},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 4},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 3},
  [149] = {.lex_state = 4},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 4},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 9},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 9},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 9},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 5},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 9},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 10},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
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
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_error] = ACTIONS(1),
    [anon_sym_event] = ACTIONS(1),
    [anon_sym_anonymous] = ACTIONS(1),
    [anon_sym_indexed] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(217),
    [sym__source_element] = STATE(2),
    [sym_pragma_directive] = STATE(2),
    [sym_import_directive] = STATE(2),
    [sym_contract_declaration] = STATE(2),
    [sym_interface_declaration] = STATE(2),
    [sym_library_declaration] = STATE(2),
    [sym_user_defined_type] = STATE(24),
    [sym_constant_variable_declaration] = STATE(2),
    [sym_type_name] = STATE(175),
    [sym_primitive_type] = STATE(24),
    [sym_array_type] = STATE(24),
    [sym_mapping_type] = STATE(24),
    [sym_function_definition] = STATE(2),
    [sym_user_defined_value_type] = STATE(2),
    [sym_error_declaration] = STATE(2),
    [sym_event_declaration] = STATE(2),
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
    [anon_sym_function] = ACTIONS(25),
    [anon_sym_type] = ACTIONS(27),
    [anon_sym_error] = ACTIONS(29),
    [anon_sym_event] = ACTIONS(31),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 18,
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
      anon_sym_function,
    ACTIONS(27), 1,
      anon_sym_type,
    ACTIONS(29), 1,
      anon_sym_error,
    ACTIONS(31), 1,
      anon_sym_event,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    STATE(175), 1,
      sym_type_name,
    STATE(24), 4,
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
    STATE(3), 12,
      sym__source_element,
      sym_pragma_directive,
      sym_import_directive,
      sym_contract_declaration,
      sym_interface_declaration,
      sym_library_declaration,
      sym_constant_variable_declaration,
      sym_function_definition,
      sym_user_defined_value_type,
      sym_error_declaration,
      sym_event_declaration,
      aux_sym_source_file_repeat1,
  [75] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(40), 1,
      anon_sym_pragma,
    ACTIONS(43), 1,
      anon_sym_import,
    ACTIONS(46), 1,
      anon_sym_abstract,
    ACTIONS(49), 1,
      anon_sym_contract,
    ACTIONS(52), 1,
      anon_sym_interface,
    ACTIONS(55), 1,
      anon_sym_library,
    ACTIONS(61), 1,
      anon_sym_mapping,
    ACTIONS(64), 1,
      anon_sym_function,
    ACTIONS(67), 1,
      anon_sym_type,
    ACTIONS(70), 1,
      anon_sym_error,
    ACTIONS(73), 1,
      anon_sym_event,
    STATE(175), 1,
      sym_type_name,
    STATE(24), 4,
      sym_user_defined_type,
      sym_primitive_type,
      sym_array_type,
      sym_mapping_type,
    ACTIONS(58), 7,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_address,
      anon_sym_bytes,
      aux_sym_primitive_type_token1,
      aux_sym_primitive_type_token2,
      aux_sym_primitive_type_token3,
    STATE(3), 12,
      sym__source_element,
      sym_pragma_directive,
      sym_import_directive,
      sym_contract_declaration,
      sym_interface_declaration,
      sym_library_declaration,
      sym_constant_variable_declaration,
      sym_function_definition,
      sym_user_defined_value_type,
      sym_error_declaration,
      sym_event_declaration,
      aux_sym_source_file_repeat1,
  [150] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_mapping,
    ACTIONS(76), 1,
      anon_sym_RBRACE,
    ACTIONS(78), 1,
      anon_sym_function,
    ACTIONS(80), 1,
      anon_sym_constructor,
    ACTIONS(82), 1,
      anon_sym_receive,
    ACTIONS(84), 1,
      anon_sym_fallback,
    ACTIONS(86), 1,
      anon_sym_type,
    ACTIONS(88), 1,
      anon_sym_error,
    ACTIONS(90), 1,
      anon_sym_event,
    STATE(43), 1,
      sym_type_name,
    STATE(24), 4,
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
    STATE(6), 10,
      sym__contract_member,
      sym_state_variable_declaration,
      sym_function_definition,
      sym_constructor_definition,
      sym_receive_definition,
      sym_fallback_definition,
      sym_user_defined_value_type,
      sym_error_declaration,
      sym_event_declaration,
      aux_sym_contract_body_repeat1,
  [214] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      sym_identifier,
    ACTIONS(95), 1,
      anon_sym_RBRACE,
    ACTIONS(100), 1,
      anon_sym_mapping,
    ACTIONS(103), 1,
      anon_sym_function,
    ACTIONS(106), 1,
      anon_sym_constructor,
    ACTIONS(109), 1,
      anon_sym_receive,
    ACTIONS(112), 1,
      anon_sym_fallback,
    ACTIONS(115), 1,
      anon_sym_type,
    ACTIONS(118), 1,
      anon_sym_error,
    ACTIONS(121), 1,
      anon_sym_event,
    STATE(43), 1,
      sym_type_name,
    STATE(24), 4,
      sym_user_defined_type,
      sym_primitive_type,
      sym_array_type,
      sym_mapping_type,
    ACTIONS(97), 7,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_address,
      anon_sym_bytes,
      aux_sym_primitive_type_token1,
      aux_sym_primitive_type_token2,
      aux_sym_primitive_type_token3,
    STATE(5), 10,
      sym__contract_member,
      sym_state_variable_declaration,
      sym_function_definition,
      sym_constructor_definition,
      sym_receive_definition,
      sym_fallback_definition,
      sym_user_defined_value_type,
      sym_error_declaration,
      sym_event_declaration,
      aux_sym_contract_body_repeat1,
  [278] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_mapping,
    ACTIONS(78), 1,
      anon_sym_function,
    ACTIONS(80), 1,
      anon_sym_constructor,
    ACTIONS(82), 1,
      anon_sym_receive,
    ACTIONS(84), 1,
      anon_sym_fallback,
    ACTIONS(86), 1,
      anon_sym_type,
    ACTIONS(88), 1,
      anon_sym_error,
    ACTIONS(90), 1,
      anon_sym_event,
    ACTIONS(124), 1,
      anon_sym_RBRACE,
    STATE(43), 1,
      sym_type_name,
    STATE(24), 4,
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
    STATE(5), 10,
      sym__contract_member,
      sym_state_variable_declaration,
      sym_function_definition,
      sym_constructor_definition,
      sym_receive_definition,
      sym_fallback_definition,
      sym_user_defined_value_type,
      sym_error_declaration,
      sym_event_declaration,
      aux_sym_contract_body_repeat1,
  [342] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_DOT,
    STATE(7), 1,
      aux_sym_user_defined_type_repeat1,
    ACTIONS(128), 7,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_EQ_GT,
    ACTIONS(126), 16,
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
      anon_sym_indexed,
      sym_identifier,
  [379] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_DOT,
    STATE(9), 1,
      aux_sym_user_defined_type_repeat1,
    ACTIONS(135), 7,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_EQ_GT,
    ACTIONS(133), 16,
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
      anon_sym_indexed,
      sym_identifier,
  [416] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_DOT,
    STATE(7), 1,
      aux_sym_user_defined_type_repeat1,
    ACTIONS(141), 7,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_EQ_GT,
    ACTIONS(139), 16,
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
      anon_sym_indexed,
      sym_identifier,
  [453] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 8,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_EQ_GT,
    ACTIONS(126), 16,
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
      anon_sym_indexed,
      sym_identifier,
  [485] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      sym_identifier,
    ACTIONS(145), 1,
      anon_sym_SEMI,
    ACTIONS(147), 1,
      anon_sym_LBRACE,
    ACTIONS(153), 1,
      anon_sym_returns,
    STATE(32), 1,
      sym_function_body,
    STATE(129), 1,
      sym_return_type_definition,
    ACTIONS(155), 2,
      sym_virtual_specifier,
      sym_override_specifier,
    ACTIONS(151), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_external,
    STATE(45), 4,
      sym_visibility,
      sym_state_mutability,
      sym_modifier_invocation,
      aux_sym_function_definition_repeat1,
    ACTIONS(149), 5,
      anon_sym_constant,
      anon_sym_immutable,
      anon_sym_pure,
      anon_sym_view,
      anon_sym_payable,
  [530] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      sym_identifier,
    ACTIONS(147), 1,
      anon_sym_LBRACE,
    ACTIONS(153), 1,
      anon_sym_returns,
    ACTIONS(157), 1,
      anon_sym_SEMI,
    STATE(25), 1,
      sym_function_body,
    STATE(136), 1,
      sym_return_type_definition,
    ACTIONS(159), 2,
      sym_virtual_specifier,
      sym_override_specifier,
    ACTIONS(151), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_external,
    STATE(11), 4,
      sym_visibility,
      sym_state_mutability,
      sym_modifier_invocation,
      aux_sym_function_definition_repeat1,
    ACTIONS(149), 5,
      anon_sym_constant,
      anon_sym_immutable,
      anon_sym_pure,
      anon_sym_view,
      anon_sym_payable,
  [575] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      sym_identifier,
    ACTIONS(153), 1,
      anon_sym_returns,
    ACTIONS(161), 1,
      anon_sym_SEMI,
    ACTIONS(163), 1,
      anon_sym_LBRACE,
    STATE(68), 1,
      sym_function_body,
    STATE(157), 1,
      sym_return_type_definition,
    ACTIONS(155), 2,
      sym_virtual_specifier,
      sym_override_specifier,
    ACTIONS(151), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_external,
    STATE(45), 4,
      sym_visibility,
      sym_state_mutability,
      sym_modifier_invocation,
      aux_sym_function_definition_repeat1,
    ACTIONS(149), 5,
      anon_sym_constant,
      anon_sym_immutable,
      anon_sym_pure,
      anon_sym_view,
      anon_sym_payable,
  [620] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      sym_identifier,
    ACTIONS(153), 1,
      anon_sym_returns,
    ACTIONS(163), 1,
      anon_sym_LBRACE,
    ACTIONS(165), 1,
      anon_sym_SEMI,
    STATE(64), 1,
      sym_function_body,
    STATE(156), 1,
      sym_return_type_definition,
    ACTIONS(167), 2,
      sym_virtual_specifier,
      sym_override_specifier,
    ACTIONS(151), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_external,
    STATE(13), 4,
      sym_visibility,
      sym_state_mutability,
      sym_modifier_invocation,
      aux_sym_function_definition_repeat1,
    ACTIONS(149), 5,
      anon_sym_constant,
      anon_sym_immutable,
      anon_sym_pure,
      anon_sym_view,
      anon_sym_payable,
  [665] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      ts_builtin_sym_end,
    ACTIONS(171), 19,
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
      anon_sym_function,
      anon_sym_type,
      anon_sym_error,
      anon_sym_event,
      sym_identifier,
  [693] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_EQ_GT,
    ACTIONS(173), 15,
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
      anon_sym_indexed,
      sym_identifier,
  [721] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      ts_builtin_sym_end,
    ACTIONS(179), 19,
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
      anon_sym_function,
      anon_sym_type,
      anon_sym_error,
      anon_sym_event,
      sym_identifier,
  [749] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_EQ_GT,
    ACTIONS(181), 15,
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
      anon_sym_indexed,
      sym_identifier,
  [777] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      ts_builtin_sym_end,
    ACTIONS(187), 19,
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
      anon_sym_function,
      anon_sym_type,
      anon_sym_error,
      anon_sym_event,
      sym_identifier,
  [805] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      ts_builtin_sym_end,
    ACTIONS(191), 19,
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
      anon_sym_function,
      anon_sym_type,
      anon_sym_error,
      anon_sym_event,
      sym_identifier,
  [833] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      ts_builtin_sym_end,
    ACTIONS(195), 19,
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
      anon_sym_function,
      anon_sym_type,
      anon_sym_error,
      anon_sym_event,
      sym_identifier,
  [861] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      ts_builtin_sym_end,
    ACTIONS(199), 19,
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
      anon_sym_function,
      anon_sym_type,
      anon_sym_error,
      anon_sym_event,
      sym_identifier,
  [889] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      ts_builtin_sym_end,
    ACTIONS(203), 19,
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
      anon_sym_function,
      anon_sym_type,
      anon_sym_error,
      anon_sym_event,
      sym_identifier,
  [917] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_EQ_GT,
    ACTIONS(205), 15,
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
      anon_sym_indexed,
      sym_identifier,
  [945] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      ts_builtin_sym_end,
    ACTIONS(211), 19,
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
      anon_sym_function,
      anon_sym_type,
      anon_sym_error,
      anon_sym_event,
      sym_identifier,
  [973] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      ts_builtin_sym_end,
    ACTIONS(215), 19,
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
      anon_sym_function,
      anon_sym_type,
      anon_sym_error,
      anon_sym_event,
      sym_identifier,
  [1001] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      ts_builtin_sym_end,
    ACTIONS(219), 19,
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
      anon_sym_function,
      anon_sym_type,
      anon_sym_error,
      anon_sym_event,
      sym_identifier,
  [1029] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      ts_builtin_sym_end,
    ACTIONS(223), 19,
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
      anon_sym_function,
      anon_sym_type,
      anon_sym_error,
      anon_sym_event,
      sym_identifier,
  [1057] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_EQ_GT,
    ACTIONS(225), 15,
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
      anon_sym_indexed,
      sym_identifier,
  [1085] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      ts_builtin_sym_end,
    ACTIONS(231), 19,
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
      anon_sym_function,
      anon_sym_type,
      anon_sym_error,
      anon_sym_event,
      sym_identifier,
  [1113] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      ts_builtin_sym_end,
    ACTIONS(235), 19,
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
      anon_sym_function,
      anon_sym_type,
      anon_sym_error,
      anon_sym_event,
      sym_identifier,
  [1141] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      ts_builtin_sym_end,
    ACTIONS(239), 19,
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
      anon_sym_function,
      anon_sym_type,
      anon_sym_error,
      anon_sym_event,
      sym_identifier,
  [1169] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      ts_builtin_sym_end,
    ACTIONS(243), 19,
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
      anon_sym_function,
      anon_sym_type,
      anon_sym_error,
      anon_sym_event,
      sym_identifier,
  [1197] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      ts_builtin_sym_end,
    ACTIONS(247), 19,
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
      anon_sym_function,
      anon_sym_type,
      anon_sym_error,
      anon_sym_event,
      sym_identifier,
  [1225] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      ts_builtin_sym_end,
    ACTIONS(251), 19,
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
      anon_sym_function,
      anon_sym_type,
      anon_sym_error,
      anon_sym_event,
      sym_identifier,
  [1253] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      ts_builtin_sym_end,
    ACTIONS(255), 19,
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
      anon_sym_function,
      anon_sym_type,
      anon_sym_error,
      anon_sym_event,
      sym_identifier,
  [1281] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      ts_builtin_sym_end,
    ACTIONS(259), 19,
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
      anon_sym_function,
      anon_sym_type,
      anon_sym_error,
      anon_sym_event,
      sym_identifier,
  [1309] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      ts_builtin_sym_end,
    ACTIONS(263), 19,
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
      anon_sym_function,
      anon_sym_type,
      anon_sym_error,
      anon_sym_event,
      sym_identifier,
  [1337] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_EQ_GT,
    ACTIONS(265), 15,
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
      anon_sym_indexed,
      sym_identifier,
  [1365] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      ts_builtin_sym_end,
    ACTIONS(271), 19,
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
      anon_sym_function,
      anon_sym_type,
      anon_sym_error,
      anon_sym_event,
      sym_identifier,
  [1393] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      ts_builtin_sym_end,
    ACTIONS(275), 19,
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
      anon_sym_function,
      anon_sym_type,
      anon_sym_error,
      anon_sym_event,
      sym_identifier,
  [1421] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    ACTIONS(277), 17,
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
  [1448] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      sym_identifier,
    ACTIONS(283), 1,
      anon_sym_LBRACK,
    ACTIONS(151), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_external,
    ACTIONS(285), 4,
      anon_sym_memory,
      anon_sym_storage,
      anon_sym_calldata,
      anon_sym_transient,
    STATE(46), 4,
      sym_visibility,
      sym_state_mutability,
      sym_storage_location,
      aux_sym_state_variable_declaration_repeat1,
    ACTIONS(149), 5,
      anon_sym_constant,
      anon_sym_immutable,
      anon_sym_pure,
      anon_sym_view,
      anon_sym_payable,
  [1483] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    ACTIONS(287), 17,
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
  [1510] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      sym_identifier,
    ACTIONS(302), 1,
      anon_sym_returns,
    ACTIONS(294), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    ACTIONS(304), 2,
      sym_virtual_specifier,
      sym_override_specifier,
    ACTIONS(299), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_external,
    STATE(45), 4,
      sym_visibility,
      sym_state_mutability,
      sym_modifier_invocation,
      aux_sym_function_definition_repeat1,
    ACTIONS(296), 5,
      anon_sym_constant,
      anon_sym_immutable,
      anon_sym_pure,
      anon_sym_view,
      anon_sym_payable,
  [1547] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      sym_identifier,
    ACTIONS(151), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_external,
    ACTIONS(285), 4,
      anon_sym_memory,
      anon_sym_storage,
      anon_sym_calldata,
      anon_sym_transient,
    STATE(47), 4,
      sym_visibility,
      sym_state_mutability,
      sym_storage_location,
      aux_sym_state_variable_declaration_repeat1,
    ACTIONS(149), 5,
      anon_sym_constant,
      anon_sym_immutable,
      anon_sym_pure,
      anon_sym_view,
      anon_sym_payable,
  [1579] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      sym_identifier,
    ACTIONS(314), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_external,
    ACTIONS(317), 4,
      anon_sym_memory,
      anon_sym_storage,
      anon_sym_calldata,
      anon_sym_transient,
    STATE(47), 4,
      sym_visibility,
      sym_state_mutability,
      sym_storage_location,
      aux_sym_state_variable_declaration_repeat1,
    ACTIONS(311), 5,
      anon_sym_constant,
      anon_sym_immutable,
      anon_sym_pure,
      anon_sym_view,
      anon_sym_payable,
  [1611] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 3,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
    ACTIONS(320), 14,
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
  [1636] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_RBRACE,
    ACTIONS(271), 16,
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
      anon_sym_type,
      anon_sym_error,
      anon_sym_event,
      sym_identifier,
  [1661] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_LPAREN,
    STATE(84), 1,
      sym_call_arguments,
    ACTIONS(326), 2,
      anon_sym_SEMI,
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
  [1690] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_RBRACE,
    ACTIONS(330), 16,
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
      anon_sym_type,
      anon_sym_error,
      anon_sym_event,
      sym_identifier,
  [1715] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_RBRACE,
    ACTIONS(334), 16,
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
      anon_sym_type,
      anon_sym_error,
      anon_sym_event,
      sym_identifier,
  [1740] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_RBRACE,
    ACTIONS(338), 16,
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
      anon_sym_type,
      anon_sym_error,
      anon_sym_event,
      sym_identifier,
  [1765] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      anon_sym_RBRACE,
    ACTIONS(342), 16,
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
      anon_sym_type,
      anon_sym_error,
      anon_sym_event,
      sym_identifier,
  [1790] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 3,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
    ACTIONS(346), 14,
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
  [1815] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_RBRACE,
    ACTIONS(350), 16,
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
      anon_sym_type,
      anon_sym_error,
      anon_sym_event,
      sym_identifier,
  [1840] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_RBRACE,
    ACTIONS(354), 16,
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
      anon_sym_type,
      anon_sym_error,
      anon_sym_event,
      sym_identifier,
  [1865] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_RBRACE,
    ACTIONS(358), 16,
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
      anon_sym_type,
      anon_sym_error,
      anon_sym_event,
      sym_identifier,
  [1890] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_RBRACE,
    ACTIONS(362), 16,
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
      anon_sym_type,
      anon_sym_error,
      anon_sym_event,
      sym_identifier,
  [1915] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 3,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
    ACTIONS(366), 14,
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
  [1940] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_RBRACE,
    ACTIONS(370), 16,
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
      anon_sym_type,
      anon_sym_error,
      anon_sym_event,
      sym_identifier,
  [1965] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 3,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
    ACTIONS(374), 14,
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
  [1990] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      anon_sym_RBRACE,
    ACTIONS(378), 16,
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
      anon_sym_type,
      anon_sym_error,
      anon_sym_event,
      sym_identifier,
  [2015] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_RBRACE,
    ACTIONS(211), 16,
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
      anon_sym_type,
      anon_sym_error,
      anon_sym_event,
      sym_identifier,
  [2040] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_RBRACE,
    ACTIONS(215), 16,
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
      anon_sym_type,
      anon_sym_error,
      anon_sym_event,
      sym_identifier,
  [2065] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_RBRACE,
    ACTIONS(219), 16,
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
      anon_sym_type,
      anon_sym_error,
      anon_sym_event,
      sym_identifier,
  [2090] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_RBRACE,
    ACTIONS(171), 16,
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
      anon_sym_type,
      anon_sym_error,
      anon_sym_event,
      sym_identifier,
  [2115] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_RBRACE,
    ACTIONS(239), 16,
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
      anon_sym_type,
      anon_sym_error,
      anon_sym_event,
      sym_identifier,
  [2140] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_RBRACE,
    ACTIONS(255), 16,
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
      anon_sym_type,
      anon_sym_error,
      anon_sym_event,
      sym_identifier,
  [2165] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_RBRACE,
    ACTIONS(259), 16,
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
      anon_sym_type,
      anon_sym_error,
      anon_sym_event,
      sym_identifier,
  [2190] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_mapping,
    ACTIONS(382), 1,
      anon_sym_RPAREN,
    STATE(107), 1,
      sym_type_name,
    STATE(188), 1,
      sym_event_parameter,
    STATE(24), 4,
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
  [2224] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_mapping,
    ACTIONS(384), 1,
      anon_sym_RPAREN,
    STATE(97), 1,
      sym_type_name,
    STATE(178), 1,
      sym_parameter,
    STATE(24), 4,
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
  [2258] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      sym_identifier,
    ACTIONS(163), 1,
      anon_sym_LBRACE,
    STATE(56), 1,
      sym_function_body,
    ACTIONS(151), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_external,
    STATE(81), 4,
      sym_visibility,
      sym_state_mutability,
      sym_modifier_invocation,
      aux_sym_constructor_definition_repeat1,
    ACTIONS(149), 5,
      anon_sym_constant,
      anon_sym_immutable,
      anon_sym_pure,
      anon_sym_view,
      anon_sym_payable,
  [2290] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_mapping,
    ACTIONS(386), 1,
      anon_sym_RPAREN,
    STATE(107), 1,
      sym_type_name,
    STATE(188), 1,
      sym_event_parameter,
    STATE(24), 4,
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
  [2324] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_mapping,
    ACTIONS(388), 1,
      anon_sym_RPAREN,
    STATE(97), 1,
      sym_type_name,
    STATE(155), 1,
      sym_parameter,
    STATE(24), 4,
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
  [2358] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_mapping,
    ACTIONS(390), 1,
      anon_sym_RPAREN,
    STATE(97), 1,
      sym_type_name,
    STATE(178), 1,
      sym_parameter,
    STATE(24), 4,
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
  [2392] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      sym_identifier,
    ACTIONS(163), 1,
      anon_sym_LBRACE,
    STATE(51), 1,
      sym_function_body,
    ACTIONS(151), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_external,
    STATE(73), 4,
      sym_visibility,
      sym_state_mutability,
      sym_modifier_invocation,
      aux_sym_constructor_definition_repeat1,
    ACTIONS(149), 5,
      anon_sym_constant,
      anon_sym_immutable,
      anon_sym_pure,
      anon_sym_view,
      anon_sym_payable,
  [2424] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(392), 14,
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
  [2448] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_mapping,
    ACTIONS(396), 1,
      anon_sym_RPAREN,
    STATE(107), 1,
      sym_type_name,
    STATE(128), 1,
      sym_event_parameter,
    STATE(24), 4,
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
  [2482] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_mapping,
    STATE(97), 1,
      sym_type_name,
    STATE(178), 1,
      sym_parameter,
    STATE(24), 4,
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
  [2513] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      sym_identifier,
    ACTIONS(401), 1,
      anon_sym_LBRACE,
    ACTIONS(406), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_external,
    STATE(81), 4,
      sym_visibility,
      sym_state_mutability,
      sym_modifier_invocation,
      aux_sym_constructor_definition_repeat1,
    ACTIONS(403), 5,
      anon_sym_constant,
      anon_sym_immutable,
      anon_sym_pure,
      anon_sym_view,
      anon_sym_payable,
  [2542] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    ACTIONS(409), 13,
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
  [2565] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_mapping,
    STATE(107), 1,
      sym_type_name,
    STATE(188), 1,
      sym_event_parameter,
    STATE(24), 4,
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
  [2596] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    ACTIONS(413), 13,
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
  [2619] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    ACTIONS(417), 13,
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
  [2642] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    ACTIONS(421), 13,
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
  [2665] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    ACTIONS(425), 13,
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
  [2688] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_mapping,
    STATE(182), 1,
      sym_type_name,
    STATE(24), 4,
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
  [2716] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_LBRACE,
    STATE(53), 1,
      sym_function_body,
    STATE(93), 3,
      sym_visibility,
      sym_state_mutability,
      aux_sym_receive_definition_repeat1,
    ACTIONS(431), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_external,
    ACTIONS(429), 5,
      anon_sym_constant,
      anon_sym_immutable,
      anon_sym_pure,
      anon_sym_view,
      anon_sym_payable,
  [2744] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_mapping,
    STATE(174), 1,
      sym_type_name,
    STATE(24), 4,
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
  [2772] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_LBRACE,
    STATE(52), 1,
      sym_function_body,
    STATE(94), 3,
      sym_visibility,
      sym_state_mutability,
      aux_sym_receive_definition_repeat1,
    ACTIONS(431), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_external,
    ACTIONS(429), 5,
      anon_sym_constant,
      anon_sym_immutable,
      anon_sym_pure,
      anon_sym_view,
      anon_sym_payable,
  [2800] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_mapping,
    STATE(163), 1,
      sym_type_name,
    STATE(24), 4,
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
  [2828] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_LBRACE,
    STATE(58), 1,
      sym_function_body,
    STATE(96), 3,
      sym_visibility,
      sym_state_mutability,
      aux_sym_receive_definition_repeat1,
    ACTIONS(431), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_external,
    ACTIONS(429), 5,
      anon_sym_constant,
      anon_sym_immutable,
      anon_sym_pure,
      anon_sym_view,
      anon_sym_payable,
  [2856] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_LBRACE,
    STATE(57), 1,
      sym_function_body,
    STATE(96), 3,
      sym_visibility,
      sym_state_mutability,
      aux_sym_receive_definition_repeat1,
    ACTIONS(431), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_external,
    ACTIONS(429), 5,
      anon_sym_constant,
      anon_sym_immutable,
      anon_sym_pure,
      anon_sym_view,
      anon_sym_payable,
  [2884] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_mapping,
    STATE(190), 1,
      sym_type_name,
    STATE(24), 4,
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
  [2912] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_LBRACE,
    STATE(96), 3,
      sym_visibility,
      sym_state_mutability,
      aux_sym_receive_definition_repeat1,
    ACTIONS(438), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_external,
    ACTIONS(435), 5,
      anon_sym_constant,
      anon_sym_immutable,
      anon_sym_pure,
      anon_sym_view,
      anon_sym_payable,
  [2937] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_LBRACK,
    ACTIONS(441), 1,
      sym_identifier,
    STATE(154), 1,
      sym_storage_location,
    ACTIONS(443), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(285), 4,
      anon_sym_memory,
      anon_sym_storage,
      anon_sym_calldata,
      anon_sym_transient,
  [2960] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_DQUOTE,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_RPAREN,
    ACTIONS(445), 2,
      sym_number_literal,
      sym_identifier,
    STATE(159), 2,
      sym_string_literal,
      sym__expression,
  [2981] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_DQUOTE,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(455), 1,
      anon_sym_RPAREN,
    ACTIONS(453), 2,
      sym_number_literal,
      sym_identifier,
    STATE(137), 2,
      sym_string_literal,
      sym__expression,
  [3002] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_DQUOTE,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(457), 1,
      anon_sym_RPAREN,
    ACTIONS(445), 2,
      sym_number_literal,
      sym_identifier,
    STATE(159), 2,
      sym_string_literal,
      sym__expression,
  [3023] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_DQUOTE,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(461), 1,
      anon_sym_RBRACK,
    ACTIONS(459), 2,
      sym_number_literal,
      sym_identifier,
    STATE(211), 2,
      sym_string_literal,
      sym__expression,
  [3044] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_DQUOTE,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(463), 2,
      sym_number_literal,
      sym_identifier,
    STATE(213), 2,
      sym_string_literal,
      sym__expression,
  [3062] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_DQUOTE,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(465), 1,
      sym_import_star,
    ACTIONS(467), 1,
      anon_sym_LBRACE,
    STATE(151), 1,
      sym_string_literal,
    STATE(203), 1,
      sym_import_clause,
  [3084] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_DQUOTE,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(469), 2,
      sym_number_literal,
      sym_identifier,
    STATE(228), 2,
      sym_string_literal,
      sym__expression,
  [3102] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_DQUOTE,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(471), 2,
      sym_number_literal,
      sym_identifier,
    STATE(204), 2,
      sym_string_literal,
      sym__expression,
  [3120] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_DQUOTE,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(445), 2,
      sym_number_literal,
      sym_identifier,
    STATE(159), 2,
      sym_string_literal,
      sym__expression,
  [3138] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_LBRACK,
    ACTIONS(473), 1,
      sym_identifier,
    ACTIONS(477), 1,
      anon_sym_indexed,
    ACTIONS(475), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3155] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      anon_sym_LBRACE,
    ACTIONS(481), 1,
      anon_sym_is,
    STATE(34), 1,
      sym_contract_body,
    STATE(113), 2,
      sym_inheritance_specifier,
      aux_sym_contract_declaration_repeat1,
  [3172] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_as,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3183] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      anon_sym_LBRACE,
    ACTIONS(481), 1,
      anon_sym_is,
    STATE(20), 1,
      sym_contract_body,
    STATE(115), 2,
      sym_inheritance_specifier,
      aux_sym_contract_declaration_repeat1,
  [3200] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      anon_sym_LBRACE,
    ACTIONS(481), 1,
      anon_sym_is,
    STATE(20), 1,
      sym_contract_body,
    STATE(124), 2,
      sym_inheritance_specifier,
      aux_sym_contract_declaration_repeat1,
  [3217] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(485), 1,
      anon_sym_LBRACE,
    ACTIONS(487), 1,
      anon_sym_is,
    STATE(117), 1,
      sym_user_defined_type,
    STATE(135), 1,
      sym_inheritance_type,
  [3236] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      anon_sym_LBRACE,
    ACTIONS(481), 1,
      anon_sym_is,
    STATE(22), 1,
      sym_contract_body,
    STATE(124), 2,
      sym_inheritance_specifier,
      aux_sym_contract_declaration_repeat1,
  [3253] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(489), 1,
      anon_sym_LBRACE,
    ACTIONS(491), 1,
      anon_sym_is,
    STATE(117), 1,
      sym_user_defined_type,
    STATE(135), 1,
      sym_inheritance_type,
  [3272] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      anon_sym_LBRACE,
    ACTIONS(481), 1,
      anon_sym_is,
    STATE(31), 1,
      sym_contract_body,
    STATE(124), 2,
      sym_inheritance_specifier,
      aux_sym_contract_declaration_repeat1,
  [3289] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_as,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3300] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_LPAREN,
    STATE(153), 1,
      sym_call_arguments,
    ACTIONS(495), 3,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_is,
  [3315] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      anon_sym_LBRACE,
    ACTIONS(481), 1,
      anon_sym_is,
    STATE(28), 1,
      sym_contract_body,
    STATE(111), 2,
      sym_inheritance_specifier,
      aux_sym_contract_declaration_repeat1,
  [3332] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      anon_sym_as,
    STATE(160), 1,
      sym_import_alias,
    ACTIONS(497), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3346] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      anon_sym_COMMA,
    STATE(121), 1,
      aux_sym_inheritance_specifier_repeat1,
    ACTIONS(485), 2,
      anon_sym_LBRACE,
      anon_sym_is,
  [3360] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      anon_sym_COMMA,
    STATE(121), 1,
      aux_sym_inheritance_specifier_repeat1,
    ACTIONS(503), 2,
      anon_sym_LBRACE,
      anon_sym_is,
  [3374] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 4,
      anon_sym_SEMI,
      anon_sym_from,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3384] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_COMMA,
    STATE(120), 1,
      aux_sym_inheritance_specifier_repeat1,
    ACTIONS(510), 2,
      anon_sym_LBRACE,
      anon_sym_is,
  [3398] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      anon_sym_LBRACE,
    ACTIONS(516), 1,
      anon_sym_is,
    STATE(124), 2,
      sym_inheritance_specifier,
      aux_sym_contract_declaration_repeat1,
  [3412] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      anon_sym_COMMA,
    ACTIONS(522), 1,
      anon_sym_RPAREN,
    STATE(125), 1,
      aux_sym_parameter_list_repeat1,
  [3425] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_DQUOTE,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    STATE(197), 1,
      sym_string_literal,
  [3438] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_RPAREN,
    ACTIONS(524), 1,
      anon_sym_COMMA,
    STATE(125), 1,
      aux_sym_parameter_list_repeat1,
  [3451] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_COMMA,
    ACTIONS(528), 1,
      anon_sym_RPAREN,
    STATE(132), 1,
      aux_sym_event_parameter_list_repeat1,
  [3464] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_LBRACE,
    ACTIONS(530), 1,
      anon_sym_SEMI,
    STATE(40), 1,
      sym_function_body,
  [3477] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      sym_identifier,
    STATE(117), 1,
      sym_user_defined_type,
    STATE(123), 1,
      sym_inheritance_type,
  [3490] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      sym_identifier,
    ACTIONS(536), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3501] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      anon_sym_RPAREN,
    ACTIONS(538), 1,
      anon_sym_COMMA,
    STATE(140), 1,
      aux_sym_event_parameter_list_repeat1,
  [3514] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      sym_identifier,
    ACTIONS(542), 1,
      anon_sym_RBRACE,
    STATE(169), 1,
      sym_import_name,
  [3527] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_COMMA,
    ACTIONS(547), 1,
      anon_sym_RBRACE,
    STATE(134), 1,
      aux_sym_import_clause_repeat1,
  [3540] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 3,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_is,
  [3549] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_SEMI,
    ACTIONS(147), 1,
      anon_sym_LBRACE,
    STATE(32), 1,
      sym_function_body,
  [3562] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      anon_sym_COMMA,
    ACTIONS(551), 1,
      anon_sym_RPAREN,
    STATE(147), 1,
      aux_sym_call_arguments_repeat1,
  [3575] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      sym_identifier,
    ACTIONS(553), 1,
      anon_sym_RBRACE,
    STATE(139), 1,
      sym_import_name,
  [3588] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_COMMA,
    ACTIONS(557), 1,
      anon_sym_RBRACE,
    STATE(142), 1,
      aux_sym_import_clause_repeat1,
  [3601] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      anon_sym_COMMA,
    ACTIONS(562), 1,
      anon_sym_RPAREN,
    STATE(140), 1,
      aux_sym_event_parameter_list_repeat1,
  [3614] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_DQUOTE,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    STATE(230), 1,
      sym_string_literal,
  [3627] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 1,
      anon_sym_COMMA,
    ACTIONS(566), 1,
      anon_sym_RBRACE,
    STATE(134), 1,
      aux_sym_import_clause_repeat1,
  [3640] = 4,
    ACTIONS(568), 1,
      anon_sym_DQUOTE,
    ACTIONS(570), 1,
      aux_sym_string_literal_token1,
    ACTIONS(573), 1,
      sym_comment,
    STATE(143), 1,
      aux_sym_string_literal_repeat1,
  [3653] = 4,
    ACTIONS(573), 1,
      sym_comment,
    ACTIONS(575), 1,
      anon_sym_DQUOTE,
    ACTIONS(577), 1,
      aux_sym_string_literal_token1,
    STATE(143), 1,
      aux_sym_string_literal_repeat1,
  [3666] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      sym_identifier,
    STATE(117), 1,
      sym_user_defined_type,
    STATE(135), 1,
      sym_inheritance_type,
  [3679] = 4,
    ACTIONS(573), 1,
      sym_comment,
    ACTIONS(579), 1,
      anon_sym_SQUOTE,
    ACTIONS(581), 1,
      aux_sym_string_literal_token2,
    STATE(146), 1,
      aux_sym_string_literal_repeat2,
  [3692] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      anon_sym_RPAREN,
    ACTIONS(584), 1,
      anon_sym_COMMA,
    STATE(150), 1,
      aux_sym_call_arguments_repeat1,
  [3705] = 4,
    ACTIONS(573), 1,
      sym_comment,
    ACTIONS(586), 1,
      anon_sym_DQUOTE,
    ACTIONS(588), 1,
      aux_sym_string_literal_token1,
    STATE(144), 1,
      aux_sym_string_literal_repeat1,
  [3718] = 4,
    ACTIONS(573), 1,
      sym_comment,
    ACTIONS(586), 1,
      anon_sym_SQUOTE,
    ACTIONS(590), 1,
      aux_sym_string_literal_token2,
    STATE(152), 1,
      aux_sym_string_literal_repeat2,
  [3731] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      anon_sym_COMMA,
    ACTIONS(595), 1,
      anon_sym_RPAREN,
    STATE(150), 1,
      aux_sym_call_arguments_repeat1,
  [3744] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      anon_sym_as,
    ACTIONS(597), 1,
      anon_sym_SEMI,
    STATE(222), 1,
      sym_import_alias,
  [3757] = 4,
    ACTIONS(573), 1,
      sym_comment,
    ACTIONS(575), 1,
      anon_sym_SQUOTE,
    ACTIONS(599), 1,
      aux_sym_string_literal_token2,
    STATE(146), 1,
      aux_sym_string_literal_repeat2,
  [3770] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 3,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_is,
  [3779] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      sym_identifier,
    ACTIONS(605), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3790] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_COMMA,
    ACTIONS(609), 1,
      anon_sym_RPAREN,
    STATE(127), 1,
      aux_sym_parameter_list_repeat1,
  [3803] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_SEMI,
    ACTIONS(163), 1,
      anon_sym_LBRACE,
    STATE(68), 1,
      sym_function_body,
  [3816] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_LBRACE,
    ACTIONS(611), 1,
      anon_sym_SEMI,
    STATE(49), 1,
      sym_function_body,
  [3829] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      sym_identifier,
    ACTIONS(566), 1,
      anon_sym_RBRACE,
    STATE(169), 1,
      sym_import_name,
  [3842] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3850] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3858] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_LPAREN,
    STATE(167), 1,
      sym_parameter_list,
  [3868] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      sym_pragma_name,
    STATE(201), 1,
      sym_pragma_token,
  [3878] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_LBRACK,
    ACTIONS(619), 1,
      anon_sym_SEMI,
  [3888] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      anon_sym_SEMI,
    ACTIONS(623), 1,
      anon_sym_EQ,
  [3898] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      anon_sym_SEMI,
    ACTIONS(627), 1,
      anon_sym_anonymous,
  [3908] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 2,
      anon_sym_SEMI,
      anon_sym_anonymous,
  [3916] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [3924] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      anon_sym_SEMI,
    ACTIONS(635), 1,
      anon_sym_EQ,
  [3934] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3942] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      anon_sym_as,
    STATE(209), 1,
      sym_import_alias,
  [3952] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 2,
      anon_sym_SEMI,
      anon_sym_anonymous,
  [3960] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 2,
      anon_sym_SEMI,
      anon_sym_anonymous,
  [3968] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_LPAREN,
    STATE(77), 1,
      sym_parameter_list,
  [3978] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_LBRACK,
    ACTIONS(641), 1,
      anon_sym_EQ_GT,
  [3988] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_LBRACK,
    ACTIONS(643), 1,
      anon_sym_constant,
  [3998] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4006] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_LPAREN,
    STATE(89), 1,
      sym_parameter_list,
  [4016] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4024] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 1,
      anon_sym_LPAREN,
    STATE(165), 1,
      sym_event_parameter_list,
  [4034] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4042] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_LPAREN,
    STATE(226), 1,
      sym_parameter_list,
  [4052] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_LBRACK,
    ACTIONS(649), 1,
      anon_sym_RPAREN,
  [4062] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4070] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(651), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4078] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      anon_sym_LBRACE,
    STATE(35), 1,
      sym_contract_body,
  [4088] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(653), 2,
      anon_sym_SEMI,
      anon_sym_anonymous,
  [4096] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 1,
      anon_sym_SEMI,
    ACTIONS(657), 1,
      anon_sym_anonymous,
  [4106] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4114] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      sym_parameter_list,
  [4124] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_LBRACK,
    ACTIONS(659), 1,
      anon_sym_SEMI,
  [4134] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      sym_identifier,
    STATE(169), 1,
      sym_import_name,
  [4144] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_LPAREN,
    STATE(14), 1,
      sym_parameter_list,
  [4154] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_LPAREN,
    STATE(221), 1,
      sym_parameter_list,
  [4164] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 1,
      anon_sym_LPAREN,
    STATE(187), 1,
      sym_event_parameter_list,
  [4174] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_LPAREN,
    STATE(91), 1,
      sym_parameter_list,
  [4184] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 1,
      sym_identifier,
  [4191] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 1,
      anon_sym_SEMI,
  [4198] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 1,
      sym_identifier,
  [4205] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 1,
      sym_identifier,
  [4212] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(669), 1,
      sym_identifier,
  [4219] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 1,
      anon_sym_SEMI,
  [4226] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 1,
      anon_sym_SEMI,
  [4233] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 1,
      anon_sym_from,
  [4240] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 1,
      anon_sym_SEMI,
  [4247] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 1,
      anon_sym_SEMI,
  [4254] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(681), 1,
      sym_identifier,
  [4261] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(683), 1,
      anon_sym_EQ,
  [4268] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(685), 1,
      sym_identifier,
  [4275] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(687), 1,
      anon_sym_from,
  [4282] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(689), 1,
      anon_sym_from,
  [4289] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 1,
      anon_sym_RBRACK,
  [4296] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(693), 1,
      sym_identifier,
  [4303] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(695), 1,
      anon_sym_SEMI,
  [4310] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(697), 1,
      sym_identifier,
  [4317] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      anon_sym_from,
  [4324] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      sym_identifier,
  [4331] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(703), 1,
      ts_builtin_sym_end,
  [4338] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 1,
      anon_sym_LPAREN,
  [4345] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(707), 1,
      sym_identifier,
  [4352] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 1,
      anon_sym_contract,
  [4359] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(711), 1,
      anon_sym_SEMI,
  [4366] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(713), 1,
      anon_sym_SEMI,
  [4373] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(715), 1,
      anon_sym_RBRACE,
  [4380] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(717), 1,
      anon_sym_from,
  [4387] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      sym_identifier,
  [4394] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(721), 1,
      anon_sym_SEMI,
  [4401] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(723), 1,
      anon_sym_SEMI,
  [4408] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 1,
      anon_sym_SEMI,
  [4415] = 2,
    ACTIONS(573), 1,
      sym_comment,
    ACTIONS(727), 1,
      sym_pragma_value,
  [4422] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 1,
      anon_sym_SEMI,
  [4429] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(731), 1,
      anon_sym_from,
  [4436] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 1,
      anon_sym_RBRACE,
  [4443] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(735), 1,
      sym_identifier,
  [4450] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(737), 1,
      sym_identifier,
  [4457] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(739), 1,
      anon_sym_is,
  [4464] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 1,
      anon_sym_is,
  [4471] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(743), 1,
      sym_identifier,
  [4478] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(745), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 75,
  [SMALL_STATE(4)] = 150,
  [SMALL_STATE(5)] = 214,
  [SMALL_STATE(6)] = 278,
  [SMALL_STATE(7)] = 342,
  [SMALL_STATE(8)] = 379,
  [SMALL_STATE(9)] = 416,
  [SMALL_STATE(10)] = 453,
  [SMALL_STATE(11)] = 485,
  [SMALL_STATE(12)] = 530,
  [SMALL_STATE(13)] = 575,
  [SMALL_STATE(14)] = 620,
  [SMALL_STATE(15)] = 665,
  [SMALL_STATE(16)] = 693,
  [SMALL_STATE(17)] = 721,
  [SMALL_STATE(18)] = 749,
  [SMALL_STATE(19)] = 777,
  [SMALL_STATE(20)] = 805,
  [SMALL_STATE(21)] = 833,
  [SMALL_STATE(22)] = 861,
  [SMALL_STATE(23)] = 889,
  [SMALL_STATE(24)] = 917,
  [SMALL_STATE(25)] = 945,
  [SMALL_STATE(26)] = 973,
  [SMALL_STATE(27)] = 1001,
  [SMALL_STATE(28)] = 1029,
  [SMALL_STATE(29)] = 1057,
  [SMALL_STATE(30)] = 1085,
  [SMALL_STATE(31)] = 1113,
  [SMALL_STATE(32)] = 1141,
  [SMALL_STATE(33)] = 1169,
  [SMALL_STATE(34)] = 1197,
  [SMALL_STATE(35)] = 1225,
  [SMALL_STATE(36)] = 1253,
  [SMALL_STATE(37)] = 1281,
  [SMALL_STATE(38)] = 1309,
  [SMALL_STATE(39)] = 1337,
  [SMALL_STATE(40)] = 1365,
  [SMALL_STATE(41)] = 1393,
  [SMALL_STATE(42)] = 1421,
  [SMALL_STATE(43)] = 1448,
  [SMALL_STATE(44)] = 1483,
  [SMALL_STATE(45)] = 1510,
  [SMALL_STATE(46)] = 1547,
  [SMALL_STATE(47)] = 1579,
  [SMALL_STATE(48)] = 1611,
  [SMALL_STATE(49)] = 1636,
  [SMALL_STATE(50)] = 1661,
  [SMALL_STATE(51)] = 1690,
  [SMALL_STATE(52)] = 1715,
  [SMALL_STATE(53)] = 1740,
  [SMALL_STATE(54)] = 1765,
  [SMALL_STATE(55)] = 1790,
  [SMALL_STATE(56)] = 1815,
  [SMALL_STATE(57)] = 1840,
  [SMALL_STATE(58)] = 1865,
  [SMALL_STATE(59)] = 1890,
  [SMALL_STATE(60)] = 1915,
  [SMALL_STATE(61)] = 1940,
  [SMALL_STATE(62)] = 1965,
  [SMALL_STATE(63)] = 1990,
  [SMALL_STATE(64)] = 2015,
  [SMALL_STATE(65)] = 2040,
  [SMALL_STATE(66)] = 2065,
  [SMALL_STATE(67)] = 2090,
  [SMALL_STATE(68)] = 2115,
  [SMALL_STATE(69)] = 2140,
  [SMALL_STATE(70)] = 2165,
  [SMALL_STATE(71)] = 2190,
  [SMALL_STATE(72)] = 2224,
  [SMALL_STATE(73)] = 2258,
  [SMALL_STATE(74)] = 2290,
  [SMALL_STATE(75)] = 2324,
  [SMALL_STATE(76)] = 2358,
  [SMALL_STATE(77)] = 2392,
  [SMALL_STATE(78)] = 2424,
  [SMALL_STATE(79)] = 2448,
  [SMALL_STATE(80)] = 2482,
  [SMALL_STATE(81)] = 2513,
  [SMALL_STATE(82)] = 2542,
  [SMALL_STATE(83)] = 2565,
  [SMALL_STATE(84)] = 2596,
  [SMALL_STATE(85)] = 2619,
  [SMALL_STATE(86)] = 2642,
  [SMALL_STATE(87)] = 2665,
  [SMALL_STATE(88)] = 2688,
  [SMALL_STATE(89)] = 2716,
  [SMALL_STATE(90)] = 2744,
  [SMALL_STATE(91)] = 2772,
  [SMALL_STATE(92)] = 2800,
  [SMALL_STATE(93)] = 2828,
  [SMALL_STATE(94)] = 2856,
  [SMALL_STATE(95)] = 2884,
  [SMALL_STATE(96)] = 2912,
  [SMALL_STATE(97)] = 2937,
  [SMALL_STATE(98)] = 2960,
  [SMALL_STATE(99)] = 2981,
  [SMALL_STATE(100)] = 3002,
  [SMALL_STATE(101)] = 3023,
  [SMALL_STATE(102)] = 3044,
  [SMALL_STATE(103)] = 3062,
  [SMALL_STATE(104)] = 3084,
  [SMALL_STATE(105)] = 3102,
  [SMALL_STATE(106)] = 3120,
  [SMALL_STATE(107)] = 3138,
  [SMALL_STATE(108)] = 3155,
  [SMALL_STATE(109)] = 3172,
  [SMALL_STATE(110)] = 3183,
  [SMALL_STATE(111)] = 3200,
  [SMALL_STATE(112)] = 3217,
  [SMALL_STATE(113)] = 3236,
  [SMALL_STATE(114)] = 3253,
  [SMALL_STATE(115)] = 3272,
  [SMALL_STATE(116)] = 3289,
  [SMALL_STATE(117)] = 3300,
  [SMALL_STATE(118)] = 3315,
  [SMALL_STATE(119)] = 3332,
  [SMALL_STATE(120)] = 3346,
  [SMALL_STATE(121)] = 3360,
  [SMALL_STATE(122)] = 3374,
  [SMALL_STATE(123)] = 3384,
  [SMALL_STATE(124)] = 3398,
  [SMALL_STATE(125)] = 3412,
  [SMALL_STATE(126)] = 3425,
  [SMALL_STATE(127)] = 3438,
  [SMALL_STATE(128)] = 3451,
  [SMALL_STATE(129)] = 3464,
  [SMALL_STATE(130)] = 3477,
  [SMALL_STATE(131)] = 3490,
  [SMALL_STATE(132)] = 3501,
  [SMALL_STATE(133)] = 3514,
  [SMALL_STATE(134)] = 3527,
  [SMALL_STATE(135)] = 3540,
  [SMALL_STATE(136)] = 3549,
  [SMALL_STATE(137)] = 3562,
  [SMALL_STATE(138)] = 3575,
  [SMALL_STATE(139)] = 3588,
  [SMALL_STATE(140)] = 3601,
  [SMALL_STATE(141)] = 3614,
  [SMALL_STATE(142)] = 3627,
  [SMALL_STATE(143)] = 3640,
  [SMALL_STATE(144)] = 3653,
  [SMALL_STATE(145)] = 3666,
  [SMALL_STATE(146)] = 3679,
  [SMALL_STATE(147)] = 3692,
  [SMALL_STATE(148)] = 3705,
  [SMALL_STATE(149)] = 3718,
  [SMALL_STATE(150)] = 3731,
  [SMALL_STATE(151)] = 3744,
  [SMALL_STATE(152)] = 3757,
  [SMALL_STATE(153)] = 3770,
  [SMALL_STATE(154)] = 3779,
  [SMALL_STATE(155)] = 3790,
  [SMALL_STATE(156)] = 3803,
  [SMALL_STATE(157)] = 3816,
  [SMALL_STATE(158)] = 3829,
  [SMALL_STATE(159)] = 3842,
  [SMALL_STATE(160)] = 3850,
  [SMALL_STATE(161)] = 3858,
  [SMALL_STATE(162)] = 3868,
  [SMALL_STATE(163)] = 3878,
  [SMALL_STATE(164)] = 3888,
  [SMALL_STATE(165)] = 3898,
  [SMALL_STATE(166)] = 3908,
  [SMALL_STATE(167)] = 3916,
  [SMALL_STATE(168)] = 3924,
  [SMALL_STATE(169)] = 3934,
  [SMALL_STATE(170)] = 3942,
  [SMALL_STATE(171)] = 3952,
  [SMALL_STATE(172)] = 3960,
  [SMALL_STATE(173)] = 3968,
  [SMALL_STATE(174)] = 3978,
  [SMALL_STATE(175)] = 3988,
  [SMALL_STATE(176)] = 3998,
  [SMALL_STATE(177)] = 4006,
  [SMALL_STATE(178)] = 4016,
  [SMALL_STATE(179)] = 4024,
  [SMALL_STATE(180)] = 4034,
  [SMALL_STATE(181)] = 4042,
  [SMALL_STATE(182)] = 4052,
  [SMALL_STATE(183)] = 4062,
  [SMALL_STATE(184)] = 4070,
  [SMALL_STATE(185)] = 4078,
  [SMALL_STATE(186)] = 4088,
  [SMALL_STATE(187)] = 4096,
  [SMALL_STATE(188)] = 4106,
  [SMALL_STATE(189)] = 4114,
  [SMALL_STATE(190)] = 4124,
  [SMALL_STATE(191)] = 4134,
  [SMALL_STATE(192)] = 4144,
  [SMALL_STATE(193)] = 4154,
  [SMALL_STATE(194)] = 4164,
  [SMALL_STATE(195)] = 4174,
  [SMALL_STATE(196)] = 4184,
  [SMALL_STATE(197)] = 4191,
  [SMALL_STATE(198)] = 4198,
  [SMALL_STATE(199)] = 4205,
  [SMALL_STATE(200)] = 4212,
  [SMALL_STATE(201)] = 4219,
  [SMALL_STATE(202)] = 4226,
  [SMALL_STATE(203)] = 4233,
  [SMALL_STATE(204)] = 4240,
  [SMALL_STATE(205)] = 4247,
  [SMALL_STATE(206)] = 4254,
  [SMALL_STATE(207)] = 4261,
  [SMALL_STATE(208)] = 4268,
  [SMALL_STATE(209)] = 4275,
  [SMALL_STATE(210)] = 4282,
  [SMALL_STATE(211)] = 4289,
  [SMALL_STATE(212)] = 4296,
  [SMALL_STATE(213)] = 4303,
  [SMALL_STATE(214)] = 4310,
  [SMALL_STATE(215)] = 4317,
  [SMALL_STATE(216)] = 4324,
  [SMALL_STATE(217)] = 4331,
  [SMALL_STATE(218)] = 4338,
  [SMALL_STATE(219)] = 4345,
  [SMALL_STATE(220)] = 4352,
  [SMALL_STATE(221)] = 4359,
  [SMALL_STATE(222)] = 4366,
  [SMALL_STATE(223)] = 4373,
  [SMALL_STATE(224)] = 4380,
  [SMALL_STATE(225)] = 4387,
  [SMALL_STATE(226)] = 4394,
  [SMALL_STATE(227)] = 4401,
  [SMALL_STATE(228)] = 4408,
  [SMALL_STATE(229)] = 4415,
  [SMALL_STATE(230)] = 4422,
  [SMALL_STATE(231)] = 4429,
  [SMALL_STATE(232)] = 4436,
  [SMALL_STATE(233)] = 4443,
  [SMALL_STATE(234)] = 4450,
  [SMALL_STATE(235)] = 4457,
  [SMALL_STATE(236)] = 4464,
  [SMALL_STATE(237)] = 4471,
  [SMALL_STATE(238)] = 4478,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(162),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(103),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(220),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(225),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(219),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(214),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(218),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(206),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(238),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(216),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(200),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_contract_body_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_contract_body_repeat1, 2, 0, 0),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_contract_body_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_contract_body_repeat1, 2, 0, 0), SHIFT_REPEAT(218),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_contract_body_repeat1, 2, 0, 0), SHIFT_REPEAT(233),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_contract_body_repeat1, 2, 0, 0), SHIFT_REPEAT(173),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_contract_body_repeat1, 2, 0, 0), SHIFT_REPEAT(195),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_contract_body_repeat1, 2, 0, 0), SHIFT_REPEAT(177),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_contract_body_repeat1, 2, 0, 0), SHIFT_REPEAT(237),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_contract_body_repeat1, 2, 0, 0), SHIFT_REPEAT(234),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_contract_body_repeat1, 2, 0, 0), SHIFT_REPEAT(196),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_user_defined_type_repeat1, 2, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_user_defined_type_repeat1, 2, 0, 0),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_user_defined_type_repeat1, 2, 0, 0), SHIFT_REPEAT(198),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_user_defined_type, 1, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_defined_type, 1, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_user_defined_type, 2, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_defined_type, 2, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body, 2, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_body, 2, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_type, 1, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma_directive, 3, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pragma_directive, 3, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 3, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_directive, 4, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_directive, 4, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract_declaration, 4, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contract_declaration, 4, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract_body, 2, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contract_body, 2, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_declaration, 4, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_declaration, 4, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_directive, 3, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_directive, 3, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_name, 1, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_error_declaration, 4, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_error_declaration, 4, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_declaration, 4, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_event_declaration, 4, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract_declaration, 3, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contract_declaration, 3, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 4, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 4, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_directive, 5, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_directive, 5, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract_declaration, 5, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contract_declaration, 5, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract_body, 3, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contract_body, 3, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_declaration, 3, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_declaration, 3, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_library_declaration, 3, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_library_declaration, 3, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_defined_value_type, 5, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_user_defined_value_type, 5, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_declaration, 5, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_event_declaration, 5, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_directive, 6, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_directive, 6, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mapping_type, 6, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_type, 6, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 6, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_variable_declaration, 6, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant_variable_declaration, 6, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_mutability, 1, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_mutability, 1, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_visibility, 1, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_visibility, 1, 0, 0),
  [291] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2, 0, 0),
  [296] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [299] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2, 0, 0),
  [304] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_state_variable_declaration_repeat1, 2, 0, 0),
  [311] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_state_variable_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [314] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_state_variable_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [317] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_state_variable_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_arguments, 5, 0, 0),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_arguments, 5, 0, 0),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier_invocation, 1, 0, 0),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier_invocation, 1, 0, 0),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor_definition, 3, 0, 0),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_definition, 3, 0, 0),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_receive_definition, 3, 0, 0),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_receive_definition, 3, 0, 0),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fallback_definition, 3, 0, 0),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fallback_definition, 3, 0, 0),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_variable_declaration, 3, 0, 0),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_variable_declaration, 3, 0, 0),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_arguments, 2, 0, 0),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_arguments, 2, 0, 0),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor_definition, 4, 0, 0),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_definition, 4, 0, 0),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_receive_definition, 4, 0, 0),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_receive_definition, 4, 0, 0),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fallback_definition, 4, 0, 0),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fallback_definition, 4, 0, 0),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_variable_declaration, 4, 0, 0),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_variable_declaration, 4, 0, 0),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_arguments, 3, 0, 0),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_arguments, 3, 0, 0),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_variable_declaration, 5, 0, 0),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_variable_declaration, 5, 0, 0),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_arguments, 4, 0, 0),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_arguments, 4, 0, 0),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_variable_declaration, 6, 0, 0),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_variable_declaration, 6, 0, 0),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_storage_location, 1, 0, 0),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_storage_location, 1, 0, 0),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [398] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_constructor_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constructor_definition_repeat1, 2, 0, 0),
  [403] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_constructor_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [406] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_constructor_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 5, 0, 0),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 5, 0, 0),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier_invocation, 2, 0, 0),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier_invocation, 2, 0, 0),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 2, 0, 0),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2, 0, 0),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 3, 0, 0),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3, 0, 0),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 4, 0, 0),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4, 0, 0),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_receive_definition_repeat1, 2, 0, 0),
  [435] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_receive_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [438] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_receive_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, 0, 0),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_parameter, 1, 0, 0),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2, 0, 0),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inheritance_specifier, 3, 0, 0),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inheritance_specifier, 3, 0, 0),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inheritance_specifier, 4, 0, 0),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inheritance_specifier, 4, 0, 0),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3, 0, 0),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inheritance_type, 1, 0, 0),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_name, 1, 0, 0),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inheritance_specifier_repeat1, 2, 0, 0),
  [505] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inheritance_specifier_repeat1, 2, 0, 0), SHIFT_REPEAT(145),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_alias, 2, 0, 0),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inheritance_specifier, 2, 0, 0),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_contract_declaration_repeat1, 2, 0, 0),
  [516] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_contract_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(130),
  [519] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_parameter, 2, 0, 0),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [544] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_clause_repeat1, 2, 0, 0), SHIFT_REPEAT(191),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_clause_repeat1, 2, 0, 0),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [559] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_event_parameter_list_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_event_parameter_list_repeat1, 2, 0, 0),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [568] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0),
  [570] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(143),
  [573] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat2, 2, 0, 0),
  [581] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat2, 2, 0, 0), SHIFT_REPEAT(146),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [586] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [588] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [590] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [592] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(106),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_arguments_repeat1, 2, 0, 0),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inheritance_type, 2, 0, 0),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, 0, 0),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_name, 2, 0, 0),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_parameter_list, 3, 0, 0),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_type_definition, 2, 0, 0),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_parameter_list, 5, 0, 0),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_parameter_list, 2, 0, 0),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, 0, 0),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_parameter, 3, 0, 0),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_parameter_list, 4, 0, 0),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma_token, 2, 0, 1),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_clause, 2, 0, 0),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_clause, 5, 0, 0),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [703] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_clause, 3, 0, 0),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [727] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_clause, 4, 0, 0),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
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
