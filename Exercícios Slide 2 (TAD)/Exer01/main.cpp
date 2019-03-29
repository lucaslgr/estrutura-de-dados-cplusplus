/*
    - 1. Implemente um TAD para trabalhar com os números racionais. Implemente as operações artméticas básicas: adição,
    subtração, multiplicação e divisão.

    Lembre-se:
            Q = { a/b | a pertence a Z, b pertence a Z* }
    
    onde:
        Z -> Conjunto dos números inteiros;
        Z -> Conjunto dos números inteiros exceto o zero;
*/

#include <iostream>
#include "numRacional.h"

using namespace std;

void printaMenu(int *ans)
{
    system("cls");
    cout << "Digite o numero referente a qual operacao deseja fazer: " << endl;
    cout << "1 -  adicao\n";
    cout << "2 -  subtracao\n";
    cout << "3 -  divisao\n";
    cout << "4 -  multiplicacao\n";

    cin >> *ans;
}

int main()
{
    int ans;

    numRacional n1 = numRacional::criaNumRacional();
    numRacional n2 = numRacional::criaNumRacional();

    printaMenu(&ans);
    switch (ans)
    {
        case 1:
            cout << "A adicao de n1 com n2 eh: " << n1.adicao(&n2) << endl;
            break;

        case 2:
            cout << "A subtracao n1 com n2 eh: " << n1.subtracao(&n2) << endl;
            break;

        case 3:
            cout << "A divisao de n1 com n2 eh: " << n1.divisao(&n2) << endl;
            break;

        case 4:
            cout << "A multiplicacao de n1 com n2 eh: " << n1.multiplicacao(&n2) << endl;
            break;

        default:
            cout << "Digite uma opcao valida!!!" << endl;
            break;
    }

    return 0;
}