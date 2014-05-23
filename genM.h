#ifndef GENM_H
#define GENM_H
#include <iostream>
using namespace std;

class genM {

protected:
	int b, e, s;
	int val;
	char* genName;

public:
	genM();
	genM(int, int); // wywo�ujesz z argumentem pocz�tek i koniec zakresu
	~genM();
	void virtual generate() = 0;
	int getval(); // zwraca wylosowana wartosc
	void virtual setseed(int); // ustawia ziarno
	int getseed();
	void setbegin(int);
	int getbegin();
	void setend(int);
	int getend(); // zwracaa koniec
	int range(); // ustawia i zwraca zakres losowania
	void show(ostream& = cout); // wy�wietla wartosc
	void getgenName(ostream& = cout); //wy�wietla nazwe generatora
	char* name();
};
#endif