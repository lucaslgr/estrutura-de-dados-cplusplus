#include <iostream>
#include "ponto.h"

using namespace std;

class circulo
{
    private:
        ponto centro;
        float raio;
    public:
        circulo(ponto *centro, float *raio);
        ~circulo();
};