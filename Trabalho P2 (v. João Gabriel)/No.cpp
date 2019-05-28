#include "No.h"

No::No()
{
    info = 0;
    prox = NULL;
}

No::~No()
{
    //dtor
}

void No::setProx(No* p)
{
    prox = p;
}

No* No::getProx(){
    return prox;
}

void No::setInfo(int val)
{
    info = val;
}

int No::getInfo(){
    return info;
}
