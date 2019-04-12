#include <iostream>
#include "ponto.h"
#include "Retangulo.h"

using namespace std;

int main()
{
    float xx, yy;
    cin >> xx >> yy;

    ponto p(xx, yy);
    Retangulo r(5, 5, 20, 20);

    cout << "Area de r=" << r.calc_Area() << endl;
    cout << "Ponto p=" << p.get_X() << " " << p.get_Y() << endl;
    cout << "Ponto dentro do retangulo? " << endl;
    if (r.vPontoInterno(&p))
        cout << "SIM" << endl;
    else
        cout << "NAO" << endl;

    return 0;
}