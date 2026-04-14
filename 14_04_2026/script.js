let liczby = [5,12,8,20,3];

function sumaLiczb(a,b){
    return a+b;
}
function czyPelnoletni(wiek){
    if (wiek>=18){
        return `Pelnoletni`;
    } else{
        return `Niepelnoletni`;
    }
}
function poleProstokata(a,b){
    return a*b;
}
function czyParzysta(liczba){
    if(liczba%2==0){
        return `Parzysta`;
    } else{
        return `Nieparzysta`;
    }
}

function sredniaTablicy(){
    let sum = 0;
    liczby.forEach((e)=>{
        sum+=e;
    });
    return `Srednia tablicy wynosi: ${sum/liczby.length}`;
}

function czyPalindrom(tekst){
    if(tekst.split("").reverse().join("")==tekst){
        return true;
    } else{
        return false;
    }
}

function maxZTrzech(a,b,c){
    let liczby = [a,b,c];
    let max=liczby[0];
    for(i=0;i<liczby.length;i++){
        if(liczby[i]>max){
            max=liczby[i]
        }
    }
    return max;
}

//-----------------------------------------------------------------------------

function zad1(a,b){
    alert(sumaLiczb(a,b));
}

function zad2(wiek){
    alert(czyPelnoletni(wiek));
}

function zad3(a,b){
    alert(`Pole prostokata o bokach ${a} i ${b} wynosi: ${poleProstokata(a,b)}`);
}

function zad4(liczba4){
    alert(`Liczba ${liczba4} jest ${czyParzysta(liczba4)}`);
}

function zad5(){
    let max=liczby[0];
    for(i=0;i<liczby.length;i++){
        if(liczby[i]>max){
            max=liczby[i]
        }
    }
    let min=liczby[0];
    for(i=0;i<liczby.length;i++){
        if(liczby[i]<min){
            min=liczby[i];
        }
    }
    alert(`Najwieksza wartosc: ${max}\nNajmniejsza wartosc: ${min}\nLiczba elementow: ${liczby.length}`);
}

function zad6(){
    result = [];
    for(i=0;i<liczby.length;i++){
        if(liczby[i]>10){
            result.push(liczby[i]);
        }
    }
    alert(`Elementy tablicy wieksze od 10:   ${result}`);
}

function zad7(){
    alert(sredniaTablicy());
}

function zad8(){
    let owoce = ["jablko", "banan", "gruszka"];
    owoce.push("pomarancza");
    owoce.sort();
    alert(owoce);
}

function zad9(){
    let tekst = "Programowanie w JavaScript";
    alert(`Tekst zmodyfikowany: ${tekst.toUpperCase()}\nDlugosc tekstu: ${tekst.length}\n${tekst.includes("JavaScript") ? 'Tekst zawiera "Javascript"':'Tekst NIE zawiera "JavaScript"'}`);
}

function zad10(){
    let tekst = "Programowanie w JavaScript";
    alert(`Zmieniony tekst: ${tekst.replaceAll(" ","-")}`);
}

function zad11(tekst11){
    alert(czyPalindrom(tekst11));
}

function zad12(a,b,c){
    alert(`Najwieksza wartosc: ${maxZTrzech(a,b,c)}`);
}