#include "NoDuplo.h"
#include "ListaDupla.h"
#include <iostream>

using namespace std;

int main()
{
    ListaDupla *ld1 = new ListaDupla();

    ld1->insereInicio(20);
    ld1->insereInicio(30);
    ld1->insereInicio(29);

    ld1->insereFinal(11);
    ld1->insereFinal(22);
    ld1->insereFinal(33);

    ld1->imprimeReverso();
    ld1->imprimeDireto();

    ld1->removeInicio();
    ld1->removeFinal();

    ld1->imprimeReverso();
    ld1->imprimeDireto();

    ld1->removeInicio();
    ld1->removeFinal();

    ld1->imprimeReverso();
    ld1->imprimeDireto();
    
    if (ld1->busca(20) == 1)
    {
        cout << "Encontrado" << endl;
    }
    else
    {
        cout << "NAO Encontrado" << endl;
    }
    

    return 0;
}