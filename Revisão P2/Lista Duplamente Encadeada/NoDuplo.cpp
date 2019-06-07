#include "NoDuplo.h"

NoDuplo::NoDuplo(int val)
{
    this->info = val;
    this->ant = NULL;
    this->prox = NULL;
}

NoDuplo::~NoDuplo()
{
    //nothing here
}

void NoDuplo::setAnt(NoDuplo *ant)
{
    this->ant = ant;
}

void NoDuplo::setProx(NoDuplo *prox)
{
    this->prox = prox;
}

void NoDuplo::setInfo(int val)
{
    this->info = val;
}

NoDuplo* NoDuplo::getAnt()
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