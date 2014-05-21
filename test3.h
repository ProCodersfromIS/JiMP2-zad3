#ifndef TEST3_H
#define TEST3_H

#include "test.h"

class test3 : public test
{
public:
    // \brief Metoda czysto wirtualna uruchamiaj¹ca test
    void startTest();

    // \brief Metoda czysto wirtualna wypisuj¹ca wynik testu
    //
    // \param output - referencja do strumienia, na który zostanie wypisany wynik
    void view(std::ostream& output);
};

#endif