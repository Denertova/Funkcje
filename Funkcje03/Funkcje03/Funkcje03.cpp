
#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct student {
	string imie;
	string nazwisko;
	int numerindeksu;
};

int main()
{
	//Napisz program do sortowania wektora struktur studentów według numerów indeksów. 
	//Struktura Student ma zawierać informacje o: imieniu, nazwisku i numerze indeksu.

	vector<student> stud = { {"Kasia", "Kowalska", 78797},
							 {"Jacek", "Wroblewski", 67845},
							 {"Bozena", "Trysuk", 79976} };
	return 0;
}