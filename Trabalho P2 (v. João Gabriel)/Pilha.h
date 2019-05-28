#ifndef PILHA_H
#define PILHA_H

#include <string>
#include <No.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

class Pilha
{
    public:
        Pilha();
        ~Pilha();
        void setTopo(No* p);
        No* getTopo();
        bool vazia();
        void empilha(int val);
        void desempilha();
        int busca();

    protected:

    private:
        No* topo;
};

#endif // PILHA_H
