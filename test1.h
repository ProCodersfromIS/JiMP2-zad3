/**
* \file test.h
* \author Beata Gie³baga & Kamil Dawidów
* \date 21.05.2014
* \brief Plik zawiera deklaracjê klasy test1
*/

#ifndef TEST1_H
#define TEST1_H

#include "test.h"

class test1 : public test
{
private:
    int zeroes; ///< Iloœæ liczb podzielnych przez 2
    int ones; ///< Iloœæ liczb niepodzielnych przez 2
public:
    // \brief Konstruktor bezparametrowy
    test1();

    // \brief Konstruktor parametrowy
    //
    // \param _genptr - wartoœæ któr¹ przyjmie pole genptr
    // \param _numofvals - wartoœæ któr¹ przyjmie pole numofvals
    test1(genM* _genptr, int _numofvals);

    // \brief Metoda czysto wirtualna uruchamiaj¹ca test
    void startTest();

    // \brief Metoda czysto wirtualna wypisuj¹ca wynik testu
    //
    // \param output - referencja do strumienia, na który zostanie wypisany wynik
    void view(std::ostream& output);
};

#endif
