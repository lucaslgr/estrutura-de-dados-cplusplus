#include "NoDuplo.h"

NoDuplo::NoDuplo()
{
    this->info = 0;
    this->ant = NULL;
    this->prox = NULL;
}

NoDuplo::NoDuplo(int val)
{
    this->info = val;
    this->ant = NULL;
    this->prox = NULL;
}

NoDuplo::~NoDuplo()
{
    //delete ant;
    //delete prox;
}

void NoDuplo::setAnt(NoDuplo *p)
{
    this->ant = p;
}

void NoDuplo::setProx(NoDuplo *p)
{
    this->prox = p;
}

void NoDuplo::setInfo(int val)
{
    this->info = val;
}

NoDuplo *NoDuplo::getAnt()
{
    return this->ant;
}

NoDuplo *NoDuplo::getProx()
{
    return this->prox;
}

int NoDuplo::getInfo()
{
    return this->info;
}