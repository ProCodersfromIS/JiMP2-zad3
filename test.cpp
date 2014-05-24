/**
* \file test.cpp
* \author Kamil Dawidów
* \date 21.05.2014
* \brief Plik zawiera definicje metod klasy abstrakcyjnej test
*/

#include "test.h"
// -----------------------------------------------

test::test()
{
    genptr = nullptr;
    numofvals = 0;
}
// -----------------------------------------------

test::test(genM* _genptr, int _numofvals)
{
    genptr = _genptr;
    numofvals = _numofvals;
}
// -----------------------------------------------

void test::setgen(genM* _genptr)
{
    genptr = _genptr;
}
// -----------------------------------------------

void test::setnum(int _numofvals)
{
    numofvals = _numofvals;
}
// -----------------------------------------------