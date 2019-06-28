#pragma once
#include <iostream>

using namespace std;

class No
{
    private:
        No *esq, *dir;
        int chave;
    public:
        No(int chave); //OK
        ~No();         //OK
        void setEsq(No *no); //OK
        void setDir(No *no); //OK
        void setInfo(int c); //OK
        No *getEsq();        //OK
        No *getDir();        //OK
        int getInfo();       //OK
};