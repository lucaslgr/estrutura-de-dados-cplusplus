#pragma once
#include <iostream>

using namespace std;

class NoDuplo
{
    private:
        int info;
        NoDuplo *ant;
        NoDuplo *prox;
    public:
        NoDuplo(int val);
        ~NoDuplo();
        void setAnt(NoDuplo *ant);
        void setProx(NoDuplo *prox);
        void setInfo(int val);
        NoDuplo* getAnt();
        NoDuplo *getProx();
        int getInfo();
};