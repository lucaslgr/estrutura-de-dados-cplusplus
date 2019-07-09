#pragma once
#include <iostream>

using namespace std;

class NoInteiro
{
private:
    int info; //informação
    NoInteiro *prox; //ponteiro para o proximo

public:
    NoInteiro(int val);
    NoInteiro(); //Construtor do nó DEFAULT
    ~NoInteiro(); //Destrutor do nó
    int getInfo();
    NoInteiro *getProx();
    void setInfo(int val);
    void setProx(NoInteiro *p);
};