#include <iostream>
// -----------------------------------------------

#include "test3.h"
// -----------------------------------------------

using namespace std;
//------------------------------------------------

test3::test3()
{
    genptr = nullptr;
    numofvals = 0;
}
// -----------------------------------------------

test3::test3(genM* _genptr, int _numofvals)
{
    genptr = _genptr;
    numofvals = _numofvals;
}
// -----------------------------------------------

void test3::startTest()
{
    int val;
    zeros = 0;
    ones = 0;
    for (int i = 0; i < numofvals; ++i)
    {
        genptr->generate();
        val = genptr->getval();
        while (val > 0)
        {
            if (val % 2 == 1)
                ++ones;
            else
                ++zeros;
            val /= 2;
        }
    }
}
// --------------------------------------------------

void test3::view(ostream& output)
{
    output << genptr->name() << ", test reprezentacji binarnej liczb" <<
        "\n  Laczna ilosc zer w liczbach: " << zeros <<
        "\n  Laczna ilosc jedynek w liczbach: " << ones << "\n";
}
// ----------------------------------------------------------------------------