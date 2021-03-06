/**
* \file test1.h
* \author Kamil Dawid�w
* \date 21.05.2014
* \brief Plik zawiera deklaracj� klasy test1
*/

#ifndef TEST1_H
#define TEST1_H
// -------------------------

#include "test.h"
// -------------------------

/**
* \class test1
* \author Kamil Dawid�w
* \date 21.05.2014
* \brief Klasa bada generatory liczb losowych poprzez por�wnanie ilo�ci 1 i 0 w postaci binarnej wylosowanej liczby
*/
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

    // \brief Metoda uruchamiaj�ca test
    void startTest();

    // \brief Metoda wypisuj�ca wynik testu
    //
    // \param output - referencja do strumienia, na kt�ry zostanie wypisany wynik
    void view(std::ostream& output);
};

#endif
