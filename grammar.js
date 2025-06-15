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

    // Comments
    comment: $ => token(prec(PREC.COMMENT, choice(
      seq('//', /[^\r\n]*/),
      seq('/*', /[^*]*\*+([^/*][^*]*\*+)*/, '/')
    ))),

    // Identifier (required for word token)
    identifier: $ => /[a-zA-Z_$][a-zA-Z0-9_$]*/,
  }
});