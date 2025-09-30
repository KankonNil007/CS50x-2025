document.addEventListener('DOMContentLoaded', function() {
    let body = document.querySelector('body');
    
    let red = document.querySelector('.b1');
    let blue = document.querySelector('.b2');
    let green = document.querySelector('.b3');

    function red1(event) {
        body.style.backgroundColor = 'red';
    }

    function blue1(event) {
        body.style.backgroundColor = 'blue';
    }

    function green1(event) {
        body.style.backgroundColor = 'green';
    }

    red.addEventListener('click', red1);
    blue.addEventListener('click', blue1);
    green.addEventListener('click', green1);
});