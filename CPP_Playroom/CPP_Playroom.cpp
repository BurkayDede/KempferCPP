
#include <iostream>
#include "CDate.h"
#include "CTime.h"
using namespace std;

int main()
{
	CDate D1, D2(9, 4, 2023);
	CTime T1, T2(6, 32, 27), T3(17, 45);

	cout << "\nKlasse CDate:" << endl;
	cout << "Standardkonstruktor Heutiges Datum (D1): "; D1.printDate(); cout << endl;
	cout << "Konstruktor Ostersonntag (D2): "; D2.printDate(); cout << endl;

	cout << "\nKlasse CTime:" << endl;
	cout << "Standardkonstruktor Aktuelle Uhrzeit (T1): "; T1.printTime(); cout << endl;
	cout << "Konstruktor Zeit zum Aufstehen (T2): "; T2.printTime(); cout << endl;
	cout << "Konstruktor Vorlesungsbeginn (T3): "; T3.printTime(); cout << endl;

	return 0;

}

