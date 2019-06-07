#pragma once
#include <iostream>

using namespace std;

class PilhaContigua
{
    private:
        int *pilha;
        int topo;
        int max;
        int n;
    public:
        PilhaContigua(int max);
        ~PilhaContigua();
        void empilhar(int val);
        void desempilhar();
        int busca();
        bool vazia();
        void imprime();
};