#include "No.h"

No::No()
{
    //ctor
}

No::~No()
{
    //dtor
}

int No::getInfo() {
    return info;
}

No* No::getProx() {
    return prox;
}

void No::setInfo(int val) {
    info = val;
}

void No::setProx(No *p) {
    prox = p;
}
