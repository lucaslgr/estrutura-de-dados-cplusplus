#include <iostream>
#include "ponto.h"
#define M_PI 3.1416

using namespace std;

class circulo
{
    private:
        ponto centro;
        float raio;
    public:
        circulo(ponto *centro, float raio);
        ~circulo();
        float getRaio();
        ponto getCentro();
        void imprime_Raio();
        void imprime_Centro();
        void calc_Area();
        void calc_Perimetro();
};