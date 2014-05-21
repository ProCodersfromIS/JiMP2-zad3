#include "genM.h"
#include <iostream>
#include <time.h>

using namespace std;

genM::genM(){}
genM::genM(int _b, int _e){
	this->begin(_b);
	this->end(_e);
}
genM::~genM(){}
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
	output << this->getval();
}