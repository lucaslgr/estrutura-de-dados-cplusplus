/*
    - 2. Desenvolver o TAD círculo, que deve ser representado pelo seu centro - do tipo Ponto - e pelo raio 
    (um número real). O TAD deve ser capaz de realizar as seguintes operações:
        -> Construtor que recebe o ponto representando o centro e o raio do círuclo
        -> Imprimir as coordenadas do centro
        -> Imprimir o raio do centro
        -> Calcular o perímetro do círculo
*/

#include <iostream>
#include "numRacional.h"

using namespace std;

void printaMenu(int *ans)
{
    system("cls");
    cout << "Digite o numero referente a qual operacao deseja fazer: " << endl;
    cout << "1 -  adicao\n";
    cout << "2 -  subtracao\n";
    cout << "3 -  divisao\n";
    cout << "4 -  multiplicacao\n";

    cin >> *ans;
}

int main()
{

    return 0;
}