#ifndef TEST2_H
#define TEST2_H

#include "test.h"

class test2 : public test
{
public:
    // \brief Metoda czysto wirtualna uruchamiaj�ca test
    void startTest();

    // \brief Metoda czysto wirtualna wypisuj�ca wynik testu
    //
    // \param output - referencja do strumienia, na kt�ry zostanie wypisany wynik
    void view(std::ostream& output);
};

#endif