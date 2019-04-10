#include "ponto.h"

ponto::ponto(int x, int y)
{
    this->x = x;
    this->y = y;
}

ponto::~ponto()
{
    cout << "Ponto destruido" << endl;
}

int ponto::get_X()
{
    return this->x;
}

int ponto::get_Y()
{
    return this->y;
}

void ponto::set_X(int x)
{
    this->x = x;
}

void ponto::set_Y(int y)
{
    this->y = y;
}

