/**
* \file test.h
* \author Kamil Dawidów
* \date 21.05.2014
* \brief Plik zawiera deklaracjê klasy abstrakcyjnej test
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
* \author Kamil Dawidów
* \date 21.05.2014
* \brief Klasa abstrakcyjna, s³u¿y do badania generatorów liczb losowych
*/
class test
{
protected:
    genM* genptr; ///< wskaŸnik do obiektu generatora
    int numofvals; ///< iloœæ liczb, na których zostanie przeprowadzony test

public:
    // \brief Konstruktor bezparametrowy
    test();

    // \brief Konstruktor parametrowy
    //
    // \param _genptr - wartoœæ któr¹ przyjmie pole genptr
    // \param _numofvals - wartoœæ któr¹ przyjmie pole numofvals
    test(genM* _genptr, int _numofvals);

    // \brief Metoda ustawiaj¹ca generator
    // 
    // \param _genptr - nowa wartoœæ pola genptr
    void setgen(genM* _genptr);

    // \brief Metoda czysto wirtualna uruchamiaj¹ca test
    virtual void startTest() = 0;

    // \brief Metoda zezwalaj¹ca na zmianê iloœci liczb, na których zostanie przeprowadzony test
    //
    // \param _numofvals - nowa wartoœæ pola numofvals
    void setnum(int _numofvals);

    // \brief Metoda czysto wirtualna wypisuj¹ca wynik testu
    //
    // \param output - referencja do strumienia, na który zostanie wypisany wynik
    virtual void view(std::ostream& output) = 0;
};
// -----------------------------------------------------------------------------------------------

#endif