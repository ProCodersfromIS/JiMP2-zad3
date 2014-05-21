#ifndef TEST1_H
#define TEST1_H

#include "test.h"

class test1 : public test
{
private:
    int zeroes; ///< Ilo�� liczb podzielnych przez 2
    int ones; ///< Ilo�� liczb niepodzielnych przez 2
public:
    // \brief Metoda czysto wirtualna uruchamiaj�ca test
    void startTest();

    // \brief Metoda czysto wirtualna wypisuj�ca wynik testu
    //
    // \param output - referencja do strumienia, na kt�ry zostanie wypisany wynik
    void view(std::ostream& output);
};

#endif
