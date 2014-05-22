#include "genM.h"
#include "gen3.h"
#include <iostream>
#include <time.h>

using namespace std;

gen3::gen3(){}
gen3::gen3(int _b, int _e) : genM(_b, _e) {
	s = time(NULL);
	this->model(100);
	this->multiplier(40692);
}
gen3::~gen3(){}
void gen3::generate(){
	val = ((((mult ^ s) % mod) % this->range()) + b);
	this->seed(val);
}
void gen3::model(int _mod){
	if (_mod > 0){
		mod = _mod;
	}
	else cout << "Mod nie mo¿e byæ ujemny" << endl;
}
int gen3::getmodel(){
	return mod;
}
void gen3::multiplier(int _mult){
	if (mod > 0){
		mult = _mult;
	}
}
int gen3::getmultiplier(){
	return mult;
}