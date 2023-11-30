// Use FILE as DATABASE
//Must initialise the file with an empty array at first
const express = require('express');
const bodyParser = require('body-parser');
const fs = require("fs");

const app = express();

app.use(bodyParser.json());

app.get('/todos', (req, res) => {
    fs.readFile(__dirname + "/todos.json", "utf8", (err, data) => {//fs reads all Files as String
        if (err) throw err;
        res.json(JSON.parse(data)); // hence converted string to JSON
        //returns the read string as JSON to Postman
    });
});

app.post('/todos', (req, res) => {
    const newTodo = {
        id: Math.floor(Math.random() * 1000000), // unique random id
        title: req.body.title,
        description: req.body.description
    };
    fs.readFile(__dirname + "/todos.json", "utf8", (err, data) => {
        if (err) throw err;
        const todos = JSON.parse(data);
        todos.push(newTodo); //PUSH new object to a JSON file.
        fs.writeFile(__dirname + "/todos.json", JSON.stringify(todos), (err) => {
            if (err) throw err;
            res.status(201).json(newTodo);
        });
    });
});

// for all other routes, return 404
app.use((req, res, next) => {
    res.status(404).send();
});

app.listen(3000, () => {
    console.log("I am now listening.");
});