#pragma once
#include <iostream>

using namespace std;

class No
{
    private:
        int info; //informação
        No *prox; //ponteiro para o proximo

    public:
        No(int val);
        No(); //Construtor do nó DEFAULT
        ~No(); //Destrutor do nó
        int getInfo();
        No* getProx();
        void setInfo(int val);
        void setProx(No *p);
};