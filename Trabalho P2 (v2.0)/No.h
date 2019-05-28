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

        void setInfo(int val);
        void setProx(No *p);

        int getInfo();
        No* getProx();
};