#include "ponto.h"

ponto::ponto(float x, float y)
{
    this->x = x;
    this->y = y;
}

ponto::ponto(){}

ponto::~ponto()
{
    cout << "O ponto foi destruído" << endl;
}

float ponto::getX()
{
    return this->x;
}

float ponto::getY()
{
    return this->y;
}

void ponto::imprime_Ponto()
{
    cout << "Coordenada x: " << this->x << endl;
    cout << "Coordenada y: " << this->y << endl;
}