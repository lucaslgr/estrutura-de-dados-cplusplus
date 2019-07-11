#include "No.h"

No::No(int val)
{
    this->prox = NULL;
    this->info = val;
}

No::~No()
{
    //nothing here
}

void No::setInfo(int val)
{
    this->info = info;
}

void No::setProx(No* prox)
{
    this->prox = prox;
}

int No::getInfo()
{
    return this->info;
}

No* No::getProx()
{
    return this->prox;
}
