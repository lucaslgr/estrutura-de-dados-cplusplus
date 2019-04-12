/*
    Aplicação: desenvolver um programa para ler um vetor de 50 elementos inteiros, calcular e imprimir:
        -> A soma dos elementos
        -> A soma dos elementos pares
        -> A soma dos elementos de índice par
        -> O maior elemento
        -> O índice do menor elemento
        -> O vetor em ordem crescente e de seus elementos juntamente com os índices originais
*/
#include <iostream>
#include <string>
#include <stdlib.h>
#define N 3

using namespace std;

int *LerVet()
{
    system("cls");

    int *vet = new int[N];

    for(int i = 0; i < N; i++)
    {
        cout << "Informe o numero do " << i+1 << " elemento do vetor." << endl;
        cin >> vet[i];
    }

    cout <<"\n\n";
    return vet;
}

void soma_elementos_Pares(int *vet)
{
    int sum = 0;
    for(int i = 0; i < N; i++)
    {
        if (vet[i]%2 == 0)
        {
            sum += vet[i];
        }
    }
    cout << "A soma dos elementos pares eh: " << sum << endl;
    cout << "\n\n";
}

void soma_elementosIndice_Par(int *vet)
{
    int sum = 0;

    for (int i = 0; i < N; i++)
    {
        if (i % 2 == 0)
        {
            sum += vet[i];
        }
    }
    cout << "A soma dos elementos de INDICES pares eh: " << sum << endl;
    cout << "\n\n";
}

void imprime_MaiorElemento(int *vet)
{
    int maiorValor = 0;
    for (int i = 0; i < N; i++)
    {
        if (vet[i] >= maiorValor)
        {
            maiorValor = vet[i];
        }
    }
    cout << "O maior elemento eh: " << maiorValor << endl;
    cout << "\n\n";
}

void imprime_IndiceMenorElemento(int *vet)
{
    int menorValor = vet[0];
    int indice_menorValor;
    for (int i = 0; i < N; i++)
    {
        if (vet[i] <= menorValor)
        {
            menorValor = vet[i];
            indice_menorValor = i;
        }
    }
    cout << "O indice do elemento de menor valor eh: " << indice_menorValor << endl;
    cout << "\n\n";
}

void ordena_VetorEIndices(int *vet)
{
    int *vetOrdenado = new int[N];
    int *vetIndice = new int[N];

    int auxMenorValor = 0;
    int auxIndiceMenor = 0;

    for(int i = 0; i < N; i++)
    {
        for(int j = i + 1; j < N; j++)
        {
            if (vet[i] > vet[j])
            {
                // auxMenorValor = vet[i];
                // vet[i] = vet[j];
                // vet[j] = auxMenorValor;
                auxMenorValor = vet[j];
                vet[j] = vet[i];
                vet[i] = auxMenorValor;
            }
        }
    }

    
    for(int i = 0; i < N; i++)
        cout << "Posicao " << i << "\t Indice original: "<< vetIndice[i] << "\t Valor: " << vet[i] << endl;
}

int main()
{
    int *vet = LerVet();

    soma_elementos_Pares(vet);
    soma_elementosIndice_Par(vet);
    imprime_MaiorElemento(vet);
    imprime_IndiceMenorElemento(vet);
    ordena_VetorEIndices(vet);

    return 0;
}