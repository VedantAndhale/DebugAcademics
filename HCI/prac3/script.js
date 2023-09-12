// script.js

// Select all tab buttons and tab content items
const buttons = document.querySelectorAll('.tab-buttons button');
const tabItems = document.querySelectorAll('.tab-item');

// Add a click event listener to each tab button
buttons.forEach((button, index) => {
    button.addEventListener('click', () => {
        // Remove the "active" class from all buttons and tab content items
        buttons.forEach((btn) => btn.classList.remove('active'));
        tabItems.forEach((item) => item.classList.remove('active'));

        // Add the "active" class to the clicked button and its corresponding tab content item
        button.classList.add('active');
        tabItems[index].classList.add('active');
    });
});

// Initially, show the Text tab as highlighted
buttons[0].click();
