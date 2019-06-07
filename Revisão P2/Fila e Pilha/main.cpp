#include "No.h"
#include "Pilha.h"
#include "ListaEncad.h"
#include <iostream>

using namespace std;

int main()
{
    Pilha *p1 = new Pilha();
    p1->empilhar(6);
    p1->empilhar(5);
    p1->empilhar(7);
    p1->empilhar(1);

    // cout << "\nImprimindo a Pilha\n" << endl;
    // int tam = p1->getTam();
    // cout << "\nTamanho: \n" << tam << endl;
    // for (int i = 0; i < tam; i++)
    // {
    //     cout << p1->busca()->getInfo() << " ";
    //     p1->desempilhar();
    // }

    ListaEncad *l1 = new ListaEncad();

    int tam = p1->getTam();
    for (int i = 0; i < tam; i++)
    {
        // cout << "Passou aqui" << endl;
        // cout << p1->busca()->getInfo() << " " << endl;
        l1->insereOrdenado(p1->busca()->getInfo());
        p1->desempilhar();
    }
    

    l1->imprime();

    return 0;
}