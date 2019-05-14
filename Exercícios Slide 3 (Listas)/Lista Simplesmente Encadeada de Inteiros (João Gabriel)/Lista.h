#ifndef LISTA_H
#define LISTA_H

#include "No.h"

#include <string.h>
#include <iostream>

class Lista
{
    public:
        Lista();
        ~Lista();
        void insereInicio(int val);
        void insereFinal(int val);
        bool busca(int val);
        void imprime();
        void removeInicio();
        void removeFinal();
        bool removePorValor(int val);
    private:
        No* primeiro;
};

#endif // LISTA_H
