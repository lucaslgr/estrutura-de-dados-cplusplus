#include <iostream>
#include "FilaCircular.h"

using namespace std;

int main()
{
    FilaCircular *f1 = new FilaCircular(3);

    f1->insereFinal(20);
    f1->insereFinal(30);
    f1->insereFinal(40);

    f1->imprimeFila();

    f1->removeInicio();
    f1->insereFinal(22);
    f1->imprimeFila();

    //f1->insereFinal(15);

    return 0;
}
