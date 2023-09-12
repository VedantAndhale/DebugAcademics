
HTML (index.html):
    Defines the structure of the web page, including the title and the layout for the tabbed interface.
    Contains buttons for switching between tabs (Text, Image, Video) and the content to display for each tab.

CSS (style.css):
    Styles the web page elements, including center-aligning content, styling buttons, and controlling the visibility of tab content.
    The .active class is used to determine which tab is currently selected and should be displayed.

JavaScript (script.js)
    Select all tab buttons and tab content items using document.querySelectorAll().
    Adds `click` event listeners to each tab button, so when a button is clicked, it triggers a function.
    In the `click` event function, it removes the active class from all buttons and tab content items to hide them.
    It then adds the active class to the clicked button and its corresponding tab content item to display them.
    Lastly, it simulates a click on the Text tab button to initially show the Text tab content when the page loads.
