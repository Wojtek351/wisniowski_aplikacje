function zad1(){
    let liczba = prompt("Podaj liczbe: ");
    if(liczba>100){
        alert("Liczba wieksza od 100");
    } else if(liczba==100){
        alert("Liczba jest rowna 100");
    } else if(liczba<100){
        alert("Liczba jest mniejsza od 100");
    }
}
function zad2(){
    let wiek = parseInt(prompt("Podaj wiek: "));
    if(wiek<13){
        alert("Jestes dzieckiem");
    } else if(wiek>=13 && wiek <18){
        alert("Jestes nastolatkiem");
    } else if(wiek>=18){
        alert("Jestes pelnoletni");
    }
}
function zad3(){
    console.log("----------------------------------------");
    console.log("Zadanie 3");
    console.log("----------------------------------------");
    let liczba = parseInt(prompt("Podaj liczbe: "));
    for(i=1;i<=liczba;i++){
        console.log(i);
    }
    alert(`W konsoli wypisano liczby od 1 do ${liczba}`);
    console.log("----------------------------------------");
}
function zad4(){
    console.log("----------------------------------------");
    console.log("Zadanie 4");
    console.log("----------------------------------------");
    let div3 = 0;
    for(i=20;i>0;i--){
        console.log(i);
        if(i%3==0){
            div3++;
        }
    }
    alert(`W konsoli wypisano liczby 20 -> 1\n${div3} z tych liczb jest parzystych`);
    console.log("----------------------------------------");
}
function zad5(){
    console.log("----------------------------------------");
    console.log("Zadanie 5");
    console.log("----------------------------------------");
    let owoce = ["wisnia","jagoda", "porzeczka", "pomelo", "marakuja"];
    alert(`Pierwszy element: ${owoce[0]}\nOstatni element: ${owoce[owoce.length-1]}\nWszytkie owoce wypisane w konsoli `);
    for(i=0;i<owoce.length;i++){
        console.log(owoce[i]);
    }
    console.log("----------------------------------------");
}

function zad6(){
    let liczby = [4, 7, 2, 9, 12, 5];
    let even = 0;
    for(i=0;i<liczby.length;i++){
        if(liczby[i]%2==0){
            even++;
        }
    }
    alert(`${even} z tych liczb to liczby parzyste`);
}

function zad7(){
    let liczby = [2, 3, 4, 5, 6];
    let sum = 0;
    for(i=0;i<liczby.length;i++){
        sum += liczby[i];
    }
    let avg = sum/liczby.length;
    if(avg>=3){
        alert("Uczen zaliczyl!");
    } else{
        alert("Uczen NIE zaliczyl");
    }
}

function zad8(){
    console.log("----------------------------------------");
    console.log("Zadanie 8");
    console.log("----------------------------------------");
    let liczby=[];
    for(i=0;i<3;i++){
        liczby.push(parseInt(prompt(`Wczytaj ${i+1}. liczbe: `)));
    }
    let sum = 0;
    for(i=0;i<liczby.length;i++){
        console.log(liczby[i]);
        sum += liczby[i];
    }
    let msg = "";
    if(sum%2==0){
        msg = "Suma liczb jest parzysta!";
    } else{
        msg = "Suma liczb jest nieparzysta!";
    }
    alert(`W konsoli wypisano liczby po kolei\nSuma tych liczb: ${sum}\n${msg}`);
    console.log("----------------------------------------");
}