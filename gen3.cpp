/**
*\file gen3.cpp
*\author Beata Gie³baga
*\date 23.05.2014
*\brief Definicja klasy gen3 - generator Mersenne Twister
*/
// -----------------------------------------------------------------------------

#include "genM.h"
#include "gen3.h"
#include "gen1.h"
#include "gen2.h"
#include <iostream>
#include <time.h>

using namespace std;

// -----------------------------------------------------------------------------

int gen3::a = 0;
gen3::gen3() : genM(0,1) {
	val = 0;
	for (int i = 0; i < 624; i++)
		state[i] = 0;
	genName = "Generator 3 - Mersenne Twister";
}
gen3::gen3(int _b, int _e) : genM(_b,_e){
	setseed2(time(NULL));
	genName = "Generator 3 - Mersenne Twister";
}
void gen3::setgen(){
	state[0] = s;
	for (int i = 1; i < 624; i++){
		state[i] = (1812433253UL * (state[i - 1] ^ (state[i - 1] >> 30)) + i) % 4294967296UL;
	}
}
void gen3::genstate(){
	for (int i = 1; i < 624; i++){
		unsigned int temp = ((state[i] >> 31) % 2) + (state[(i + 1) % 624]) % 2147483648UL;
		state[i] = state[(i + 397) % 624] ^ (temp >> 1);
		if ((temp % 2) == 1)
			state[i] = state[i] ^ 2567483615UL;
	}
}
void gen3::generate(){
	if (a == 0)
		genstate();
	unsigned int temp = state[a];
	temp = temp ^ (temp >> 11);
	temp = temp ^ ((temp << 7) & 2636928640UL);
	temp = temp ^ ((temp << 15) & 4022730752UL);
	temp = temp ^ (temp >> 18);
	a = (a + 1) % 624;
	val = (temp % range()) + b;
}
void gen3::setseed2(int _s){
	s = _s;
	setgen();
}
// -----------------------------------------------------------------------------