#include <iostream>

using namespace std;

void zad1() {
	string imie;
	cout << "Podaj imie: ";
	cin >> imie;
	cout << "Witaj, " << imie << "!";
}

void zad2() {
	int a, b;
	cout << "Podaj liczbe a: ";
	cin >> a;
	cout << "Podaj liczbe b: ";
	cin >> b;
	cout << "Suma a i b: " << a + b;
}

void zad3() {
	int a;
	cout << "Podaj liczbe calkowita: ";
	cin >> a;
	if (a % 2 == 0) {
		cout << "Liczba: " << a << " jest parzysta";
	}
	else {
		cout << "Liczba: " << a << " jest nieparzysta";
	}
}

void zad4() {
	int wiek;

	cout << "Podaj wiek: ";
	cin >> wiek;
	if (wiek < 18) {
		cout << "Jestes niepelnoletni";
	}
	else if (wiek >= 18) {
		cout << "Jestes pelnoletni";
	}
}

void zad5() {
	int a;
	cout << "Podaj liczbe calkowita: ";
	cin >> a;
	if (a < 0) {
		cout << "Liczba jest ujemna!";
	}
	else if (a == 0) {
		cout << "Liczba jest rowna 0!";
	}
	else if (a > 0) {
		cout << "Liczba jest dodatnia!";
	}
}

void zad6() {
	int a, b;

	cout << "Podaj liczbe a: ";
	cin >> a;
	cout << "Podaj liczbe b: ";
	cin >> b;

	if (a > b) {
		cout << "Liczba a: " << a << " jest wieksza od b: " << b;
	}
	else if (a < b) {
		cout << "Liczba a: " << a << " jest mniejsza od b: " << b;
	}
	else if (a == b) {
		cout << "Liczba a: " << a << " jest rowna b: " << b;
	}
}

void zad7() {
	int a, b, c;
	cout << "Podaj bok a: ";
	cin >> a;
	cout << "Podaj bok b: ";
	cin >> b;
	cout << "Podaj bok c: ";
	cin >> c;
	if (((a + b) > c) && ((a + c) > b) && ((b + c) > a)) {
		if (a == b && b == c) {
			cout << "Trojkat jest rownoboczny!";
		}
		else if ((a == b && a != c) || (a == c && a != b) || (b == c && a != c)) {
			cout << "Trojkat jest rownoramienny!";
		}
		else if (a != b && a != c && b != c) {
			cout << "Trojkat jest roznoboczny!";
		}
	}
	else {
		cout << "Z podanych bokow nie mozna ulozyc trojkata!";
	}
}

int main() {
	int asdf;

	do {
		cout << "0. Wyjdz" << endl;
		cout << "1. zad 1 (powitanie)" << endl;
		cout << "2. zad 2 (suma)" << endl;
		cout << "3. zad 3 (parzystosc)" << endl;
		cout << "4. zad 4 (pelnoletnosc)" << endl;
		cout << "5. zad 5 (-/+/0)" << endl;
		cout << "6. zad 6 (porownanie liczb)" << endl;
		cout << "7. zad dodatkowe (trojkat)" << endl;
		cout << "----------------------------" << endl;
		cout << "Wybor: ";
		cin >> asdf;
		system("cls");

		switch (asdf) {
		case 0:
			return 1;
		case 1:
			zad1();
			break;
		case 2:
			zad2();
			break;
		case 3:
			zad3();
			break;
		case 4:
			zad4();
			break;
		case 5:
			zad5();
			break;
		case 6:
			zad6();
			break;
		case 7:
			zad7();
			break;
		default:
			break;
		}
		cout << endl << endl;
		system("pause");
		system("cls");
	} while (asdf != 0);


	return 0;
}