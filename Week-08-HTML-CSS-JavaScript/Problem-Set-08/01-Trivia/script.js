// TODO: Add code to check answers to questions
document.addEventListener('DOMContentLoaded', function() {
    // Part - 1: Variables
    let optionInc1 = document.querySelector('.b1');
    let optionInc2 = document.querySelector('.b2');
    let optionInc3 = document.querySelector('.b4');
    let optionCor = document.querySelector('.b3');
    let result = document.querySelector('.p1');

    // Part - 2: Variables
    let input = document.querySelector('#answer');
    let check = document.querySelector('.b5');
    let result2 = document.querySelector('.p2');

    // Part - 1: Functions
    function buttonClickInc1(event) {
        optionInc1.style.backgroundColor = 'red';
        result.innerHTML = 'Incorrect';
        optionInc2.style.backgroundColor = '#d9edff';
        optionInc3.style.backgroundColor = '#d9edff';
        optionCor.style.backgroundColor = '#d9edff';
    }

    function buttonClickInc2(event) {
        optionInc2.style.backgroundColor = 'red';
        result.innerHTML = 'Incorrect';
        optionInc1.style.backgroundColor = '#d9edff';
        optionInc3.style.backgroundColor = '#d9edff';
        optionCor.style.backgroundColor = '#d9edff';
    }

    function buttonClickInc3(event) {
        optionInc3.style.backgroundColor = 'red';
        result.innerHTML = 'Incorrect';
        optionInc2.style.backgroundColor = '#d9edff';
        optionInc1.style.backgroundColor = '#d9edff';
        optionCor.style.backgroundColor = '#d9edff';
    }

    function buttonClickCor(event) {
        optionCor.style.backgroundColor = 'green';
        result.innerHTML = 'Correct!';
        optionInc2.style.backgroundColor = '#d9edff';
        optionInc3.style.backgroundColor = '#d9edff';
        optionInc1.style.backgroundColor = '#d9edff';
    }

    // Part - 2: Functions
    function checkAns(event) {
        if (input.value == '55') {
            input.style.backgroundColor = 'green';
            result2.innerHTML = 'Correct!';
        }
        else {
            input.style.backgroundColor = 'red';
            result2.innerHTML = 'Incorrect';
        }
    }

    // Part - 1: Event Listeners
    optionInc1.addEventListener('click', buttonClickInc1);
    optionInc2.addEventListener('click', buttonClickInc2);
    optionInc3.addEventListener('click', buttonClickInc3);
    optionCor.addEventListener('click', buttonClickCor);

    // Part - 2: Event Listeners
    check.addEventListener('click', checkAns);
});