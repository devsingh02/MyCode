// I) Asynchronous Nature of JS
// => Async functions are run(executed) when the Call Stack is empty

// // 1. Working Stopwatch (free call stack/thread/sync task complete instaneously)
// let time = 0; //global
// function stopwatch() {
//   console.log(++time);
// }
// setInterval(stopwatch, 1000);  //runs stopwatch async.ly

// console.log("Ran Synchronously")


// // 2. Not working Stopwatch => Async. task runs only when the thread is free
// let time = 0; 
// function stopwatch() {
//   console.log(++time);
// }
// setInterval(stopwatch, 1000);  //runs stopwatch async.ly

// // This synchronous task takes time to execute making the async task wait in the Callback Queue.
// console.log("reached the Expensive Sync task now lags");
// let sum = 0;
// for (var i = 0; i < 1000000000000; i++) {
//   sum += i;
// }
// console.log(sum); 


// // 3. Works after some time => Async only runs when all sync task is complete (thread is free). Till then stuck in Callback Queue.
// let time = 0; 
// function stopwatch() {
//   console.log(++time);
// }
// setInterval(stopwatch, 1000);  //runs stopwatch async.ly

// // This synchronous task takes few seconds
// console.log("reached the Sync task");
// let sum = 0;
// for (var i = 0; i < 1000000000; i++) {
//   sum += i;
// }
// console.log(sum); 

//-------------------------------------------------------------------------------------------------------------

// II) Callback Hell => ugly chaining of Async tasks
// • callback : passing a function as a input parameter in another function
// • callback function : is the function which is passed as input

// // Noobie Syntax :-
// function getMedicine1() {
//   console.log("Medicine 1 received");
//   setTimeout(getMedicine2, 2000);
// }
// function getMedicine2() {
//   console.log("Medicine 2 received");
//   setTimeout(getMedicine3, 3000);
// }
// function getMedicine3() {
//   console.log("Medicine 3 received");
// }
// setTimeout(getMedicine1, 1000);

// // Pro Syntax :-
// setTimeout(function getMedicine1() {
//   console.log("Medicine 1 received");
//   setTimeout(function getMedicine2() {
//     console.log("Medicine 2 received");
//     setTimeout(function getMedicine3() {
//       console.log("Medicine 3 received");
//     }, 3000);  // andar se bahar
//   }, 2000);
// }, 1000)

//-------------------------------------------------------------------------------------------------------------

// III) Promises 
// • Solution to Callback hell (neater code) [Eliminates callbacks]
// • ***an Asynchornous function -> MUST ALWAYS return a Promise***
// • upon calling, the async. func. immediately gives us a Promise
// • A promise is a class, which is used as objects by functions (by using "new")

// // revision of objects (syntax) :-
// var user1 = {
//   Name : "Devansh",
//   Age : 25,
//   isLikeable : function() {
//     return true;
//   }
// }
// console.log(user1.Name + " is ->");
// console.log(user1.isLikeable());


// Syntax :-
// • return new Promise(<Promise Body>);  [which has resolve in parameter]
// • then(<some function>)
// • upon calling "resolve" function, control reaches to ".then()"

// // DEFINING + USING :-
// function getMedicine1() {  // Async. fu.
//   return new Promise(function(resolve) {
//     setTimeout(resolve, 1000); //setTimeout doesn't need to know even the name of the function
//   })
// }
// // the Promise object has a then() function
// getMedicine1().then(function() {  // reolve returns to then
//   console.log("Medicine 1 received");
// })

// // PRACTICAL USE :- (reading from a file)
// function fileIsRead(content) {
//   console.log(content);
// }
// fs.read("a.txt", fileIsRead); //Callback
// fs.read("a.txt").then(fileIsRead); //Promise

// IV) Arrow Functions