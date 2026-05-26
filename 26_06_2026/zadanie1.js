var data = new Date();

document.querySelector("#zadanie1").textContent = `Data: ${data.getFullYear()}/${data.getMonth()}/${data.getDate()}\nGodzina: ${data.getHours()}:${data.getMinutes()}`;

var miesiac = "";
switch(data.getMonth()){
    case 0:
        miesiac = "styczeń";
        break;
    case 1:
        miesiac = "luty";
        break;
    case 2:
        miesiac = "marzec";
        break;
    case 3:
        miesiac = "kwiecień";
        break;
    case 4:
        miesiac = "maj";
        break;
    case 5:
        miesiac = "czerwiec";
        break;
    case 6:
        miesiac = "lipiec";
        break;
    case 7:
        miesiac = "sierpień";
        break;
    case 8:
        miesiac = "wrzesień";
        break;
    case 9:
        miesiac = "pazdziernik";
        break;
    case 10:
        miesiac = "listopad";
        break;
    case 11:
        miesiac = "grudzień";
        break;
    
}
document.querySelector("#zadanie2").textContent = `Aktualny miesiąc: ${miesiac}`;


var rok_rozpaczecia;

rok_rozpaczecia = Number(prompt(`Podaj rok rozpoczecia nauki w szkole: `));
document.querySelector("#zadanie3").textContent = `Od rozpoczęcia nauki minęło lat: ${data.getFullYear()-rok_rozpaczecia}`;


var poczatek_roku = new Date("2026-1-1");
document.querySelector("#zadanie4").textContent = `Od początku tego roku minęło: ${Math.floor((data-poczatek_roku)/(1000*60*60*24))} dni!`

var dzien;
if (data.getDay() == 0 || data.getDay() == 6) dzien = "weekend"; else dzien = "dzień roboczy";
document.querySelector("#zadanie4").textContent = `Jest ${dzien}`;


