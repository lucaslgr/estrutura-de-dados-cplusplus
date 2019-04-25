/*
    - Implemente a função troca que troca o conteudo de duas variaveis inteiras a e b, 
    conforme visto em sala de aula. Faça um programa que teste a funçao implementada.
    
    Prototipo:
    ->> void troca(int *a, int *b)
*/

#include <iostream>

using namespace std;

void troca(int *a, int *b)
{
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

int main()
{
    int a = 0, b = 0;

    a = 2;
    b = 4;

    cout << "Valor de A ANTES DE TROCAR: " << a << endl;
    cout << "Valor de B ANTES DE TROCAR: " << b << endl;

    troca(&a, &b);

    cout << "Valor de A DEPOIS DE TROCAR: " << a << endl;
    cout << "Valor de B DEPOIS DE TROCAR: " << b << endl;

    return 0;
}
