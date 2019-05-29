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

        void imprime(); //OK PASS
        void imprimeReverso();
};