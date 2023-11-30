const express = require('express') 
const app = express()
const port = 3000 
const bodyParser = require('body-parser')
app.use(bodyParser.json()); 

function handleFirstRequest(req, res) {
    res.send('Hello World!!!'); 
}
app.get('/', handleFirstRequest);

function calcSum(n) {
    var sum = 0;
    for (var i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}
function calcprod(counter) {
    var prod = 1;
    for (var i = 1; i <= counter; i++) {
        prod *= i;
    }
    return prod;
}
function getMath(req, res) {
    // var counter = req.body.counter;
    var counter = req.query.counter; //Query necessary for fetching
    var ansObject = {
        sum : calcSum(counter),
        prod : calcprod(counter)
    };
    res.send(ansObject); // objects are returned as JSON file format
}
app.get('/math', getMath);

function getHTML(req, res) {
res.sendFile(__dirname + "/index.html"); // __dirname => gives current directory
}
app.get('/page', getHTML);

function started() {
    console.log(`Example app listening on port ${port}`) 
}
app.listen(port, started) //started is a callback function [NOT NECESSARY]