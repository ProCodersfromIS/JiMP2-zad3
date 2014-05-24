/**
* \file test.h
* \author Kamil Dawid�w
* \date 21.05.2014
* \brief Plik zawiera deklaracj� klasy abstrakcyjnej test
*/

#ifndef test_H
#define test_H
// --------------

#include <ostream>
// -------------------------

#include "genM.h"
// -------------------------

/**
* \class test
* \author Kamil Dawid�w
* \date 21.05.2014
* \brief Klasa abstrakcyjna, s�u�y do badania generator�w liczb losowych
*/
class test
{
protected:
    genM* genptr; ///< wska�nik do obiektu generatora
    int numofvals; ///< ilo�� liczb, na kt�rych zostanie przeprowadzony test

public:
    // \brief Konstruktor bezparametrowy
    test();

    // \brief Konstruktor parametrowy
    //
    // \param _genptr - warto�� kt�r� przyjmie pole genptr
    // \param _numofvals - warto�� kt�r� przyjmie pole numofvals
    test(genM* _genptr, int _numofvals);

    // \brief Metoda ustawiaj�ca generator
    // 
    // \param _genptr - nowa warto�� pola genptr
    void setgen(genM* _genptr);

    // \brief Metoda czysto wirtualna uruchamiaj�ca test
    virtual void startTest() = 0;

    // \brief Metoda zezwalaj�ca na zmian� ilo�ci liczb, na kt�rych zostanie przeprowadzony test
    //
    // \param _numofvals - nowa warto�� pola numofvals
    void setnum(int _numofvals);

    // \brief Metoda czysto wirtualna wypisuj�ca wynik testu
    //
    // \param output - referencja do strumienia, na kt�ry zostanie wypisany wynik
    virtual void view(std::ostream& output) = 0;
};
// -----------------------------------------------------------------------------------------------

#endif