#pragma once
#include "No.h"
#include <iostream>

using namespace std;

class Lista
{
    private:
        No *primeiro;

    public:
        Lista(); //PASS
        ~Lista(); //PASS

        void insereInicio(int val); //PASS
        void insereFinal(int val);//PASS

        void removeInicio(); //Dúvida aqui (Loop infinito)
        void removeFinal(); //PASS
        bool removePorValor(int val); 

        bool busca(int val);
        void imprime(); //PASS
};