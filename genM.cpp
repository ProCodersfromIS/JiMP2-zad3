/**
*\file genM.cpp
*\author Beata Gie³baga
*\date 23.05.2014
*\brief Deklaracja klasy abstrakcyjnej genM
*/
// -----------------------------------------------------------------------------

#include "genM.h"
#include <iostream>
#include <time.h>

using namespace std;

// -----------------------------------------------------------------------------

genM::genM(){}
genM::genM(int _b, int _e){
	this->setbegin(_b);
	this->setend(_e);
}
genM::~genM(){}
int genM::getval(){
	return val;
}
void genM::setseed(int _s){
	s = _s;
}
int genM::getseed(){
	return s;
}
void genM::setbegin(int _b){
	b = _b;
}
int genM::getbegin(){
	return b;
}
void genM::setend(int _e){
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
void genM::getgenName(ostream& output){
	output << endl << genName << endl;
}
char* genM::name(){
	return genName;
}
// -----------------------------------------------------------------------------