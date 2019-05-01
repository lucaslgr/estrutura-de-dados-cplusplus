#pragma once
#include <iostream>

using namespace std;

class No
{
    private:
        int info;
        No *prox;

    public:
        No();
        No(int val);
        ~No();
        
        int getInfo();
        No* getProx();
        void setInfo(int val);
        void setProx(No *prox);
};