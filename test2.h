#ifndef TEST2_H
#define TEST2_H

#include "test.h"

class test2 : public test
{
public:
    // \brief Metoda czysto wirtualna uruchamiaj¹ca test
    void startTest();

    // \brief Konstruktor bezparametrowy
    test2();

    // \brief Konstruktor parametrowy
    //
    // \param _genptr - wartoœæ któr¹ przyjmie pole genptr
    // \param _numofvals - wartoœæ któr¹ przyjmie pole numofvals
    test2(genM* _genptr, int _numofvals);

    // \brief Metoda czysto wirtualna wypisuj¹ca wynik testu
    //
    // \param output - referencja do strumienia, na który zostanie wypisany wynik
    void view(std::ostream& output);
};

#endif