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

        bool verificaPilhaVazia();
        void empilhar(int val);
        void desempilhar();
        No* busca();
        int getTam();
};