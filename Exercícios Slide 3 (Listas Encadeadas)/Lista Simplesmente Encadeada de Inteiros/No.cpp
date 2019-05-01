#include "No.h"

No::No()
{
    this->info = 0;
    this->prox = NULL;
}

No::No(int val)
{
    this->info = val;
    this->prox = NULL;
}

No::~No()
{
    delete this->prox;
}

//GET'S

int No::getInfo()
{
    return this->info;
}

No* No::getProx()
{
    return this->prox;
}

//SET'S

void No::setInfo(int val)
{
    this->info = val;
}

void No::setProx(No* prox)
{
    this->prox = prox;
}