#pragma once
#include <iostream>
#include "No.h"
#include <stdlib.h>

using namespace std;

class Pilha
{
    private:
        No* topo;
    
    public:
        Pilha();
        ~Pilha();

        //Verifica se a pilha está vazia
        bool PilhaVazia();

        //Empilha um elemento em cima do topo
        void empilhar(int val);

        //Remove um elemento do topo
        void desempilhar();

        //Retorna o no do topo
        No* busca();

        //Retorna o tamanho da pilha
        int getTam();
};