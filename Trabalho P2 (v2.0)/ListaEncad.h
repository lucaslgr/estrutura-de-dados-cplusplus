#pragma once
#include "No.h"
#include <stdlib.h>
#include <iostream>

using namespace std;

class ListaEncad
{
    private:
        No* primeiro;
    public:
        ListaEncad(/* args */);
        ~ListaEncad();

        //Retorna true or false para lista vazia
        bool ListaVazia();
        void insereInicio(int val);
        void insereFinal(int val);
        void insereOrdenado(int val);
        void removeFinal();
        void imprimirLista();
};