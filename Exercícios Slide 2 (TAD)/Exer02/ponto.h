#include <iostream>

using namespace std;

class ponto
{
private:
    int x, y;
public:
    ponto(float *x, float *y);
    ~ponto();

    float getX();
    float getY();
};
