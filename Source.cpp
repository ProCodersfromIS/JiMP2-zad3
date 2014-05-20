#include "gen1.h"
#include "genM.h"
#include <iostream>
#include <time.h>

using namespace std;

int main(void) {
	gen1 tabl(10);
	tabl.seed(NULL(time));
	tabl.generate(10);
	tabl.show();

	return 0;
}