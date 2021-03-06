/**
* \file test3.h
* \author Kamil Dawid�w
* \date 21.05.2014
* \brief Plik zawiera deklaracj� klasy test3
*/

#ifndef TEST3_H
#define TEST3_H
// -------------------------

#include "test.h"
// -------------------------

/**
* \class test3
* \author Kamil Dawid�w
* \date 21.05.2014
* \brief Klasa bada generatory liczb losowych poprzez analiz� ilo�ci zer i jedynek w postaci binarnej liczby
*/
class test3 : public test
{
private:
    long zeros; ///< ilo�� zer w sprawdzanych liczbach
    long ones; ///< ilo�� jedynek w sprawdzanych liczbach
public:
    // \brief Metoda uruchamiaj�ca test
    void startTest();

    // \brief Konstruktor bezparametrowy
    test3();

    // \brief Konstruktor parametrowy
    //
    // \param _genptr - warto�� kt�r� przyjmie pole genptr
    // \param _numofvals - warto�� kt�r� przyjmie pole numofvals
    test3(genM* _genptr, int _numofvals);

    // \brief Metoda wypisuj�ca wynik testu
    //
    // \param output - referencja do strumienia, na kt�ry zostanie wypisany wynik
    void view(std::ostream& output);
};

#endif