#include "NoInteiro.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

class ListaInteiro
{
    private:
        NoInteiro *primeiro;

    public:
        ListaInteiro();
        ~ListaInteiro();
        void insereInicio(int val);
        bool busca(int val);
        void imprime();
        bool removePorValor(int val);
};
