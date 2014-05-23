#ifndef GEN3_H
#define GEN3_H
#include "genM.h"

class gen3 : public genM {
private:
	unsigned int state[624];
	static int a;
	void setgen();
	void genstate();
public:
	gen3();
	gen3(int, int);
	~gen3(){}
	void generate();
	void setseed2(int);
};

#endif