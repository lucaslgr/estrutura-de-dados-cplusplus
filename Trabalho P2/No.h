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

    void setProx(No *prox);
    void setInfo(int info);

    No *getProx();
    int getInfo();
};