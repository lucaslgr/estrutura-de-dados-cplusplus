#include "NoString.h"

NoString::NoString(string info)
{
    this->info = info;
    this->prox = NULL;
}

NoString::NoString()
{
    this->info = "";
    this->prox = NULL;
}

NoString::~NoString()
{
    //Nothing here
}

string NoString::getInfo()
{
    return this->info;
}

NoString *NoString::getProx()
{
    return this->prox;
}

void NoString::setInfo(string info)
{
    this->info = info;
}

void NoString::setProx(NoString *p)
{
    this->prox = p;
}