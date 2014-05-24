/**
* \file test3.h
* \author Beata Gie³baga & Kamil Dawidów
* \date 21.05.2014
* \brief Plik zawiera deklaracjê klasy test3
*/

#ifndef TEST3_H
#define TEST3_H
// -------------------------

#include "test.h"
// -------------------------

/**
* \class test3
* \author Beata Gie³baga & Kamil Dawidów
* \date 21.05.2014
* \brief Klasa bada generatory liczb losowych poprzez analizê iloœci zer i jedynek w postaci binarnej liczby
*/
class test3 : public test
{
private:
    long zeros; ///< iloœæ zer w sprawdzanych liczbach
    long ones; ///< iloœæ jedynek w sprawdzanych liczbach
public:
    // \brief Metoda uruchamiaj¹ca test
    void startTest();

    // \brief Konstruktor bezparametrowy
    test3();

    // \brief Konstruktor parametrowy
    //
    // \param _genptr - wartoœæ któr¹ przyjmie pole genptr
    // \param _numofvals - wartoœæ któr¹ przyjmie pole numofvals
    test3(genM* _genptr, int _numofvals);

    // \brief Metoda wypisuj¹ca wynik testu
    //
    // \param output - referencja do strumienia, na który zostanie wypisany wynik
    void view(std::ostream& output);
};

#endif