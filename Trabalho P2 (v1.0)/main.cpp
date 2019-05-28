#include "No.h"
#include "Pilha.h"
#include "ListaEncad.h"
#include <iostream>

using namespace std;

int main()
{
    Pilha *p1 = new Pilha();
    ListaEncad *l1 = new ListaEncad();


    //p1->empilhar(6);
    p1->empilhar(5);
    p1->empilhar(7);
    p1->empilhar(1);
    p1->empilhar(11);
    p1->empilhar(8);
    p1->empilhar(31);
    p1->empilhar(9);

    cout <<"\nTamanho da pilha: " << p1->getTam() << endl;
    while(p1->getTam() != 0)
    {
        //cout << "Passou aqui" << endl;
        //cout << p1->busca()->getInfo() << endl;
        l1->insereOrdenado(p1->busca()->getInfo());
        p1->desempilhar();
    }


    l1->imprimeLista();

    return 0;
}