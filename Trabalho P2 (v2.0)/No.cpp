#include "No.h"

No::No()
{
    this->info = -1111111;
    this->prox = NULL;
}

No::No(int val)
{
    this->info = val;
    this->prox = NULL;
}

No::~No()
{
    //nothing here
}

void No::setInfo(int val)
{
    this->info = val;
}

void No::setProx(No* p)
{
    this->prox = p;
}

No* No::getProx()
{
    return this->prox;
}

int No::getInfo()
{
    return this->info;
}