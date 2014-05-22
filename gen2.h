#ifndef GEN2_H
#define GEN2_H
#include "genM.h"

class gen2 : public genM {

private:
	int s2; //drugie ziarno
	int w1, w2; // zmienne potrzebne to tego generatora

public:
	gen2();
	gen2(int, int); //poczatek,koniec, ziarno , ziarno1
	~gen2();
	void seed2(int);//ustawia drugie ziarno
	int getseed2();
	void generate();

};
#endif