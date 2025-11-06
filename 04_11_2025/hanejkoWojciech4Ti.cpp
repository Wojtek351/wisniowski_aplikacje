#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void zad1() {
	for(int i = 1; i <= 20; i++) {
		cout << i << " ";
	}
}

void zad2() {
	for(int i = 0; i <= 50; i++) {
		if(i%2==0) cout << i << " ";
	}
}

void zad3() {
	int liczby[10];
	int sum = 0;
	for (int i = 0; i < 10; i++) {
		cout << "Podaj " << i + 1 << ". liczbe: ";
		cin >> liczby[i];
	}
	for (int i = 0; i < 10; i++) {
		sum += liczby[i];
	}
	cout << "Suma liczb wynosi: " << sum;
}


void zad4() {
	int oceny[5];
	double sum = 0;
	for (int i = 0; i < 5; i++) {
		cout << "Podaj " << i + 1 << ". ocene: ";
		cin >> oceny[i];
	}
	for (int i = 0; i < 5; i++) {
		sum += oceny[i];
	}
	cout << fixed << setprecision(2);
	cout << "Srednia ocen wynosi: " << sum/5;
}

void zad5() {
	int liczby[8];
	for (int i = 0; i < 8; i++) {
		cout << "Podaj " << i + 1 << ". ocene: ";
		cin >> liczby[i];
	}
	int najmniejsza = liczby[0];
	int najwieksza = liczby[0];
	for (int i = 0; i < 8; i++) {
		if (liczby[i] > najwieksza) najwieksza = liczby[i];
		if (liczby[i] < najmniejsza) najmniejsza = liczby[i];
	}
	cout << "Najmniejsza: " << najmniejsza << "   najwieksza: " << najwieksza;
}

void zad6() {
	int liczby[10];
	int positive = 0;
	for (int i = 0; i < 10; i++) {
		cout << "Podaj " << i + 1 << ". liczbe: ";
		cin >> liczby[i];
	}
	for (int i = 0; i < 10; i++) {
		if (liczby[i] > 0) positive++;
	}
	cout << "Z podanych liczb dodatnich jest: " << positive;
}

void zad7() {
	int liczby[6];
	for (int i = 0; i < 6; i++) {
		cout << "Podaj " << i + 1 << ". liczbe: ";
		cin >> liczby[i];
	}
	cout << endl;
	for (int i = 5; i>=0; i--) {
		cout << liczby[i];
	}
}

int Suma(int a, int b) {
	return a + b;
}

void zad8() {
	int a, b;
	cout << "Podaj a: ";
	cin >> a;
	cout << "Podaj b: ";
	cin >> b;
	cout << "Suma liczb wynosi: " << Suma(a, b);
}

bool CzyParzysta(int n) {
	if (n % 2 == 0) return true;
	else if (n % 2 == 1) return false;

}
void zad9() {
	int a;
	cout << "Podaj liczbe: ";
	cin >> a;
	bool parzystocs = CzyParzysta(a);
	if (parzystocs) {
		cout << "Liczba jest parzysta!";
	}
	else {
		cout << "Liczba jest nieparzysta!";
	}
}
int SumaTablicy(int tab[], int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += tab[i];
	}
	return sum;
}
void zad10() {
	int liczby[5];
	for (int i = 0; i < 5; i++) {
		cout << "Podaj " << i + 1 << ". liczbe: ";
		cin >> liczby[i];
	}
	cout << "Suma elementow tablicy wynosi: " << SumaTablicy(liczby, 5);
}
double Srednia(int tab[], int n) {
	double sum = 0;
	for (int i = 0; i < n; i++) {
		sum += tab[i];
	}
	return sum/n;
}


void zad11() {
	int oceny[6];
	for (int i = 0; i < 6; i++) {
		cout << "Podaj " << i + 1 << ". ocene: ";
		cin >> oceny[i];
	}
	cout << "Srednia ocen wynosi: " << Srednia(oceny, 6);
}

