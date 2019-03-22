/*
    -Objetivo:
    -> Calcular o fatorial de um numero (DA MANEIRA MAIS DIFÍCIL POSSÍVEL)
    -> Usando recursividade
*/

#include <iostream>

using namespace std;

float calc_Fat(float num)
{
    float vFat;

    if (num <= 1)
        return 1;

    vFat = (num * calc_Fat(num - 1));

    return vFat;
}

int main()
{
    float valor;

    cout << "Informe um numero e pressione ENTER: " << endl;
    cin >> valor;

    cout << "O fatorial de " << valor << " eh: " << calc_Fat(valor) << endl;

    return 0;
}
