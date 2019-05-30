/*
    Imprimir uma lista simplesmente encadeada de trás para frente
*/

#include "No.h"
#include "ListaEncad.h"
#include <iostream>

using namespace std;

int main()
{
    ListaEncad *l1 = new ListaEncad();
    ListaEncad *l2 = new ListaEncad();
    
    l1->insereInicio(20);
    l1->insereInicio(30);
    l1->insereInicio(10);
    l1->insereFinal(30);
    l1->insereFinal(17);

    l1->imprime();


    No *p = l1->primeiro;
    while (p != NULL)
    {
        l2->insereInicio(p->getInfo());
        p = p->getProx();
    }

    //Imprimindo a lista
    cout << "Imprimindo Reversamente! " << endl;
    No *p1 = l2->primeiro;
    while (p1 != NULL)
    {
        cout << p1->getInfo() << " ";
        p1 = p1->getProx();
    }
    return 0;
}