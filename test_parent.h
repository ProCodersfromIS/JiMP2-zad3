/**
* \file aghTest.h
* \author Beata Gie�baga & Kamil Dawid�w
* \date 21.05.2014
* \brief Plik zawiera deklaracj� klasy abstrakcyjnej test_parent
*/

#ifndef TEST_PARENT_H
#define TEST_PARENT_H

#include "genM.h"

class test_parent
{
protected:
    genM* gen_ptr; ///< wska�nik do obiektu generatora
    int num_of_vals; ///< ilo�� liczb, na kt�rych zostanie przeprowadzony test

public:
    test_parent();
    ~test_parent();
};

#endif