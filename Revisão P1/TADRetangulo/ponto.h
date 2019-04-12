#pragma once
#include <iostream>
#include <math.h>

using namespace std;

class ponto
{
    private:
        int x;
        int y;
    
    public:
        ponto();
        ponto(int x, int y);
        ~ponto();
        int get_X();
        int get_Y();
        void set_X(int x);
        void set_Y(int y);
        float distancia (ponto *op);
};