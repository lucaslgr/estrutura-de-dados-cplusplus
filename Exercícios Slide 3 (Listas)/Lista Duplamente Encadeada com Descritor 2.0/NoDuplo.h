#pragma once
#include <iostream>

using namespace std;

class NoDuplo
{
    private:
        int info;
        NoDuplo *prox;
        NoDuplo *ant;

    public:
        NoDuplo(int val);
        ~NoDuplo();
        void setInfo(int val);
        void setProx(NoDuplo *prox);
        void setAnt(NoDuplo *ant);
        int getInfo();
        NoDuplo* getProx();
        NoDuplo* getAnt();
};