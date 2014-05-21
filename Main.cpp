#include <iostream>
#include <time.h>
#include <iomanip>
// ----------------------------------

#include "test.h"
#include "test1.h"
#include "test2.h"
#include "test3.h"
#include "genM.h"
#include "gen1.h"
// ------------------------------------

using namespace std;
// -----------------------------------

int main()
{
    genM* genptr = new gen1(0, 10000);
    test* testptr = new test1(genptr, 100);

    testptr->startTest();
    testptr->view(cout);
    cout << endl;

}