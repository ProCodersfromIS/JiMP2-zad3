#ifndef GEN1_H
#define GEN1_H
#include "genM.h"
#include <iostream>
using namespace std;

class gen1 : public genM {
	int b, e, s;
	int val;
public:
	gen1();
	gen1(int,int);
	~gen1();
	void generate();
	int getval();
	void seed(int);
	int getseed();
	void begin(int);
	int getbegin();
	void end(int);
	int getend();
	int range();
	void show(ostream& = cout);
};

#endif