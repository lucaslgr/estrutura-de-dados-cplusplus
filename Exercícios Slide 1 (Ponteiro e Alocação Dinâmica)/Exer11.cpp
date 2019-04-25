/*
    Faça um programa que leia um numero inteiro N e aloque um vetor com N inteiros de forma dinamica (use o operador new).
    Em seguida o programa deve calcular a media dos elementos desse vetor e, por fim, deve desalocar (use o operador delete)
    a memoria usada para armazenar os seus elementos.
*/
#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int N, soma = 0;

    cout << "Informe um numero para alocar o tamanho do vetor: " << endl;
    cin >> N;

    int *vet = new int[N]; //alocando dinamicament

    for (int i = 0; i < N; i++)
    {
        cout << "Informe o " << i + 1 << "ยบ valor para prencher o vetor e pressione enter:\n" << endl;
        cin >> vet[i];

        soma += vet[i];
    }

    cout << "A media eh: " << soma / N << endl;

    delete[] vet;

    return 0;
}
