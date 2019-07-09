#include "NoInteiro.h"

NoInteiro::NoInteiro(int val)
{
    this->info = val;
    this->prox = NULL;
}

NoInteiro::NoInteiro()
{
    this->info = -1111111;
    this->prox = NULL;
}

NoInteiro::~NoInteiro()
{
    //Nothing here
}

int NoInteiro::getInfo()
{
    return this->info;
}

NoInteiro *NoInteiro::getProx()
{
    return this->prox;
}

void NoInteiro::setInfo(int val)
{
    this->info = val;
}

void NoInteiro::setProx(NoInteiro *p)
{
    this->prox = p;
}