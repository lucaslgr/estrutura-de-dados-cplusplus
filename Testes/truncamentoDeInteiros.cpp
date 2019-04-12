#include <iostream>

using namespace std;

int main()
{
    int numeradorINT = 6, denominadorINT = 4;

    float numeradorFLOAT = 6, denominadorFLOAT = 4;

    float resultado = 0;

    resultado = numeradorINT/denominadorINT; //saida: 1

    cout << "Resultado eh: " << resultado << endl;

    resultado = numeradorINT / denominadorFLOAT; //saida: 1.5

    cout << "Resultado eh: " << resultado << endl;

    resultado = numeradorFLOAT / denominadorFLOAT; //saida: 1.5

    cout << "Resultado eh: " << resultado << endl;

    resultado = numeradorFLOAT / denominadorINT;   //saida: 1.5

    cout << "Resultado eh: " << resultado << endl;

    return 0;
}