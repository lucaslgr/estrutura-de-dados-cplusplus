/*
    - Implemente uma funçao que calcule o produto escalar entre dois vetores do tipo de dados float. No programa principal
    voce deve ler o tamanho N dos vetores, os quais devem ser alocados dinamicamente usando new. Depois, voce deve ler os 
    dados dos vetores e chamar a funcao para calcular o produto escalar. Por fim, use o operador delete para desalocar toda
    memoria alocada de forma dinamica. 
    
    - Prototipo:
    ->> float prodEscalar(int n, float x[], float y[]);

    Ex. o produto escalar entre x = [1, 2, 3] e y = [4, 5, 6] e dado por:
    ->> x · y = 1 × 4 + 2 × 5 + 3 × 6 = 32.

*/

#include <stdio.h>
#include <iostream>

using namespace std;

float prodEscalar(int n, float x[], float y[])
{
    float ProdutoE;

    for (int i = 0; i < n; i++)
        ProdutoE += (x[i] * y[i]);

    return ProdutoE;
}

int main()
{
    int N = 0;
    cout << "Informe um numero para alocar o tamanho do vetor X: " << endl;
    cin >> N;

    float *vetX = new float[N]; //alocando dinamicament
    float *vetY = new float[N]; //alocando dinamicament

    for (int i = 0; i < N; i++)
    {
        cout << "Informe o " << i + 1 << "º valor para prencher o vetor X e pressione enter:\n" << endl;
        cin >> vetX[i];
    }

    for (int i = 0; i < N; i++)
    {
        cout << "Informe o " << i + 1 << "º valor para prencher o vetor Y e pressione enter:\n" << endl;
        cin >> vetY[i];
    }

    float ProdutoE = prodEscalar(N, vetX, vetY);

    cout << "O produto escalar eh: " << ProdutoE << endl;

    delete[] vetX;
    delete[] vetY;

    return 0;
}
