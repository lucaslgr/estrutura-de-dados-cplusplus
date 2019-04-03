#include "circulo.h"

circulo::circulo(ponto *centro, float raio)
{
    this->centro = ponto(centro->getX(), centro->getY());
    this->raio = raio;
}

circulo::~circulo()
{
    cout << "O circulo foi destruido" << endl;
}

float circulo::getRaio()
{
    return this->raio;
}

ponto circulo::getCentro()
{
    return this->centro;
}

void circulo::imprime_Raio()
{
    cout << "O raio do circulo eh: " << this->raio << endl;
}

void circulo::imprime_Centro()
{
    this->centro.imprime_Ponto();
}

void circulo::calc_Area()
{
    float area = (M_PI*(this->raio*this->raio));
    cout << "A area do circulo eh: " << area << endl;
}

void circulo::calc_Perimetro()
{
    float perimetro = 2*M_PI*this->raio;
    cout << "O perimetro do circulo eh: " << perimetro << endl;
}