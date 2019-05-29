#include "NoDuplo.h"
#include "ListaDuplaEncadCircular.h"
#include <iostream>

using namespace std;

int main()
{
    ListaDuplaEncadCircular *l1 = new ListaDuplaEncadCircular();
    l1->insereInicio(20);
    l1->insereInicio(11);
    l1->insereInicio(2);

    l1->imprime();

    l1->removeInicio();

    l1->imprime();

    return 0;
}