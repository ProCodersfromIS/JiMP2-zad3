#include "genM.h"
#include "gen1.h"
#include <iostream>
#include <time.h>

using namespace std;

gen1::gen1(){
	genName = "Generator 1 - wbudowany";
}
gen1::gen1(int _b, int _e): genM(_b, _e) {
	this->setseed(time(NULL));
	srand(s);
	genName = "Generator 1 - wbudowany";
}
void gen1::generate(){
	val = (rand() % this->range()) + b;
}