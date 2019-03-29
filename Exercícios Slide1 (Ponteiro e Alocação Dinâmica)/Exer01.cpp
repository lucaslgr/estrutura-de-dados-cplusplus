/*
    Exercício:
    1. Faça um programa que leia do teclado um número inteiro N e em seguida leia N números
    reais e calcule a sua média.
*/

#include <iostream>

using namespace std;

int main()
{
    int N=0;
    float sum=0;

    cout << "Digite um numero N e pressione ENTER: "<< endl;
    cin >> N;
    
    for(int i = 0; i < N; i++)
    {
        int numAux = 0;
        cout << "Digite um numero e pressione ENTER:  " << endl;
        cin >> numAux;
        sum += numAux;
    }
    
    float med = (sum/N);

    cout << "A media eh: " << med << endl;

    return 0;
}