int Minimum(int tab[], int n) {
	int min = tab[0];
	for (int i = 0; i < 10; i++) {
		if (tab[i] < min) min = tab[i];
	}
	return min;
}
void zad12() {
	int liczby[10];
	for (int i = 0; i < 10; i++) {
		cout << "Podaj " << i + 1 << ". liczbe: ";
		cin >> liczby[i];
	}
	cout << "Najmniejsza liczba ze zbioru: " << Minimum(liczby, 10);
}

void zad13() {
	int liczby[10];
	int szukana;
	bool znaleziono= false;
	for (int i = 0; i < 10; i++) {
		cout << "Podaj " << i + 1 << ". liczbe: ";
		cin >> liczby[i];
	}
	cout << endl;
	cout << "Podaj liczbe, ktorej obecnosc chcesz sprawdzic: ";
	cin >> szukana;
	for (int i = 0; i < 10; i++) {
		if (liczby[i] == szukana) {
			znaleziono = true;
			break;
		}
	}
	if (znaleziono) {
		cout << "Liczba znajduje sie w podanym zbiorze!";
	}
	else {
		cout << "Liczba NIE znajduje sie w podanym zbiorze!";
	}
}

void OdwrocTabele(int tab[],int n) {
	int sw1, sw2; //zmienne tymczasowe przechowujace wartosci zamieniane
	if (n % 2 == 0) {
		for (int i = 0; i < n / 2; i++) {
			sw1 = tab[i];
			sw2 = tab[n - i - 1];
			tab[i] = sw2;
			tab[n - i - 1] = sw1;
		}
	}
	else {
		for (int i = 0; i < (n-1) / 2; i++) {
			sw1 = tab[i];
			sw2 = tab[n - i - 1];
			tab[i] = sw2;
			tab[n - i - 1] = sw1;
		}
	}
	for (int i = 0; i < n; i++) {
		cout << tab[i];
	}
}
void zad14() {
	int a[5] = {1,2,3,4,5};
	OdwrocTabele(a,5);
}
void zad15() {
	int liczby[10];
	srand(time(NULL));
	cout << "Wylosowane liczby: " << endl;
	for (int i = 0; i < 10; i++) {
		liczby[i] = rand() % 100 + 1;
		cout << liczby[i] << endl;;
	}
	cout << "Srednia: " << Srednia(liczby, 10);
}

int main() {
	int ch;
	do {
		system("cls");
		cout << "Wybierz zadanie wpisujace nr zadania: ";
		cin >> ch;
		system("cls");
		switch (ch) {
		case 0:
			return 0;
			break;
		case 1:
			zad1();
			cout << endl;
			system("pause");
			break;
		case 2:
			zad2();
			cout << endl;
			system("pause");
			break;
		case 3:
			zad3();
			cout << endl;
			system("pause");
			break;
		case 4:
			zad4();
			cout << endl;
			system("pause");
			break;
		case 5:
			zad5();
			cout << endl;
			system("pause");
			break;
		case 6:
			zad6();
			cout << endl;
			system("pause");
			break;
		case 7:
			zad7();
			cout << endl;
			system("pause");
			break;
		case 8:
			zad8();
			cout << endl;
			system("pause");
			break;
		case 9:
			zad9();
			cout << endl;
			system("pause");
			break;
		case 10:
			zad10();
			cout << endl;
			system("pause");
			break;
		case 11:
			zad11();
			cout << endl;
			system("pause");
			break;
		case 12:
			zad12();
			cout << endl;
			system("pause");
			break;
		case 13:
			zad13();
			cout << endl;
			system("pause");
			break;
		case 14:
			zad14();
			cout << endl;
			system("pause");
			break;
		case 15:
			zad15();
			cout << endl;
			system("pause");
			break;
		default:
			break;
		}
		system("cls");
	} while (ch!=0);

	return 0;
}