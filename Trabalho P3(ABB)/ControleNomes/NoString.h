#pragma once
#include <iostream>

using namespace std;

class NoString
{
private:
    string info; //informação
    NoString *prox; //ponteiro para o proximo

public:
    NoString(string info);
    NoString(); //Construtor do nó DEFAULT
    ~NoString(); //Destrutor do nó
    string getInfo();
    NoString *getProx();
    void setInfo(string info);
    void setProx(NoString *p);
};