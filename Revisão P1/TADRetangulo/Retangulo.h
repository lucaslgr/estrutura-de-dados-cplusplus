#pragma once
#include <iostream>
#include "ponto.h"

using namespace std;

class Retangulo
{
    private:
        ponto *inf_Esquerdo;
        ponto *sup_Direito;

    public:
        Retangulo();
        Retangulo(ponto *inf_Esquerdo, ponto *sup_Direito);
        Retangulo(float x1, float y1, float x2, float y2);
        ~Retangulo();
        float calc_Area();
        bool vPontoInterno(ponto *op);
};