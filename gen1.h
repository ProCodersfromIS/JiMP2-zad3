#ifndef GEN1_H
#define GEN1_H
#include "genM.h"
#include <iostream>
using namespace std;

class gen1 : public genM {
	int b, e, s; // b - pocz�tek zakresu losowania e - koniec, s - ziarno
	int val; // zwracana wylosowana liczba;
public:
	gen1();
	gen1(int,int); // wywo�ujesz z argumentem pocz�tek i koniec zakresu
	~gen1();
	void generate(); // losowanie
	int getval(); // zwraca wylosowana wartosc
	void seed(int); // ustawia ziarno
	int getseed(); // zwraca ziarno
	void begin(int); // ustawia pocz�tek
	int getbegin(); // zwraca pocz�tek
	void end(int); // ustawia koniec
	int getend(); // zwracaa koniec
	int range(); // ustawia i zwraca zakres losowania
	void show(ostream& = cout); // wy�wietla wartosc
};

#endif