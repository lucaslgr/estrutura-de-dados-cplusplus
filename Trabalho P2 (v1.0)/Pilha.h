#include "No.h"
#include <iostream>

using namespace std;

class Pilha
{
private:
    No *topo;
    int n;

public:
    Pilha(/* args */);
    ~Pilha();

    //Verifica se a pilha está vazia
    bool verificaPilhaVazia();
    //Empilha um No na pilha
    void empilhar(int val);
    //Desempilha um No da Pilha
    void desempilhar();
    //Retorna o No do topo
    No *busca();
    //Retorna o tamanho da pilha
    int getTam();
};