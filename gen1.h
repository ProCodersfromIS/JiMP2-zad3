#ifndef GEN1_H
#define GEN1_H
#include "genM.h"

class gen1 : public genM {

public:
	gen1();
	gen1(int,int); // wywo�ujesz z argumentem pocz�tek i koniec zakresu
	~gen1(){}
	void generate(); // losowanie
};

#endif