/**
*\file gen2.cpp
*\author Beata Gie³baga
*\date 23.05.2014
*\brief Definicja klasy gen2 - generator L'Ecuyer-Fishmana
*/
// -----------------------------------------------------------------------------

#include "genM.h"
#include "gen2.h"
#include <iostream>
#include <time.h>

using namespace std;

// -----------------------------------------------------------------------------

gen2::gen2(){
	genName = "Generator 2 - L'Ecuyer-Fishmana";
}
gen2::gen2(int _b, int _e) : genM(_b, _e) {
	s = time(NULL);
	s2 = time(NULL);
	w1 = s;
	w2 = s2;
    genName = "Generator 2 - L'Ecuyer-Fishmana";
}
void gen2::setseed2(int _s2){
	s2 = _s2;
}
int gen2::getseed2(){
	return s2;
}
void gen2::generate(){
	w1 = (48271 * w1) % 2147483647UL;
	w2 = (40692 * w2) % 2147483399UL;
	val = ((w1 - w2) % 2147483647UL) % this->range() + b;
}
// -----------------------------------------------------------------------------