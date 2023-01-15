// Funkcje01.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <stdlib.h>
using namespace std;


int main()
{	//Napisz program, który obliczy, ile jest liczb naturalnych (tj. całkowitych, dodatnich) nie większych od nktóre są podzielne przez 5 ale nie są podzielne przez 3. 
	//Liczba nma być pobrana od użytkownika.
	cout << "POLECENIE" << endl;
	cout << "Napisz program, który obliczy, ile jest liczb naturalnych (tj. całkowitych, dodatnich)\nnie większych od nktóre są podzielne przez 5 ale nie są podzielne przez 3. \nLiczba nma być pobrana od użytkownika." << endl;
	int n;
	cout << "podaj n" << endl;
	cin >> n;
	if (n < 0) {
		cout << "n mniejsza od zera" << endl;
		return 0;
	}
	
		int ilosc = 0;

		for (int liczba = 0; liczba <= n; liczba++) {
			if (liczba % 5 == 0 && liczba % 3 != 0) {
				ilosc++;
				liczba++;
			}
			if (liczba >= n) {
				cout << "wynik to: " << ilosc << endl;
				return 0;
			}
		}
		
}
