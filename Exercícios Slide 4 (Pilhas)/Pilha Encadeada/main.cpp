#include "No.h"
#include "Pilha.h"
#include <iostream>

using namespace std;

int main()
{
    //Testando no.cpp
    // No *n1 = new No(20);

    // cout << n1->getInfo() << endl;
    // cout << n1->getProx() << endl;

    Pilha *p1 = new Pilha();

    p1->empilhar(20);
    p1->empilhar(30);
    
    //Imprimindo a pilha toda
    cout << "\n************************** PILHA ****************************" << endl;
    No *p = p1->busca();
    for (int i = 0; i <= p1->getTam(); i++)
    {
        cout << p->getInfo() << " ";
        p = p->getProx();
    }
    cout << "\n\n";

    if (p1->verificaPilhaVazia())
    {
        cout << "Lista vazia!" << endl;
    }
    else
    {
        cout << "Lista NAO vazia! " << endl;
    }

    p1->desempilhar();
    p1->desempilhar();
    p1->desempilhar();

    //Imprimindo a pilha toda
    cout << "\n************************** PILHA ****************************" << endl;
    p = p1->busca();
    for (int i = 0; i <= p1->getTam(); i++)
    {
        cout << p->getInfo() << " ";
        p = p->getProx();
    }
    cout << "\n\n";


    if (p1->verificaPilhaVazia())
    {
        cout << "Lista vazia!" << endl;
    }
    else
    {
        cout << "Lista NAO vazia! " << endl;
    }
    
    return 0;
}