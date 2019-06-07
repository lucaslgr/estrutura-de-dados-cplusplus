#pragma once
#include "NoDuplo.h"
#include <iostream>

using namespace std;

class ListaEncadDupla
{
    private:
        NoDuplo *primeiro;
        NoDuplo *ultimo;
        int n;
    public:
        ListaEncadDupla(/* args */);
        ~ListaEncadDupla();
        bool busca(int val);
        void insereInicio(int val);
        void insereFinal(int val);

        void eliminaInicio();
        void eliminaFinal();
        void imprimeReverso();
};