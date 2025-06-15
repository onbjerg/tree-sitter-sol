#!/usr/bin/env node

const Parser = require('tree-sitter');
const Solidity = require('./');
const fs = require('fs');
const path = require('path');

const parser = new Parser();
parser.setLanguage(Solidity);

const v4CorePath = '/Users/onbjerg/Projects/v4-core';

function findSolidityFiles(dir) {
    let files = [];
    const items = fs.readdirSync(dir);
    
    for (const item of items) {
        const fullPath = path.join(dir, item);
        const stat = fs.statSync(fullPath);
        
        if (stat.isDirectory()) {
            files = files.concat(findSolidityFiles(fullPath));
        } else if (path.extname(item) === '.sol') {
            files.push(fullPath);
        }
    }
    
    return files;
}

function checkForErrors(node, filePath) {
    const errors = [];
    
    function traverse(node) {
        if (node.type === 'ERROR') {
            errors.push({
                type: 'ERROR',
                startPosition: node.startPosition,
                endPosition: node.endPosition,
                text: node.text
            });
        }
        
        if (node.isMissing) {
            errors.push({
                type: 'MISSING',
                startPosition: node.startPosition,
                endPosition: node.endPosition,
                text: node.text
            });
        }
        
        for (const child of node.children) {
            traverse(child);
        }
    }
    
    traverse(node);
    return errors;
}

const solidityFiles = findSolidityFiles(v4CorePath);
console.log(`Found ${solidityFiles.length} Solidity files`);

let totalErrors = 0;
let filesWithErrors = 0;

for (const filePath of solidityFiles) {
    try {
        const content = fs.readFileSync(filePath, 'utf8');
        const tree = parser.parse(content);
        const errors = checkForErrors(tree.rootNode, filePath);
        
        if (errors.length > 0) {
            filesWithErrors++;
            totalErrors += errors.length;
            console.log(`\n❌ ${path.relative(v4CorePath, filePath)} (${errors.length} errors)`);
            
            // Show first few errors
            for (let i = 0; i < Math.min(3, errors.length); i++) {
                const error = errors[i];
                const line = error.startPosition.row + 1;
                const col = error.startPosition.column + 1;
                console.log(`   Line ${line}:${col} - ${error.type}: ${error.text.substring(0, 50)}...`);
            }
            
            if (errors.length > 3) {
                console.log(`   ... and ${errors.length - 3} more errors`);
            }
        } else {
            console.log(`✅ ${path.relative(v4CorePath, filePath)}`);
        }
    } catch (e) {
        console.log(`💥 ${path.relative(v4CorePath, filePath)} - Failed to parse: ${e.message}`);
        filesWithErrors++;
    }
}

console.log(`\n📊 Summary:`);
console.log(`   Total files: ${solidityFiles.length}`);
console.log(`   Files with errors: ${filesWithErrors}`);
console.log(`   Files parsed successfully: ${solidityFiles.length - filesWithErrors}`);
console.log(`   Total parse errors: ${totalErrors}`);