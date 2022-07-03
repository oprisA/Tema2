// Tema2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	//Cerinta
	//
	//Intr-o curte sunt caini, pisici, si gaini.Se stie ca nr. de pisici este egal cu dublul nr. de caini, iar nr. de gaini este egal
	//cu dublul numarului de pisici.
	//Daca in curte sunt c caini, cate animale sunt in curte?
	//
	//Date de intrare
	//Programul citeste de la tastatura numarul total c.
	//
	//Date de iesire
	//Programul va afisa pe ecran numarul total de animale din curte.
	//
	//Restrictii si precizari
	//2<= c <= 1000
	//
	//Exemplu
	//
	//Intrare
	//3
	//
	//Iesire
	//21


int c;

cout << "Introduceti de la tastatura numarul c" << endl;

cin >> c;

int total = c + (2 * c + 4 * c);

cout << "Vom afisa numarul total de animale " << total;
}
	


