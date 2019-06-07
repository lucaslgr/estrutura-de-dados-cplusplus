#pragma once
#include "No.h"
#include <iostream>

using namespace std;

class ListaEncad
{
    private:
        No* primeiro;
    public:
        ListaEncad();
        ~ListaEncad();

        void insereInicio(int val);
        void insereFinal(int val);
        bool busca(int val);
        void imprime();
        void removeInicio();
        void removeFinal();
        bool removePorValor(int val);
};