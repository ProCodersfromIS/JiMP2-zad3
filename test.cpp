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