#include "ponto.h"

ponto::ponto(float *x, float *y)
{
    this->x = *x;
    this->y = *y;
}

ponto::~ponto()
{
    cout << "O ponto foi destruído" << endl;
}

&float ponto::getX()
{
    return &this->x;
}

float ponto::getY()
{
    return this->y;
}