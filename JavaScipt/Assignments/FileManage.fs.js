const fs = require('fs');

//writeFile takes input/data as => STRING
fs.writeFile('example.txt', "Kaam karo bhai", 'utf8', (err) => {
    if (err) {
        console.error(err);
        return;
    }
    console.log('File has been written successfully.');
});

//readFile reads all files/data as => STRING
fs.readFile('example.txt', 'utf8', (err, data) => {
    if (err) {
        console.error(err);
        return;
    }
    console.log(data); // Content of the file
});