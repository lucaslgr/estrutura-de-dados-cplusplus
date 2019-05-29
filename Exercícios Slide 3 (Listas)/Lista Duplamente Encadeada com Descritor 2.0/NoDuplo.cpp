#include "NoDuplo.h"

NoDuplo::NoDuplo(int val)
{
    this->info = val;
    this->prox = NULL;
    this->ant = NULL;
}

NoDuplo::~NoDuplo()
{
    //nothing here
}

void NoDuplo::setInfo(int val)
{
    this->info = val;
}

void NoDuplo::setProx(NoDuplo *prox)
{
    this->prox = prox;
}

void NoDuplo::setAnt(NoDuplo *ant)
{
    this->ant = ant;
}

int NoDuplo::getInfo()
{
    return this->info;
}

NoDuplo* NoDuplo::getProx()
{
    return this->prox;
}

NoDuplo* NoDuplo::getAnt()
{
    return this->ant;
}