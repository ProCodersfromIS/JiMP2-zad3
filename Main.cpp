#include <iostream>
#include <fstream>
#include <string>
// ----------------------------------

#include "test.h"
#include "test1.h"
#include "test2.h"
#include "test3.h"
#include "genM.h"
#include "gen1.h"
#include "gen2.h"
#include "gen3.h"
// ------------------------------------

using namespace std;
// -----------------------------------

//funkcja pomocnicza wypisuj¹ca tego samego stringa na dwa strumienie
void write(ostream& _streamA, ostream& _streamB, string tobeprinted);

int main()
{
    genM* genptr[3] = { new gen1(0, 100), new gen2(0, 100), new gen3(0,100) };
    test* testptr[3] = { new test1(genptr[0], 100000), new test2(genptr[1], 100000), new test3(genptr[2], 1000) };
    ofstream result;
    result.open("wynik.txt");

    //wypisanie po 10 liczb z ka¿dego generatora
    write(result, cout, "Generacja przykladowych 10 liczb:\n\n");
    for (int j = 0; j < 3; ++j)
    {
        write(result, cout, genptr[j]->name());
        write(result, cout, "\n");
        for (int i = 0; i < 10; ++i)
        {
            genptr[j]->generate();
            genptr[j]->show(cout);
            genptr[j]->show(result);
            write(result, cout, " ");
        }
        write(result, cout, "\n");
        genptr[j]->setend(1000);
    }

   //w³aœciwe testy z wykorzystaniem klas testuj¹cych
   write(result, cout, "\n\nTesty generatorow:\n\n");
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            testptr[j]->setgen(genptr[i]);
            testptr[j]->startTest();
            testptr[j]->view(cout);
            testptr[j]->view(result);
        }
        write(result, cout, "\n");
    }

    result.close();
}

void write(ostream& _streamA, ostream& _streamB, string tobeprinted)
{
    _streamA << tobeprinted;
    _streamB << tobeprinted;
}