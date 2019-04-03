#include <iostream>

using namespace std;

class ponto
{
private:
    int x, y;
public:
    ponto(float x, float y);
    ponto();
    ~ponto();

    float getX();
    float getY();
    void imprime_Ponto();
};
