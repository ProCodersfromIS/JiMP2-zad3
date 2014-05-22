#ifndef GEN3_H
#define GEN3_H
#include "genM.h"

class gen3 : public genM {
private:
	int mod; //zmienne pomocnicze
	int mult;
public:
	gen3();
	gen3(int, int);
	~gen3();
	void generate();
	void model(int);
	int getmodel();
	void multiplier(int);
	int getmultiplier();
};

#endif