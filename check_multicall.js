const Parser = require('tree-sitter');
const Solidity = require('./bindings/node');
const fs = require('fs');

const parser = new Parser();
parser.setLanguage(Solidity);

const content = fs.readFileSync('./makerdao-multicall-repo/src/Multicall.t.sol', 'utf8');
const tree = parser.parse(content);

console.log('Has errors:', tree.rootNode.hasError);

// Find specific patterns that should work
function checkPattern(node, depth = 0) {
    if (node.type === 'variable_declaration_statement') {
        const text = node.text.split('\n')[0]; // First line only
        if (text.includes('Call[]')) {
            console.log(`\nFound Call[] declaration: "${text}"`);
            console.log('Parse tree:', node.toString().substring(0, 200) + '...');
        }
    }
    
    for (let i = 0; i < node.childCount; i++) {
        checkPattern(node.child(i), depth + 1);
    }
}

checkPattern(tree.rootNode);