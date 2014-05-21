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
#include "gen2.h"
//#include "gen3.h"
// ------------------------------------

using namespace std;
// -----------------------------------

void ftest(genM* genptr, test* testptr, int begin, int end, int numofvals);

int main()
{
    //ustawienie przed pierwszym testem
    genM* genptr = new gen1(0, 100000);
    test* test1ptr = new test1(genptr, 10000);
    test* test2ptr = new test2(genptr, 10000);
    test* test3ptr = new test3(genptr, 10000);

    //test pierwszego generatora
    cout << "Test pierwszego generatora\n" << endl;

    test1ptr->startTest();
    test1ptr->view(cout);
    cout << endl;

    test2ptr->startTest();
    test2ptr->view(cout);
    cout << endl;

    test3ptr->startTest();
    test3ptr->view(cout);
    cout << endl;

    //przestawienie przed drugim testem
    delete genptr;
    genptr = new gen2(0, 100000);
    test1ptr->setgen(genptr);
    test2ptr->setgen(genptr);
    test3ptr->setgen(genptr);

    //test drugiego generatora
    cout << "\nTest drugiego generatora\n" << endl;

    test1ptr->startTest();
    test1ptr->view(cout);
    cout << endl;

    test2ptr->startTest();
    test2ptr->view(cout);
    cout << endl;

    test3ptr->startTest();
    test3ptr->view(cout);
    cout << endl;

    /*
    //przestawienie przed trzecim testem
    delete genptr;
    genptr = new gen3(0, 10000);
    test1ptr->setgen(genptr);
    test2ptr->setgen(genptr);
    test3ptr->setgen(genptr);

    //test trzeciego generatora
    cout << "\nTest trzeciego generatora\n" << endl;

    test1ptr->startTest();
    test1ptr->view(cout);
    cout << endl;

    test2ptr->startTest();
    test2ptr->view(cout);
    cout << endl;

    test3ptr->startTest();
    test3ptr->view(cout);
    cout << endl;
    */
}