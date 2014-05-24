/**
* \file test1.cpp
* \author Kamil Dawidów
* \date 21.05.2014
* \brief Plik zawiera definicje metod klasy test1
*/

#include <iostream>
// -----------------------------------------------

#include "test1.h"
// -----------------------------------------------

using namespace std;
//------------------------------------------------

test1::test1()
{
    genptr = nullptr;
    numofvals = 0;
}
// -----------------------------------------------

test1::test1(genM* _genptr, int _numofvals)
{
    genptr = _genptr;
    numofvals = _numofvals;
}
// -----------------------------------------------

void test1::startTest()
{
    zeroes = 0;
    ones = 0;
    for (int i = 0; i < numofvals; ++i)
    {
        genptr->generate();
        if (genptr->getval() % 2 > 0)
            ++ones;
        else
            ++zeroes;
    }
}
// ----------------------------------------------------------------------------

void test1::view(ostream& output)
{
    output << genptr->name() << ", test parzystosci liczb" <<
        "\n  Ilosc liczb parzystych: " << zeroes <<
        "\n  Ilosc liczb nieparzystych: " << ones << "\n";
}
// ----------------------------------------------------------------------------