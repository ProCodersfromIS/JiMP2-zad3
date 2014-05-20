#include "gen1.h"
#include <iostream>
#include <cstdlib>

using namespace std;

gen1::gen1(){
	tab = NULL;
	length = 0;
}
gen1::gen1(int len){
	cout << "Konstruktor ";
	length = len; 
	s = 0;
	a = 0;
	b = 0;
	z = 0;
	int* tablica;
	tablica = new int[len];
	tab = tablica;
}
gen1::~gen1(){
	remove();
}
void gen1::generate(int ile){
	cout << "generator ";
	srand(s);
	for (int i = 0; i < length; i++){
		tab[i] = (rand() % ile);
	}
}
/*void gen1::resize(int len){
	cout << "resize ";
	if (len != length){
		//remove();
		int* tablica;
		tablica = new int[len];
		tab = tablica;
	}
	else cout << "Zjeba³aœ";
}*/
void gen1::remove(){
	cout << "remove ";
	delete[] tab;
	length = 0;
	tab = NULL;
}
void gen1::seed(int _s){
	cout << "seed ";
	s = _s;
}
void gen1::range(int _a, int _b){
	a = _a;
	b = _b;
}
void gen1::other(){}
void gen1::show(){
	cout << "show ";
	for (int i = 0; i < length; i++){
		cout << tab[i] << "  ";
	}
}