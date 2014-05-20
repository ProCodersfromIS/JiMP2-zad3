#ifndef GEN1_H
#define GEN1_H
#include "genM.h"

class gen1 : public genM {
	int length;
	int* tab;
	int a, b, s, z;
public:
	gen1();
	gen1(int);
	~gen1();
	void generate(int);
	//void resize(int);
	void remove();
	void seed(int);
	void range(int, int);
	void other();
	void show();

};

#endif