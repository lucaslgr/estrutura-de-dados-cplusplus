#include <iostream>
#define VAL 98
using namespace std;

int main()
{
    //TESTE 1
    cout << "\n\nTESTE 1" << endl;
    int i = 3, j = 5;
    int *p = &i, *q = &j;

    int resultado = 3*-*p/(*q)+7;
    cout << "A saida 9/5 eh:" << 9/5 << endl;
    cout << "A saida de 3*-*p/(*q)+7 eh: " << resultado << endl;
    //FIM TESTE 1

    //TESTE 2
    cout << "\n\nTESTE 2" << endl;
    //int *p1 = VAL;
    //cout << &VAL << endl;
    //cout << *p1;
    //FIM TESTE 2

    //TESTE 3
    cout << "\n\nTESTE 3" << endl;
    int vet[] = {1, 2, 3, 4, 5, 6};
    cout << "vet[3]: " << vet[3] << endl;
    cout << "*(vet + 3): " << *(vet + 3) << endl;
    //FIM TESTE 3

    //TESTE 4
    // cout << "\n\nTESTE 4" << endl;
    // int vet1[8] = {1,2,3,4,5,6,7,8};
    // cout << vet1++ << endl;
    //FIM TESTE 4

    //TESTE 4
    // cout << "\n\nTESTE 4" << endl;
    //Qual é a diferença entre as duas?
    char s[] = "Brasil";
    //char *s1 = "Brasil"; //NÃO FUNCIONA
    // cout << "Tamanho em bytes de s1: " << sizeof(s1) << endl;
    // cout << "Tamanho em bytes de s2: " << sizeof(s2) << endl;

    return 0;
}