/**
* \file test2.h
* \author Beata Gie�baga & Kamil Dawid�w
* \date 21.05.2014
* \brief Plik zawiera deklaracj� klasy test2
*/

#ifndef TEST2_H
#define TEST2_H
// -------------------------

#include "test.h"
// -------------------------

/**
* \class test2
* \author Beata Gie�baga & Kamil Dawid�w
* \date 21.05.2014
* \brief Klasa bada generatory liczb losowych poprzez por�wnanie �redniej warto�ci wylosowanych liczb ze �rodkiem dobranego przedzia�u z kt�rego generator losuje liczb�
*/
class test2 : public test
{
private:
    int mean; ///< �rednia wylosowanych warto�ci
public:
    // \brief Metoda czysto wirtualna uruchamiaj�ca test
    void startTest();

    // \brief Konstruktor bezparametrowy
    test2();

    // \brief Konstruktor parametrowy
    //
    // \param _genptr - warto�� kt�r� przyjmie pole genptr
    // \param _numofvals - warto�� kt�r� przyjmie pole numofvals
    test2(genM* _genptr, int _numofvals);

    // \brief Metoda czysto wirtualna wypisuj�ca wynik testu
    //
    // \param output - referencja do strumienia, na kt�ry zostanie wypisany wynik
    void view(std::ostream& output);
};

#endif