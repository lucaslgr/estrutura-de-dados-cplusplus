#pragma once
#include "No.h"
#include <iostream>

using namespace std;

class PilhaEncad
{
    private:
        No *topo; // ou ultimo
    public:
        PilhaEncad(/* args */);
        ~PilhaEncad();
        bool vazia();
        void empilhar(int val);
        void desempilhar();
        bool busca(int val);
        void imprime();
};