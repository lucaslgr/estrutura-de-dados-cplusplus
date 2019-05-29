#pragma once
#include "NoDuplo.h"
#include <iostream>

using namespace std;

class ListaDuplaEncad
{
    private:
        NoDuplo *primeiro;
        NoDuplo *ultimo;
        int n;
    public:
        ListaDuplaEncad(); //OK PASS
        ~ListaDuplaEncad(); //OK PASS
        void insereFinal(int val); //OK PASS
        void removeFinal();        //OK PASS

        /*
        Remove o nó do meio da lista SE o TAMANHO DA LISTA FOR ÍMPAR (Exer. 6, slide 3, pag 66)
        */
        void removeNoCentral();

        void imprime(); //OK PASS
        void imprimeReverso();
};