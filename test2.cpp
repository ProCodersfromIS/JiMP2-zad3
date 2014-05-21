#include <iostream>
// -----------------------------------------------

#include "test2.h"
// -----------------------------------------------

using namespace std;
//------------------------------------------------

test2::test2()
{
    genptr = nullptr;
    numofvals = 0;
}
// -----------------------------------------------

test2::test2(genM* _genptr, int _numofvals)
{
    genptr = _genptr;
    numofvals = _numofvals;
}
// -----------------------------------------------

void test2::startTest()
{
    mean = 0;
    for (int i = 0; i < numofvals; ++i)
    {
        genptr->generate();
        mean += genptr->getval();
    }
    mean = mean / numofvals;
}
// ----------------------------------------------------------------------------

void test2::view(ostream& output)
{
    output << "Wynik testu 2:\n  Ilosc liczb: " << numofvals <<
        "\n  Srednia poczatku i konca zakresu: " << (genptr->getbegin() + genptr->getend())/2 <<
        "\n  Srednia wylosowanych liczb: " << mean;
}
// ----------------------------------------------------------------------------