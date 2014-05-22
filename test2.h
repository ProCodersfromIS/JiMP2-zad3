/**
* \file test2.h
* \author Beata Gie³baga & Kamil Dawidów
* \date 21.05.2014
* \brief Plik zawiera deklaracjê klasy test2
*/

#ifndef TEST2_H
#define TEST2_H
// -------------------------

#include "test.h"
// -------------------------

/**
* \class test2
* \author Beata Gie³baga & Kamil Dawidów
* \date 21.05.2014
* \brief Klasa bada generatory liczb losowych poprzez porównanie œredniej wartoœci wylosowanych liczb ze œrodkiem dobranego przedzia³u z którego generator losuje liczbê
*/
class test2 : public test
{
private:
    long mean; ///< œrednia wylosowanych wartoœci
public:
    // \brief Metoda uruchamiaj¹ca test
    void startTest();

    // \brief Konstruktor bezparametrowy
    test2();

    // \brief Konstruktor parametrowy
    //
    // \param _genptr - wartoœæ któr¹ przyjmie pole genptr
    // \param _numofvals - wartoœæ któr¹ przyjmie pole numofvals
    test2(genM* _genptr, int _numofvals);

    // \brief Metoda wypisuj¹ca wynik testu
    //
    // \param output - referencja do strumienia, na który zostanie wypisany wynik
    void view(std::ostream& output);
};

#endif