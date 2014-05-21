/**
* \file test.h
* \author Beata Gie�baga & Kamil Dawid�w
* \date 21.05.2014
* \brief Plik zawiera deklaracj� klasy test1
*/

#ifndef TEST1_H
#define TEST1_H

#include "test.h"

class test1 : public test
{
private:
    int zeroes; ///< Ilo�� liczb podzielnych przez 2
    int ones; ///< Ilo�� liczb niepodzielnych przez 2
public:
    // \brief Konstruktor bezparametrowy
    test1();

    // \brief Konstruktor parametrowy
    //
    // \param _genptr - warto�� kt�r� przyjmie pole genptr
    // \param _numofvals - warto�� kt�r� przyjmie pole numofvals
    test1(genM* _genptr, int _numofvals);

    // \brief Metoda czysto wirtualna uruchamiaj�ca test
    void startTest();

    // \brief Metoda czysto wirtualna wypisuj�ca wynik testu
    //
    // \param output - referencja do strumienia, na kt�ry zostanie wypisany wynik
    void view(std::ostream& output);
};

#endif
