#include "No.h"
#include "Pilha.h"
#include "ListaEncad.h"

using namespace std;

int main()
{

    //Teste da pilha
    // Pilha *p1 = new Pilha();

    // p1->empilhar(20);
    // p1->empilhar(15);
    // p1->empilhar(11);
    // // p1->desempilhar();
    // // p1->desempilhar();
    // // p1->desempilhar();
    // // p1->desempilhar();

    // cout << "Tamanho da pilha:" << p1->getTam() << endl;
    // cout << "\nImprimindo a Pilha\n" << endl;
    // int tam = p1->getTam();
    // for (int i = 0; i < tam; i++)
    // {
    //     cout << p1->busca()->getInfo() << " ";
    //     p1->desempilhar();
    // }
    // cout << "Tamanho da pilha:" <<  p1->getTam() << endl;
    //Fim do teste da pilha

    //TESTE LISTA
    // ListaEncad *l1 = new ListaEncad();
    // l1->insereInicio(20);
    // l1->insereInicio(30);
    // l1->insereInicio(33);
    // l1->imprimirLista();

    // l1->removeFinal();
    // l1->imprimirLista();

    //FIM TESTE LISTA


    Pilha *p1 = new Pilha();
    ListaEncad *l1 = new ListaEncad();

    p1->empilhar(1);
    p1->empilhar(5);
    p1->empilhar(7);
    p1->empilhar(2);
    p1->empilhar(50);
    p1->empilhar(100);
    p1->empilhar(21);

    // cout << "\nImprimindo a Pilha\n" << endl;
    // int tam = p1->getTam();
    // for (int i = 0; i < tam; i++)
    // {
    //     cout << p1->busca()->getInfo() << " ";
    //     p1->desempilhar();
    // }

    int tam = p1->getTam();
    for (int i = 0; i < tam; i++)
    {
        l1->insereOrdenado(p1->busca()->getInfo());
        p1->desempilhar();
    }

    l1->imprimirLista();
    return 0;
}