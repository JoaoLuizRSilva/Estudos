const menu = document.querySelector("#menu");
const openMenu = document.querySelector("#openMenu");
const closeMenu = document.querySelector("#closeMenu");
openMenu.addEventListener("click", ()=>{
    menu.style.display = 'flex';

    openMenu.style.display = 'none';

    setTimeout(()=>{
        menu.style.opacity = '1';
    }, 10);
})
closeMenu.addEventListener("click", ()=>{
    menu.style.opacity = '0';
    setTimeout(()=>{
        menu.removeAttribute('style');
        openMenu.removeAttribute('style');
    }, 200);
})