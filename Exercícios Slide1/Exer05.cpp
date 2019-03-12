/*
    O que fazem os seguintes programas?
*/

#include <iostream>

using namespace std;

int main()
{
    //Programa 1
    cout << "\nSaida programa 1:";
    int mat1[] = {4, 5, 6}; //Declaracao e atribuição de um vetor
    for (int j = 0; j < 3; j++)
        cout << " \n" << *(mat1 + j);
    /*
        Saída:
            4
            5
            6
    */

    //Programa 2
    cout << "\n\nSaida programa 2:";
    int mat2[] = {4, 5, 6}; //Declaracao e atribuição de um vetor
    for (int j = 0; j < 3; j++)
        cout << " \n" << (mat2 + j);
    /*
        Saída:
            Endereço 1ª posicao de mat2
            Endereço 2ª posicao de mat2
            Endereço 3ª posicao de mat2
    */

    //Programa 3
    cout << "\n\nSaida programa 3:";
    int mat3[] = {4, 5, 6}; //Declaracao e atribuição de um vetor
    int *p = mat3; //Declaracao e atribuição de um ponteiro do tipo inteiro que apontará para a primeira posicao do vetor mat3
    for (int j = 0; j < 3; j++)
        cout << " \n" << *p++;
    /*
        Saída:
            4
            5
            6
    */

    //Comprando a hipotese sobre o programa 3
    cout << "\nComprando a hipótese sobre o programa! 3\n";
    cout << "\nImprimindo os valores do vetor mat3:\n";
    for (int j = 0; j < 3; j++)
        cout << "\n" << *(mat3 + j);

    return 0;
}