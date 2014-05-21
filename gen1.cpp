#include "genM.h"
#include "gen1.h"
#include <iostream>
#include <time.h>

using namespace std;

gen1::gen1(){}
gen1::gen1(int _b, int _e): genM(_b, _e) {
	s = time(NULL);
	srand(s);
}
gen1::~gen1(){}
void gen1::generate(){
	val = (rand() % this->range()) + b;
}