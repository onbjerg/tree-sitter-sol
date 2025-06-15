# tree-sitter-solidity

A tree-sitter grammar for Solidity, supporting versions 0.8.0 and later.

## Features

- Complete Solidity 0.8.x syntax support
- File-level declarations (events, errors, constants)
- Transient storage and blob-related functions
- Comprehensive Yul/assembly support
- Strict grammar validation

## Inspiration

This grammar was created from scratch with inspiration from [JoranHonig/tree-sitter-solidity](https://github.com/JoranHonig/tree-sitter-solidity).

## Usage

```bash
npm install tree-sitter-solidity
```

## Development

```bash
npm run generate  # Generate parser
npm run test      # Run tests
```

## License

MIT