#include "No.h"
#include "ListaEncad.h"
#include <iostream>

using namespace std;

int main()
{
    ListaEncad *l1 = new ListaEncad();
    l1->insereFinal(20);
    l1->insereFinal(22);
    l1->insereFinal(33);
    l1->insereFinal(11);
    l1->imprime();
    l1->insereAposValorX(11, 1);
    l1->imprime();
}