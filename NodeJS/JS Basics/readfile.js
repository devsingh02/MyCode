const fs = require("fs"); // imported library to read files <fs>

function callbackFn(err, data) {
    console.log(data);
}
fs.readFile("a.txt", "utf-8", callbackFn);