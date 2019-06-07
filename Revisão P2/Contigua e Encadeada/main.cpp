#include <iostream>
#include "No.h"
#include "PilhaEncad.h"
#include "PilhaContigua.h"
#define MAX 3

using namespace std;

int main()
{
    //TESTE PILHA ENCAD
    // PilhaEncad *p1 = new PilhaEncad();

    // p1->empilhar(20);
    // p1->empilhar(11);
    // p1->empilhar(5);
    


    // p1->imprime();

    // // p1->desempilhar();
    // // p1->desempilhar();    
    // // p1->imprime();

    // int x = 1;
    // if (p1->busca(x))
    // {
    //     cout << "\nO valor "<< x << " foi encontrado\n"; 
    // }
    // else
    // {
    //     cout << "\nO valor " << x << " nao foi encontrado\n";
    // }
    //FIM ->> TESTE PILHA ENCAD

    //TESTE PILHA CONTIGUA
    PilhaContigua *p1 = new PilhaContigua(MAX);

    p1->empilhar(20);
    p1->empilhar(11);
    p1->empilhar(5);

    p1->imprime();

    //FIM ->> TESTE PILHA CONTIGUA

    return 0;
}