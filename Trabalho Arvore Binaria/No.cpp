#include "No.h"

No::No(int chave)
{
    this->chave = chave;
    this->esq = NULL;
    this->dir = NULL;
}

No::~No()
{
    //Nothing here
}

void No::setEsq(No *no)
{
    this->esq = no;
}

void No::setDir(No *no)
{
    this->dir = no;
}

void No::setInfo(int info)
{
    this->chave = info;
}

No* No::getEsq()
{
    return this->esq;
}

No *No::getDir()
{
    return this->dir;
}

int No::getInfo()
{
    return this->chave;
}