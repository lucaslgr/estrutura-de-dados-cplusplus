#include "FilaContCircular.h"
#include <iostream>

using namespace std;

int main()
{
    FilaContCircular *c1 = new FilaContCircular(3);
    c1->insereFinal(20);
    c1->insereFinal(23);
    c1->insereFinal(12);

    c1->removeInicio();
    c1->removeInicio();
    c1->removeInicio();

    c1->insereFinal(23);
    c1->insereFinal(12);

    c1->removeInicio();
    
    c1->imprimir();
    return 0;
}