const Parser = require('tree-sitter');
const Solidity = require('./bindings/node');
const fs = require('fs');

const parser = new Parser();
parser.setLanguage(Solidity);

try {
    const content = fs.readFileSync('./makerdao-multicall-repo/src/Multicall.t.sol', 'utf8');
    console.log('Parsing file: Multicall.t.sol');
    console.log('File length:', content.length, 'characters');
    
    const tree = parser.parse(content);
    
    console.log('Parse tree root:', tree.rootNode.type);
    console.log('Has errors:', tree.rootNode.hasError);
    
    if (tree.rootNode.hasError) {
        console.log('Errors found in the parse tree!');
        
        let errorCount = 0;
        
        // Find all error nodes
        function findErrors(node, depth = 0) {
            if (node.hasError) {
                if (node.type === 'ERROR') {
                    errorCount++;
                    console.log(`\n=== ERROR ${errorCount} ===`);
                    console.log(`Location: ${node.startPosition.row}:${node.startPosition.column} - ${node.endPosition.row}:${node.endPosition.column}`);
                    console.log(`Error text: "${node.text}"`);
                    
                    // Show some context
                    const lines = content.split('\n');
                    const startLine = Math.max(0, node.startPosition.row - 1);
                    const endLine = Math.min(lines.length - 1, node.endPosition.row + 1);
                    console.log(`Context:`);
                    for (let i = startLine; i <= endLine; i++) {
                        const marker = i === node.startPosition.row ? '>>> ' : '    ';
                        console.log(`${marker}${i + 1}: ${lines[i]}`);
                    }
                }
                
                for (let i = 0; i < node.childCount; i++) {
                    findErrors(node.child(i), depth + 1);
                }
            }
        }
        
        findErrors(tree.rootNode);
        
        console.log(`\nTotal errors found: ${errorCount}`);
    } else {
        console.log('No parse errors found!');
        console.log('Root node children count:', tree.rootNode.childCount);
        for (let i = 0; i < tree.rootNode.childCount; i++) {
            const child = tree.rootNode.child(i);
            console.log(`  Child ${i}: ${child.type} at ${child.startPosition.row}:${child.startPosition.column}`);
        }
    }
    
} catch (error) {
    console.error('Error reading or parsing file:', error.message);
}