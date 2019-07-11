#ifndef LISTAENCAD_H
#define LISTAENCAD_H
#include "No.h"
#include <iostream>

using namespace std;

class ListaEncad
{
    private:
        No* primeiro;

    public:
        ListaEncad();
        virtual ~ListaEncad();
        void insereFinal(int val);
        void removeInicio();
        void removeFinal();

        //Retorna o primeiro No
        No* getPrimeiro();

        //Remove a PRIMEIRA OCORRENCIA que encontrar do valor passado como parametro
        void removePorValor(int val);

        //Funcao pedida na prova, remove TODAS AS OCORRENCIAS
        void removeTodosPorValor(int val);
        void imprime();
};

#endif // LISTAENCAD_H
