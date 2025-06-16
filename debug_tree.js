const Parser = require('tree-sitter');
const Solidity = require('./bindings/node');
const fs = require('fs');

const parser = new Parser();
parser.setLanguage(Solidity);

try {
    const content = fs.readFileSync('./makerdao-multicall-repo/src/Multicall.t.sol', 'utf8');
    const tree = parser.parse(content);
    
    console.log('Tree S-expression (truncated):');
    console.log(tree.rootNode.toString().substring(0, 1000) + '...');
    
    // Find nodes with missing or error children
    function analyzeNode(node, depth = 0) {
        const prefix = '  '.repeat(depth);
        
        if (node.isMissing) {
            console.log(`${prefix}MISSING: ${node.type} at ${node.startPosition.row}:${node.startPosition.column}`);
        }
        
        if (node.hasError && !node.isMissing) {
            console.log(`${prefix}ERROR in ${node.type} at ${node.startPosition.row}:${node.startPosition.column}`);
            
            // Show the problematic text
            const lines = content.split('\n');
            const startLine = Math.max(0, node.startPosition.row - 1);
            const endLine = Math.min(lines.length - 1, node.endPosition.row + 1);
            console.log(`${prefix}Text around error:`);
            for (let i = startLine; i <= endLine; i++) {
                const marker = (i >= node.startPosition.row && i <= node.endPosition.row) ? '>>> ' : '    ';
                console.log(`${prefix}${marker}${i + 1}: ${lines[i]}`);
            }
            console.log();
        }
        
        for (let i = 0; i < node.childCount; i++) {
            analyzeNode(node.child(i), depth + 1);
        }
    }
    
    console.log('\nAnalyzing tree for errors and missing nodes:');
    analyzeNode(tree.rootNode);
    
} catch (error) {
    console.error('Error:', error.message);
}