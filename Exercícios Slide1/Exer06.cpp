/*
    Implementar uma unica funcao que recebe um vetor de numeros inteiros (vet) e o seu tamanho (tam) e:
    
    - I conte o total de elementos pares
    - II conte o total de elementos impares
    - III conte o total de elementos negativos
    - IV e por fim, retorne verdadeiro se existirem numeros negativos no vetor, ou retorne falso, caso contrario. ´
    
    -> Considere o seguinte prototipo: 
        ->>bool func(int tam, int vet[], int *par, int *imp, int *neg);
*/

#include <iostream>

using namespace std;

bool func(int tam, int vet[], int *par, int *imp, int *neg)
{
    for(int i = 0; i < tam; i++)
    {
        // if( *(vet + i) >= 0 )
        if(vet[i] <= 0)
            (*neg) += 1;

        // cout << "Resto da divisao: " << (vet[i] % 2) << endl;
        if( (vet[i] % 2) == 0)
            (*par) += 1;
        else
            (*imp) += 1;
    }
    
    if( (*neg) >= 1 )
        return true;

    return false;
}

int main()
{
    int vet[] = {1, 3, -2, -2, 2, 4, 6, 8, 9, 10, 11}; //Declaração e atribuição de um vetor
    int tam = (int) ( sizeof(vet)/sizeof(vet[0]) );

    cout << "Tamanho do vetor = " << tam << endl;

    int cont_par = 0;
    int cont_impar = 0;
    int cont_neg = 0;

    cout << "Quantidade de numeros negativos no vetor = " << cont_neg << endl;
    cout << "Existe numeros negativos no vetor vet? R: " << func(tam, vet, &cont_par, &cont_impar, &cont_neg) << endl;
    cout << "Quantidade de numeros pares no vetor = " << cont_par << endl;
    cout << "Quantidade de numeros impares no vetor = " << cont_impar << endl;

    return 0;
}