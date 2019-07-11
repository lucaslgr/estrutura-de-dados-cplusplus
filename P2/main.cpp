#include <iostream>
#include "No.h"
#include "ListaEncad.h"

using namespace std;

int main()
{
    ListaEncad *l1 = new ListaEncad();

    l1->insereFinal(4);
    l1->insereFinal(5);
    l1->insereFinal(2);
    l1->insereFinal(4);
    l1->insereFinal(9);
    l1->insereFinal(4);
    l1->insereFinal(7);
    l1->insereFinal(4);
    l1->imprime(); //Só para teste

    l1->removeTodosPorValor(4);
    l1->imprime();

    ListaEncad *l2 = new ListaEncad();

    No* p1 = l1->getPrimeiro();
    while(p1!=NULL)
    {
        if(p1->getInfo()%2 != 0) //É impar
        {
            l2->insereFinal(p1->getInfo());
        }
        p1 = p1->getProx();
    }

    l2->imprime();

    delete l1;
    delete l2;

    return 0;
}
