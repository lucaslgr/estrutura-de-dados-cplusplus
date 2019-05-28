#include <iostream>
#include <Pilha.h>
#include <No.h>
#include <Lista.h>
#include <string>

using namespace std;

int main()
{
    Pilha *pilha = new Pilha();
    Lista *lista = new Lista();

    pilha->empilha(6);
    pilha->empilha(5);
    pilha->empilha(7);
    pilha->empilha(1);

    while(pilha->getTopo() != NULL){
        lista->insereOrdenado(pilha->busca());
        pilha->desempilha();
    }

    lista->imprime();
}
