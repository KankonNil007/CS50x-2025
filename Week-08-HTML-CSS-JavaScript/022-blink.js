document.addEventListener('DOMContentLoaded', function() {
    let body = document.querySelector('body');

    function blink() {
        if (body.style.visibility == 'hidden') {
            body.style.visibility = 'visible';
        }
        else {
            body.style.visibility = 'hidden';
        }
    }

    window.setInterval(blink, 500);
});