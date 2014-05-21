#include "gen1.h"
#include <iostream>
#include <time.h>

using namespace std;

gen1::gen1(){}
gen1::gen1(int _b, int _e){
	begin(_b);
	end(_e);
	seed(time(NULL));
	srand(s);
}
gen1::~gen1(){}
void gen1::generate(){
	val = (rand() % range()) + b;
}
int gen1::getval(){
	return val;
}
void gen1::seed(int _s){
	s = _s;
}
int gen1::getseed(){
	return s;
}
void gen1::begin(int _b){
	b = _b;
}
int gen1::getbegin(){
	return b;
}
void gen1::end(int _e){
	e = _e;
}
int gen1::getend(){
	return e;
}
int gen1::range(){
	return e - b + 1;
}
void gen1::show(ostream& output) {
	output << getval();
}