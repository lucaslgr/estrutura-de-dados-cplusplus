#pragma once
#include <iostream>

using namespace std;

class No
{
    private:
        int info;
        No *prox;
    public:
        No(/* args */);
        No(int info);
        ~No();
        
        void setInfo(int val);
        int getInfo();

        void setProx(No *prox);
        No* getProx();
};
