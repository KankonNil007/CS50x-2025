document.addEventListener('DOMContentLoaded', function() {
    function greet(event) {
        let name = document.querySelector("#name").value;
        alert(`Hello, ${name}`);
        event.preventDefault();
    }

    let form = document.querySelector('form');
    form.addEventListener('submit', greet);
});