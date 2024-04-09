
const dropdownButton = document.querySelector('.drop button');
const dropdownContent = document.querySelector('.drop .content');
dropdownButton.addEventListener('click', function() {
  dropdownContent.classList.toggle('show');
});


const form = document.querySelector('.login form');
form.addEventListener('submit', function(event) {
  event.preventDefault();
  const username = form.elements['Username'].value;
  const password = form.elements['password'].value;

});


const createAccountLink = document.querySelector('.login a[href="create.html"]');
createAccountLink.addEventListener('click', function(event) {

});


const homeLink = document.getElementById('home');
const aboutLink = document.getElementById('about');
const productLink = document.getElementById('Product');
const contactLink = document.getElementById('contact');
homeLink.addEventListener('click', handleNavigation);
aboutLink.addEventListener('click', handleNavigation);
productLink.addEventListener('click', handleNavigation);
contactLink.addEventListener('click', handleNavigation);

function handleNavigation(event) {
  event.preventDefault();
  const pageId = event.target.id;
 
}
