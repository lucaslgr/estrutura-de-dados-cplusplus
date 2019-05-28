#ifndef LISTA_H
#define LISTA_H

#include <No.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

class Lista
{
    public:
        Lista();
        ~Lista();
        bool vazia();
        void removeFinal();
        void insereOrdenado(int val);
        void imprime();

    protected:

    private:
        No* primeiro;
};

#endif // LISTA_H
