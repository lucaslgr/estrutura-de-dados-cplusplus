#pragma once
#include <iostream>
#include "No.h"

using namespace std;

class Arvbin
{
    private:
        No* raiz;
        int nNo;
        int VarControle;
        //Others
        void inserirAux(No *raiz, int chave);
        bool buscaAux(No *raiz, int chave);

    public:
        Arvbin(); //OK
        ~Arvbin(); //OK
        void inserir(int chave); //OK
        bool busca(int chave);
        void emOrdem(No *no);
        void preOrdem(No *no);
        int numNos();
        void menor(No *no);
        No *getRaiz();
};