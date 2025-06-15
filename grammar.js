const PREC = {
  COMMENT: 1,
}

module.exports = grammar({
  name: 'solidity',

  extras: $ => [
    $.comment,
    /[\s\uFEFF\u2060\u200B\u00A0]/
  ],

  word: $ => $.identifier,

  rules: {
    source_file: $ => repeat($._source_element),

    _source_element: $ => choice(
      $.pragma_directive,
      $.import_directive,
      $.contract_declaration,
      $.interface_declaration,
      $.library_declaration,
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
      // Will add contract members later
      '}'
    ),

    // User-defined types (for inheritance and other uses)
    user_defined_type: $ => dotSep1($.identifier),

    // Call arguments (for constructor calls in inheritance)
    call_arguments: $ => seq(
      '(',
      commaSep($._expression),
      ')'
    ),

    // Basic expressions (will expand later)
    _expression: $ => choice(
      $.number_literal,
      $.string_literal,
      $.identifier
    ),

    // Number literals (basic for now)
    number_literal: $ => /\d+/,

    // Comments
    comment: $ => token(prec(PREC.COMMENT, choice(
      seq('//', /[^\r\n]*/),
      seq('/*', /[^*]*\*+([^/*][^*]*\*+)*/, '/')
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