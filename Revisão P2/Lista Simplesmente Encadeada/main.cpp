#include "No.h"
#include "ListaEncad.h"
#include <iostream>

using namespace std;

int main()
{
    ListaEncad *l1 = new ListaEncad();

    l1->insereInicio(20);
    l1->insereInicio(22);
    l1->insereFinal(11);
    l1->insereFinal(5);
    l1->imprime();

    l1->removeInicio();
    l1->removeFinal();
    l1->imprime();

    l1->insereInicio(111);
    l1->insereFinal(211);
    l1->imprime();


    l1->removePorValor(111);
    l1->imprime();

    return 0;
}