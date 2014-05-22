#ifndef GENM_H
#define GENM_H
#include <iostream>
using namespace std;

class genM {

protected:
	int b, e, s;
	int val;

public:
	genM();
	genM(int, int); // wywo³ujesz z argumentem pocz¹tek i koniec zakresu
	~genM();
	void virtual generate() = 0;
	int getval(); // zwraca wylosowana wartosc
	void virtual seed(int); // ustawia ziarno
	int getseed();
	void begin(int);
	int getbegin();
	void end(int);
	int getend(); // zwracaa koniec
	int range(); // ustawia i zwraca zakres losowania
	void show(ostream& = cout); // wyœwietla wartosc
};
#endif