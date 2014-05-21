/**
* \file aghTest.h
* \author Beata Gie³baga & Kamil Dawidów
* \date 21.05.2014
* \brief Plik zawiera deklaracjê klasy abstrakcyjnej test_parent
*/

#ifndef TEST_PARENT_H
#define TEST_PARENT_H

#include "genM.h"

class test_parent
{
protected:
    genM* gen_ptr; ///< wskaŸnik do obiektu generatora
    int num_of_vals; ///< iloœæ liczb, na których zostanie przeprowadzony test

public:
    test_parent();
    ~test_parent();
};

#endif