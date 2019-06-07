#include "NoDuplo.h"
#include "ListaEncadDupla.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    system("cls");
    ListaEncadDupla *l1 = new ListaEncadDupla();
    l1->insereInicio(20);
    l1->insereInicio(11);
    l1->insereInicio(22);
    l1->insereFinal(101);
    l1->insereFinal(55);
    l1->insereFinal(66);
    
    int x = 1;
    if (l1->busca(x))
    {
        cout << "Encontrou! o numero:" << x << endl; 
    }
    else
    {
        cout << "Nao encontrou o numero: !" << x << endl;
    }
    
    
    l1->imprimeReverso();

    return 0;
}