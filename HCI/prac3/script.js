// script.js
const buttons = document.querySelectorAll('.tab-buttons button');
const tabItems = document.querySelectorAll('.tab-item');

buttons.forEach((button, index) => {
    button.addEventListener('click', () => {
        // Remove the "active" class from all buttons and tab items
        buttons.forEach((btn) => btn.classList.remove('active'));
        tabItems.forEach((item) => item.classList.remove('active'));

        // Add the "active" class to the clicked button and corresponding tab item
        button.classList.add('active');
        tabItems[index].classList.add('active');
    });
});

// Initially, show the text tab as highlighted
buttons[0].click();
