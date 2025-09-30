document.addEventListener('DOMContentLoaded', function() {
    let input = document.querySelector('input');
    function nameEt(event) {
        let name = document.querySelector('p');
        if (input.value) {
            name.innerHTML = `hello, ${input.value}`;
        }
        else {
            name.innerHTML = 'hello, whoever you are';
        }
    }
    input.addEventListener('keyup', nameEt);
});