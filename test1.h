#ifndef TEST1_H
#define TEST1_H

#include "test.h"

class test1 : public test
{
public:
    // \brief Metoda czysto wirtualna uruchamiająca test
    void startTest();

    // \brief Metoda czysto wirtualna wypisująca wynik testu
    //
    // \param output - referencja do strumienia, na który zostanie wypisany wynik
    void view(std::ostream& output);
};

#endif
