// Funkcje02.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <string>
using namespace std;

struct student {
	string name;
	string number;
	int informatyka;
	int matematyka;
	int biologia;
	int jezykpolski;
};

void display(struct student* student) {
	cout << "Numer Studenta: " << student->number<<endl;
	cout << "Imie ucznia: " << student->name << endl;
	cout << "Ocena z informatyki: " << student->informatyka << endl;
	cout << "Ocena z matematyki: " << student->matematyka << endl;
	cout << "Ocena z chemii: " << student->biologia << endl;
	cout << "Ocena z jezyka polskiego: " << student->jezykpolski << endl;
}

int main()
{	//Napisz program, który będzie symulował grupę 6 uczniów z kilku równoległych klas 
	//i ich wyniki w nauce z czterech przedmiotów. 
	//Program powinien wczytać sześciu uczniów o następujących właściwościach:
	//•imię ucznia;•oceny z informatyki, matematyki, biologii i języka polskiego,
	struct student listofStudents[6];
	int i;
	for (i = 0; i < 6;i++) {
		cout << "Student numer " << i+1 << endl;;
		cout << "Imie ucznia: ";
		cin >> listofStudents[i].name;
		cout << "Ocena z informatyki: ";
		cin >> listofStudents[i].informatyka;
		cout << "Ocena z matematyki: ";
		cin >> listofStudents[i].matematyka;
		cout << "Ocena z chemii: ";
		cin >> listofStudents[i].biologia;
		cout << "Ocena z jezyka polskiego: ";
		cin >> listofStudents[i].jezykpolski;
		cout << endl;
	}
	
}
