const PREC = {
  COMMENT: 1,
  ASSIGN: 0,
  TERNARY: 1,
  LOGICAL_OR: 2,
  LOGICAL_AND: 3,
  EQUALITY: 4,
  RELATIONAL: 5,
  BITWISE_OR: 6,
  BITWISE_XOR: 7,
  BITWISE_AND: 8,
  SHIFT: 9,
  ADDITIVE: 10,
  MULTIPLICATIVE: 11,
  EXPONENTIAL: 12,
  UNARY: 13,
  POSTFIX: 14,
  CALL: 15,
  MEMBER: 16,
}

module.exports = grammar({
  name: 'solidity',

  extras: $ => [
    $.comment,
    /[\s\uFEFF\u2060\u200B\u00A0]/
  ],

  word: $ => $.identifier,

  conflicts: $ => [
    [$.user_defined_type, $._primary_expression],
    [$.variable_declaration_tuple],
    [$.block_statement, $.struct_literal],
    [$.call_arguments, $.tuple_literal],
    [$.user_defined_type, $.variable_declaration_tuple, $._primary_expression],
    [$.call_expression, $.struct_expression],
    [$.parenthesized_expression, $.parenthesized_type],
    [$.variable_declaration_tuple, $._primary_expression],
    [$._primary_expression, $.member_expression],
    [$._primary_expression, $.struct_expression],
    [$.user_defined_type, $.member_expression],
    [$.user_defined_type, $._primary_expression, $.struct_expression],
    [$.array_type, $.array_access],
    [$.variable_declaration_statement, $.expression_statement],
    [$.user_defined_type, $._primary_expression, $.member_expression],
  ],

  rules: {
    source_file: $ => repeat($._source_element),

    _source_element: $ => choice(
      $.pragma_directive,
      $.import_directive,
      $.contract_declaration,
      $.interface_declaration,
      $.library_declaration,
      $.constant_variable_declaration,
      $.user_defined_value_type,
      $.error_declaration,
      $.event_declaration,
      $.function_definition,
      $.using_directive,
      $.struct_declaration,
      $.enum_declaration,
      // More elements will be added as we implement them
    ),

    // Pragma directives
    pragma_directive: $ => seq(
      'pragma',
      $.pragma_token,
      ';'
    ),

    pragma_token: $ => seq(
      field('name', $.pragma_name),
      field('value', $.pragma_value)
    ),

    pragma_name: $ => /[a-zA-Z][a-zA-Z0-9_-]*/,
    pragma_value: $ => /[^;]+/,

    // Import directives
    import_directive: $ => seq(
      'import',
      choice(
        // Simple import: import "path";
        $.string_literal,
        // Import with alias: import "path" as Name;
        seq($.string_literal, $.import_alias),
        // Import star: import * as Name from "path";
        seq($.import_star, $.import_alias, 'from', $.string_literal),
        // Import clause: import {A, B} from "path";
        seq($.import_clause, 'from', $.string_literal)
      ),
      ';'
    ),

    import_star: $ => '*',

    import_clause: $ => seq(
      '{',
      commaSep($.import_name),
      '}'
    ),

    import_name: $ => seq(
      $.identifier,
      optional($.import_alias)
    ),

    import_alias: $ => seq('as', $.identifier),

    // String literals
    string_literal: $ => choice(
      seq('"', repeat(/[^"\\]|\\.|\\\r?\n/), '"'),
      seq("'", repeat(/[^'\\]|\\.|\\\r?\n/), "'")
    ),

    // Contract declarations
    contract_declaration: $ => seq(
      optional('abstract'),
      'contract',
      $.identifier,
      repeat($.inheritance_specifier),
      $.contract_body
    ),

    interface_declaration: $ => seq(
      'interface',
      $.identifier,
      repeat($.inheritance_specifier),
      $.contract_body
    ),

    library_declaration: $ => seq(
      'library',
      $.identifier,
      $.contract_body
    ),

    inheritance_specifier: $ => seq(
      'is',
      commaSep1($.inheritance_type)
    ),

    inheritance_type: $ => seq(
      $.user_defined_type,
      optional($.call_arguments)
    ),

    contract_body: $ => seq(
      '{',
      repeat($._contract_member),
      '}'
    ),

    _contract_member: $ => choice(
      $.state_variable_declaration,
      $.function_definition,
      $.constructor_definition,
      $.receive_definition,
      $.fallback_definition,
      $.modifier_definition,
      $.error_declaration,
      $.event_declaration,
      $.user_defined_value_type,
      $.using_directive,
      $.struct_declaration,
      $.enum_declaration,
      // More contract members will be added later
    ),

    // User-defined types (for inheritance and other uses)  
    user_defined_type: $ => dotSep1($.identifier),

    // Call arguments (for constructor calls in inheritance)
    call_arguments: $ => seq(
      '(',
      commaSep($._expression),
      ')'
    ),

    // State variables and constants
    state_variable_declaration: $ => seq(
      $.type_name,
      repeat(choice(
        $.visibility,
        $.state_mutability,
        $.storage_location,
        $.override_specifier
      )),
      $.identifier,
      optional(seq('=', $._expression)),
      ';'
    ),

    constant_variable_declaration: $ => seq(
      $.type_name,
      'constant',
      $.identifier,
      '=',
      $._expression,
      ';'
    ),

    // Type system
    type_name: $ => choice(
      $.primitive_type,
      prec(2, $.user_defined_type),
      $.array_type,
      prec(50, $.mapping_type)
    ),

    primitive_type: $ => choice(
      'bool',
      'string',
      prec(1, seq('address', 'payable')),
      'address',
      'bytes',
      /uint(8|16|24|32|40|48|56|64|72|80|88|96|104|112|120|128|136|144|152|160|168|176|184|192|200|208|216|224|232|240|248|256)?/,
      /int(8|16|24|32|40|48|56|64|72|80|88|96|104|112|120|128|136|144|152|160|168|176|184|192|200|208|216|224|232|240|248|256)?/,
      /bytes(1|2|3|4|5|6|7|8|9|10|11|12|13|14|15|16|17|18|19|20|21|22|23|24|25|26|27|28|29|30|31|32)/
    ),

    array_type: $ => prec(1, seq(
      $.type_name,
      '[',
      optional($._expression),
      ']'
    )),

    mapping_type: $ => seq(
      'mapping',
      '(',
      $.type_name,
      optional($.identifier),
      '=>',
      $.type_name,
      optional($.identifier),
      ')'
    ),

    // Modifiers and specifiers
    visibility: $ => choice(
      'public',
      'private',
      'internal',
      'external'
    ),

    state_mutability: $ => choice(
      'constant',
      'immutable',
      'pure',
      'view',
      'payable'
    ),

    storage_location: $ => choice(
      'memory',
      'storage',
      'calldata',
      'transient'
    ),

    // Function definitions
    function_definition: $ => seq(
      'function',
      $.identifier,
      $.parameter_list,
      repeat(choice(
        $.visibility,
        $.state_mutability,
        $.virtual_specifier,
        $.override_specifier,
        $.modifier_invocation
      )),
      optional($.return_type_definition),
      choice($.function_body, ';')
    ),

    constructor_definition: $ => seq(
      'constructor',
      $.parameter_list,
      repeat(choice(
        $.visibility,
        $.state_mutability,
        $.modifier_invocation
      )),
      $.function_body
    ),

    receive_definition: $ => seq(
      'receive',
      $.parameter_list,
      repeat(choice(
        $.visibility,
        $.state_mutability
      )),
      $.function_body
    ),

    fallback_definition: $ => seq(
      'fallback',
      optional($.parameter_list),
      repeat(choice(
        $.visibility,
        $.state_mutability
      )),
      $.function_body
    ),

    modifier_definition: $ => seq(
      'modifier',
      $.identifier,
      optional($.parameter_list),
      repeat(choice(
        $.virtual_specifier,
        $.override_specifier
      )),
      choice($.function_body, ';')
    ),

    parameter_list: $ => seq(
      '(',
      commaSep($.parameter),
      ')'
    ),

    parameter: $ => seq(
      $.type_name,
      optional($.storage_location),
      optional($.identifier)
    ),

    return_type_definition: $ => seq(
      'returns',
      $.parameter_list
    ),

    function_body: $ => seq(
      '{',
      repeat($._statement),
      '}'
    ),

    virtual_specifier: $ => 'virtual',
    override_specifier: $ => 'override',

    modifier_invocation: $ => seq(
      $.identifier,
      optional($.call_arguments)
    ),

    // User-defined value types
    user_defined_value_type: $ => seq(
      'type',
      $.identifier,
      'is',
      $.type_name,
      ';'
    ),

    // Error declarations
    error_declaration: $ => seq(
      'error',
      $.identifier,
      $.parameter_list,
      ';'
    ),

    // Event declarations
    event_declaration: $ => seq(
      'event',
      $.identifier,
      $.event_parameter_list,
      optional('anonymous'),
      ';'
    ),

    event_parameter_list: $ => seq(
      '(',
      commaSep($.event_parameter),
      ')'
    ),

    event_parameter: $ => seq(
      $.type_name,
      optional('indexed'),
      optional($.identifier)
    ),

    // Using directives
    using_directive: $ => seq(
      'using',
      choice(
        $.using_list,
        $.user_defined_type
      ),
      'for',
      choice($.type_name, '*'),
      optional('global'),
      ';'
    ),

    using_list: $ => seq(
      '{',
      commaSep1($.using_function),
      '}'
    ),

    using_function: $ => seq(
      $.identifier,
      'as',
      $.operator
    ),

    operator: $ => choice(
      '+', '-', '*', '/', '%', '**',
      '==', '!=', '<', '<=', '>', '>=',
      '&', '|', '^', '~', '<<', '>>',
      '&&', '||', '!'
    ),

    // Struct declarations
    struct_declaration: $ => seq(
      'struct',
      $.identifier,
      '{',
      repeat($.struct_member),
      '}'
    ),

    struct_member: $ => seq(
      $.type_name,
      $.identifier,
      ';'
    ),

    // Enum declarations
    enum_declaration: $ => seq(
      'enum',
      $.identifier,
      '{',
      commaSep($.identifier),
      '}'
    ),

    // Statements
    _statement: $ => choice(
      $.expression_statement,
      $.variable_declaration_statement,
      $.if_statement,
      $.for_statement,
      $.while_statement,
      $.do_while_statement,
      $.return_statement,
      $.break_statement,
      $.continue_statement,
      $.emit_statement,
      $.revert_statement,
      $.try_statement,
      $.block_statement,
      $.unchecked_block,
      $.assembly_statement,
      $.placeholder_statement,
    ),

    placeholder_statement: $ => seq('_', ';'),

    expression_statement: $ => prec(1, seq($._expression, ';')),

    variable_declaration_statement: $ => prec(3, seq(
      choice(
        seq($.variable_declaration, optional(seq('=', $._expression))),
        seq($.variable_declaration_tuple, '=', $._expression)
      ),
      ';'
    )),


    variable_declaration: $ => seq(
      $.type_name,
      optional($.storage_location),
      $.identifier
    ),

    variable_declaration_tuple: $ => seq(
      '(',
      commaSep(optional(choice($.variable_declaration, $.identifier))),
      ')'
    ),

    block_statement: $ => seq(
      '{',
      repeat($._statement),
      '}'
    ),

    unchecked_block: $ => seq(
      'unchecked',
      $.block_statement
    ),

    if_statement: $ => prec.right(seq(
      'if',
      '(',
      $._expression,
      ')',
      $._statement,
      optional(seq('else', $._statement))
    )),

    for_statement: $ => seq(
      'for',
      '(',
      choice($.variable_declaration_statement, $.expression_statement, ';'),
      choice($.expression_statement, ';'),
      optional($._expression),
      ')',
      $._statement
    ),

    while_statement: $ => seq(
      'while',
      '(',
      $._expression,
      ')',
      $._statement
    ),

    do_while_statement: $ => seq(
      'do',
      $._statement,
      'while',
      '(',
      $._expression,
      ')',
      ';'
    ),

    return_statement: $ => seq(
      'return',
      optional($._expression),
      ';'
    ),

    break_statement: $ => seq('break', ';'),
    continue_statement: $ => seq('continue', ';'),

    emit_statement: $ => seq(
      'emit',
      $.identifier,
      $.call_arguments,
      ';'
    ),

    revert_statement: $ => seq(
      'revert',
      optional($._expression),
      ';'
    ),

    try_statement: $ => seq(
      'try',
      $._expression,
      optional(seq('returns', $.parameter_list)),
      $.block_statement,
      repeat1($.catch_clause)
    ),

    catch_clause: $ => seq(
      'catch',
      optional(seq(optional($.identifier), $.parameter_list)),
      $.block_statement
    ),

    assembly_statement: $ => seq(
      'assembly',
      optional(choice(
        $.string_literal,
        seq('(', $.string_literal, ')')
      )),
      $.yul_block
    ),

    // Yul (inline assembly)
    yul_block: $ => seq(
      '{',
      repeat($._yul_statement),
      '}'
    ),

    _yul_statement: $ => choice(
      $.yul_block,
      $.yul_variable_declaration,
      $.yul_assignment,
      $.yul_function_call,
      $.yul_if_statement,
      $.yul_for_statement,
      $.yul_switch_statement,
      $.yul_function_definition,
      $.yul_label,
      $.yul_break,
      $.yul_continue,
      $.yul_leave,
      $._yul_literal
    ),

    yul_variable_declaration: $ => seq(
      'let',
      $.yul_identifier,
      optional(seq(':=', $._yul_expression))
    ),

    yul_assignment: $ => seq(
      $.yul_identifier,
      ':=',
      $._yul_expression
    ),

    yul_function_call: $ => seq(
      $.yul_identifier,
      '(',
      commaSep($._yul_expression),
      ')'
    ),

    yul_if_statement: $ => seq(
      'if',
      $._yul_expression,
      $.yul_block
    ),

    yul_for_statement: $ => seq(
      'for',
      $.yul_block,
      $._yul_expression,
      $.yul_block,
      $.yul_block
    ),

    yul_switch_statement: $ => seq(
      'switch',
      $._yul_expression,
      choice(
        seq('default', $.yul_block),
        seq(
          repeat1(seq('case', $._yul_literal, $.yul_block)),
          optional(seq('default', $.yul_block))
        )
      )
    ),

    yul_function_definition: $ => seq(
      'function',
      $.yul_identifier,
      '(',
      commaSep($.yul_identifier),
      ')',
      optional(seq('->', commaSep1($.yul_identifier))),
      $.yul_block
    ),

    yul_label: $ => seq($.yul_identifier, ':'),
    yul_break: $ => 'break',
    yul_continue: $ => 'continue',
    yul_leave: $ => 'leave',

    yul_identifier: $ => token(prec(-1, /[a-zA-Z_$][a-zA-Z0-9_$]*/)),
    _yul_expression: $ => choice(
      $.yul_identifier,
      $.yul_function_call,
      $.yul_member_access,
      $._yul_literal
    ),

    yul_member_access: $ => prec.left(PREC.MEMBER, seq(
      $.yul_identifier,
      '.',
      $.yul_identifier
    )),

    _yul_literal: $ => choice(
      $.yul_number_literal,
      $.yul_string_literal,
      $.yul_boolean_literal,
      $.yul_hex_literal
    ),

    yul_number_literal: $ => /0|([1-9][0-9]*)/,
    yul_string_literal: $ => $.string_literal,
    yul_boolean_literal: $ => choice('true', 'false'),
    yul_hex_literal: $ => /0x[0-9A-Fa-f]*/,

    // Expressions
    _expression: $ => choice(
      $.assignment_expression,
      $.augmented_assignment_expression,
      $.ternary_expression,
      $.binary_expression,
      $.unary_expression,
      $.update_expression,
      $.struct_expression,
      $.struct_literal,
      $.call_expression,
      $.member_expression,
      $.array_access,
      $.slice_access,
      $.new_expression,
      $.payable_expression,
      $.type_expression,
      $.parenthesized_expression,
      $.array_literal,
      $.tuple_literal,
      $.parenthesized_type,
      $._primary_expression
    ),

    parenthesized_type: $ => prec(-1, seq(
      '(',
      $.type_name,
      repeat1(seq(',', $.type_name)),
      optional(','),
      ')'
    )),

    tuple_literal: $ => prec(PREC.CALL + 1, seq(
      '(',
      $._expression,
      repeat1(seq(',', optional($._expression))),
      optional(','),
      ')'
    )),

    _primary_expression: $ => choice(
      $.identifier,
      $._literal,
      'this',
      'super'
    ),

    assignment_expression: $ => prec.right(PREC.ASSIGN, seq(
      $._expression,
      '=',
      $._expression
    )),

    augmented_assignment_expression: $ => prec.right(PREC.ASSIGN, seq(
      $._expression,
      choice('+=', '-=', '*=', '/=', '%=', '|=', '&=', '^=', '<<=', '>>='),
      $._expression
    )),

    ternary_expression: $ => prec.left(PREC.TERNARY, seq(
      $._expression,
      '?',
      $._expression,
      ':',
      $._expression
    )),

    binary_expression: $ => choice(
      ...[
        ['||', PREC.LOGICAL_OR],
        ['&&', PREC.LOGICAL_AND],
        ['==', PREC.EQUALITY],
        ['!=', PREC.EQUALITY],
        ['<', PREC.RELATIONAL],
        ['<=', PREC.RELATIONAL],
        ['>', PREC.RELATIONAL],
        ['>=', PREC.RELATIONAL],
        ['|', PREC.BITWISE_OR],
        ['^', PREC.BITWISE_XOR],
        ['&', PREC.BITWISE_AND],
        ['<<', PREC.SHIFT],
        ['>>', PREC.SHIFT],
        ['+', PREC.ADDITIVE],
        ['-', PREC.ADDITIVE],
        ['*', PREC.MULTIPLICATIVE],
        ['/', PREC.MULTIPLICATIVE],
        ['%', PREC.MULTIPLICATIVE],
        ['**', PREC.EXPONENTIAL],
      ].map(([operator, precedence]) =>
        prec.left(precedence, seq(
          $._expression,
          operator,
          $._expression
        ))
      )
    ),

    unary_expression: $ => prec.left(PREC.UNARY, seq(
      choice('!', '~', '-', '+', 'delete'),
      $._expression
    )),

    update_expression: $ => choice(
      prec.left(PREC.POSTFIX, seq($._expression, choice('++', '--'))),
      prec.right(PREC.UNARY, seq(choice('++', '--'), $._expression))
    ),

    call_expression: $ => prec.left(PREC.CALL, seq(
      field("function", $._expression),
      choice(
        seq(field("options", $.call_options), field("arguments", $.call_arguments)),
        field("arguments", $.call_arguments)
      )
    )),

    call_options: $ => seq(
      '{',
      commaSep1($.call_option),
      '}'
    ),

    call_option: $ => seq(
      $.identifier,
      ':',
      $._expression
    ),

    member_expression: $ => prec.dynamic(1, seq(
      field('object', choice(
        $._expression,
        $.identifier,
      )),
      '.',
      field('property', $.identifier)
    )),

    array_access: $ => prec.left(PREC.MEMBER, seq(
      $._expression,
      '[',
      optional($._expression),
      ']'
    )),

    slice_access: $ => prec.left(PREC.MEMBER, seq(
      $._expression,
      '[',
      optional($._expression),
      ':',
      optional($._expression),
      ']'
    )),


    new_expression: $ => prec.left(PREC.CALL + 1, seq(
      'new',
      $.type_name,
      optional($.call_options),
      $.call_arguments
    )),

    struct_expression: $ => prec.dynamic(1, seq(
      $.identifier,
      '(',
      '{',
      commaSep($.struct_field_assignment),
      '}',
      ')'
    )),

    struct_literal: $ => seq(
      '{',
      commaSep($.struct_field_assignment),
      '}'
    ),

    struct_field_assignment: $ => seq(
      $.identifier,
      ':',
      $._expression
    ),

    payable_expression: $ => prec(PREC.CALL + 1, seq(
      'payable',
      $.call_arguments
    )),

    type_expression: $ => seq(
      'type',
      '(',
      $.type_name,
      ')'
    ),

    parenthesized_expression: $ => prec(PREC.CALL + 1, seq(
      '(',
      $._expression,
      ')'
    )),

    array_literal: $ => seq(
      '[',
      commaSep($._expression),
      ']'
    ),

    // Literals
    _literal: $ => choice(
      $.boolean_literal,
      $.number_literal,
      $.string_literal,
      $.hex_literal,
      $.unicode_string_literal,
      $.hex_string_literal
    ),

    boolean_literal: $ => choice('true', 'false'),

    number_literal: $ => seq(
      choice(
        /\d+(_?\d+)*(\.\d+(_?\d+)*)?([eE][+-]?\d+(_?\d+)*)?/,
        /\.\d+(_?\d+)*([eE][+-]?\d+(_?\d+)*)?/
      ),
      optional(choice(
        'wei', 'gwei', 'ether',
        'seconds', 'minutes', 'hours', 'days', 'weeks', 'years'
      ))
    ),


    hex_literal: $ => /0x[0-9A-Fa-f]+/,

    unicode_string_literal: $ => seq(
      'unicode',
      choice(
        seq('"', repeat(/[^"\\]|\\.|\\\r?\n/), '"'),
        seq("'", repeat(/[^'\\]|\\.|\\\r?\n/), "'")
      )
    ),

    hex_string_literal: $ => seq(
      'hex',
      choice(
        seq('"', /[0-9A-Fa-f]*/, '"'),
        seq("'", /[0-9A-Fa-f]*/, "'")
      )
    ),

    // Comments
    comment: $ => token(prec(PREC.COMMENT, choice(
      seq('//', /.*/),
      seq(
        '/*',
        repeat(choice(
          /[^*]+/,
          seq('*', /[^/]/)
        )),
        '*/'
      )
    ))),

    // Identifier (required for word token)
    identifier: $ => /[a-zA-Z_$][a-zA-Z0-9_$]*/,
  }
});

// Helper functions
function commaSep(rule) {
  return optional(commaSep1(rule));
}

function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)), optional(','));
}

function dotSep1(rule) {
  return seq(rule, repeat(seq('.', rule)));
}