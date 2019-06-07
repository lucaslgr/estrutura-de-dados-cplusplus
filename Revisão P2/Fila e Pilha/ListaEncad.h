#pragma once
#include "No.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

class ListaEncad
{
    private:
        //Atributos do descritor
        No *primeiro; //Ponteiro para o primeiro No da lista
        No *ultimo;   //Ponteiro para o ultimo No da lista
        int n;  //Numero de elementos na lista

    public:
        ListaEncad(/* args */);
        ~ListaEncad();
        void insereFinal(int val);
        void insereInicio(int val);
        void inserePosK(int k, int val);

        void insereOrdenado(int val);

        void removeFinal();
        void removeInicio();
        void removePosK(int k);

        int getNumElementos();
        void imprime();
};