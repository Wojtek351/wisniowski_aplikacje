function pokazInfo(){
    alert("To zadanie jest ze zdareniem onclick");
}
document.querySelector("#przycisk2").addEventListener("click", () => {
    document.querySelector("p").style.fontSize = "30px";
});
document.querySelector("#przycisk3").addEventListener("click", () => {
    let naglowek = document.querySelector("h3");
    naglowek.textContent = "DUPA";
    naglowek.style.color = "#ff0000";
});


