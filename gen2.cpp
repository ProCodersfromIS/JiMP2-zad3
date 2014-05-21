#include "genM.h"
#include "gen2.h"
#include <iostream>
#include <time.h>

using namespace std;

gen2::gen2(){}
gen2::gen2(int _b, int _e) : genM(_b, _e) {
	s = time(NULL);
	s2 = time(NULL);

}
gen2::~gen2(){}
void gen2::seed2(int _s2){
	s2 = _s2;
}
int gen2::getseed2(){
	return s2;
}
void gen2::generate(){
	w1 = (48271 * s) % 2147483647UL;
	w2 = (40692 * s2) % 2147483399UL;
	val = ((w1 - w2) % 2147483647UL) % this->range() + b;
}
void gen2::pokaz(){
	cout << w1 << "  " << w2 << endl;
}