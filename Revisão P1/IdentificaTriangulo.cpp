#include <iostream>

using namespace std;

int main()
{
    int x=0, y=0, z=0;
    cout << "Informe um valor para X:" << endl;
    cin >> x;
    cout << "Informe um valor para y:" << endl;
    cin >> y;
    cout << "Informe um valor para z:" << endl;
    cin >> z;

    if((x + y >= z) && (x + z >= y) && (z + y >= x))
    {
        if(x==y && y == z)
            cout << "Triangulo Equilatero" << endl;
        else if(x == y || y == z || x == z)
            cout << "Triangulo Isosceles" << endl;
        else if( x != y && y != z && z != x)
            cout << "Triangulo Escaleno" << endl;
    }
    else
        cout << "Esses valores de x y e z nao formam um triangulo" << endl;

    return 0;
}