let input = require('fs').readFileSync('/dev/stdin').toString().split('\n');
console.log(input[0][Number(input[1])-1]);