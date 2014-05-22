#include <iostream>
#include <fstream>
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

void ftest(genM* genptr, test* testptr, int begin, int end, int numofvals);

int main()
{
    genM* genptr[3] = { new gen1(0, 100), new gen2(0, 100), new gen3(0,100) };
    test* testptr[3] = { new test1(genptr[0], 1000), new test2(genptr[1], 1000), new test3(genptr[2], 1000) };
    ofstream result;
    result.open("wynik.txt");

    //wypisanie 10 liczb z ka¿dego generatora
    for (int j = 0; j < 3; ++j)
    {
        cout << "Generator no " << j + 1 << endl;
        result << "Generator no " << j + 1 << endl;
        for (int i = 0; i < 10; ++i)
        {
            genptr[j]->generate();
            genptr[j]->show(cout);
            genptr[j]->show(result);
            cout << " ";
            result << " ";
        }
        cout << endl;
        result << endl;
        genptr[j]->end(10000);
    }

    //w³aœciwe testy z wykorzystaniem klas testuj¹cych
    cout << "\nTest generatorow:" << endl;
    for (int i = 0; i < 3; ++i)
    {
        cout << "\nGenerator no " << i + 1 << endl;
        for (int j = 0; j < 3; ++j)
        {
            testptr[j]->setgen(genptr[i]);
            testptr[j]->startTest();
            testptr[j]->view(cout);
        }
    }
}