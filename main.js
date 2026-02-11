function sayHello() {
    const name = document.getElementById("nameInput").value;

    const greet = Module.cwrap('greet', 'string', ['string']);
    const message = greet(name);

    document.getElementById("result").innerText = message;
}
