#include "No.h"

No::No(/* args */)
{
    this->info = -1;
    this->prox = NULL;
}

No::No(int info)
{
    this->info = info;
    this->prox = NULL;
}

No::~No()
{
    //Nothing here
}

void No::setInfo(int val)
{
    this->info = val;
}

void No::setProx(No *p)
{
    this->prox = p;
}

int No::getInfo()
{
    return this->info;
}

No* No::getProx()
{
    return this->prox;
}