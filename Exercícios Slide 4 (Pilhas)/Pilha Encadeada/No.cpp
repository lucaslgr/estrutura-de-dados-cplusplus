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
    //Nothing here
}

void No::setProx(No *prox)
{
    this->prox = prox;
}

void No::setInfo(int val)
{
    this->info = info;
}

No* No::getProx()
{
    return this->prox;
}

int No::getInfo()
{
    return this->info;
}