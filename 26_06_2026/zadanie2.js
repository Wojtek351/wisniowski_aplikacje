function zadanie1(){
    document.getElementById("tytul").textContent = "Ćwiczymy JavaScript i DOM";
};

function zadanie2(){
    let element = document.querySelector(".komunikat");
    element.style.color = "#0000FF";     
    element.style.fontSize = "30px";
}

function zadanie3(){
    let akapit = document.getElementById("opis");
    akapit.textContent = "Ten opis został zmieniony przez JavaScript."
    akapit.style.color = "purple";
    akapit.style.fontStyle = "italic";
}

function zadanie4(){
    document.querySelector("li:nth-of-type(1)").style.background = "lightblue";
}

function zadanie5(){
    document.body.style.background = "lightyellow";
    document.body.style.color = "darkred";
    document.body.style.fontSize = "30px";
}


document.getElementById("przycisk1").addEventListener("click", zadanie1);
document.getElementById("przycisk2").addEventListener("click", zadanie2);
document.getElementById("przycisk3").addEventListener("click", zadanie3);
document.getElementById("przycisk4").addEventListener("click", zadanie4);
document.getElementById("przycisk5").addEventListener("click", zadanie5);

