#include "No.h"

No::No(int val)
{
    this->info = val;
    this->prox = NULL;
}

No::~No()
{
    //Nothing here
}

int No::getInfo()
{
    return this->info;
}

No* No::getProx()
{
    return this->prox;
}

void No::setInfo(int val)
{
    this->info = val;
}

void No::setProx(No *prox)
{
    this->prox = prox;
}