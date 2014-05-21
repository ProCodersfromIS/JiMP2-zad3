#include "genM.h"
#include <iostream>
#include <time.h>

using namespace std;

genM::genM(){}
genM::genM(int _b, int _e){
	begin(_b);
	end(_e);
}
genM::~genM(){}
void genM::generate(){
	val = (rand() % range()) + b;
}
int genM::getval(){
	return val;
}
void genM::seed(int _s){
	s = _s;
}
int genM::getseed(){
	return s;
}
void genM::begin(int _b){
	b = _b;
}
int genM::getbegin(){
	return b;
}
void genM::end(int _e){
	e = _e;
}
int genM::getend(){
	return e;
}
int genM::range(){
	return e - b + 1;
}
void genM::show(ostream& output) {
	output << getval();
}