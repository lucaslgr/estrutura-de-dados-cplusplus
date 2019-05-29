#pragma once
#include "NoDuplo.h"
#include <iostream>

using namespace std;

class ListaDuplaEncadCircular
{
    private:
        NoDuplo *primeiro;
        NoDuplo *ultimo;
        int n;
    public:
        ListaDuplaEncadCircular(); //OK PASS
        ~ListaDuplaEncadCircular(); //OK PASS
        void insereInicio(int val); //OK PASS
        void removeInicio();        //OK PASS

        void imprime(); //OK PASS
};