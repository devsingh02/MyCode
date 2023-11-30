// fetch(<URL>, Object).then(callbackFn)
//works for quries
function logResponseBody(jsonbody) {
    console.log(jsonbody);
}

function callbackFn(result) {
    result.json().then(logResponseBody);
}

var sendObj = {
    method : "GET"
};
fetch("http://localhost:3000/math?counter=10", sendObj).then(callbackFn); //fetch returns "result" to the CallbackFn