/*
    - Implementar uma única função que recebe um vator de números inteiros(vet) e o seu tamanho (tam)
    e:
    1. Conte o total de elementos pares.
    2. Conte o total de elementos impares.
    3. Conte o total de elementos negativos.
    4. E por fim, retorne verdadeiro se existirem números negativos no vetor, ou retorne falso, caso
    contrário.

    Considere o seguinte protótipo:
    ->> bool func(int tam, int vet[], int *par, int *impar, int *negativos);

*/

#include <stdio.h>
#include <iostream>

using namespace std;

bool func(int tam, int vet[],
          int *par, int *impar,
          int *negativos)
{
    for (int i = 0; i < tam; i++)
    {
        if ((vet[i] % 2) == 0)
            *par += 1;
        else
            *impar += 1;
        if (vet[i] < 0)
            *negativos += 1;
    }

    if (negativos > 0)
        return true;

    return false;
}

int main()
{
    int vet[] = {2, 3, 4, 5, -6};
    int tam = sizeof(vet) / sizeof(vet[0]);
    int par = 0, imp = 0, negativos = 0;

    if (func(tam, vet, &par, &imp, &negativos))
        cout << "Possui numeros negativos" << endl;
    else
        cout << "Nao possui numeros negativos" << endl;

    cout << "Quantidade de numeros pares: " << par << endl;
    cout << "Quantidade de numeros impares: " << imp << endl;
    cout << "Quantidade de numeros negtivos: " << negativos << endl;

    return 0;
}
