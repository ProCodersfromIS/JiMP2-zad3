#include <iostream>
// -----------------------------------------------

#include "test1.h"
// -----------------------------------------------

using namespace std;
//------------------------------------------------

void test1::startTest()
{
    int zeroes = 0;
    int ones = 0;
    for (int i = 0; i < numofvals; ++i)
    {
        genptr->generate();
        if (genptr->getval() % 2 == 1)
            ++ones;
        else
            ++zeroes;
    }
}
// ----------------------------------------------------------------------------

void test1::view(ostream& output)
{
    output << "Wynik testu:\n Ilosc liczb podzielnych przez 2: " << zeroes << "\n Ilosc liczb niepodzielnych przez 2: " << ones;
}
// ----------------------------------------------------------------------------