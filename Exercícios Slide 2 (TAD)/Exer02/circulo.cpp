#include "circulo.h"

circulo::circulo(ponto *centro, float *raio)
{
    this->centro = ponto::ponto(&centro->getX(), centro->getY());
    this->raio = *raio;
}

~circulo::circulo()
{
    cout << "O circulo foi destruido" << endl;
}
