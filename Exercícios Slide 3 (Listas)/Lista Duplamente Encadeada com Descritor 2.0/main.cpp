#include "NoDuplo.h"
#include "ListaDuplaEncad.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    ListaDuplaEncad *l1 = new ListaDuplaEncad();

    system("cls");
    l1->insereFinal(20);
    l1->insereFinal(11);
    l1->insereFinal(05);
    l1->imprime();


    l1->removeNoCentral();
    // l1->removeFinal();
    // l1->removeFinal();


    l1->imprime();
    l1->imprimeReverso();
    return 0;
}