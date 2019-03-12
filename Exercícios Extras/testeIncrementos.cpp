/*
    - Objetivo:
        -> Entender todas maneiras de se realizar incrementos de variáveis e/ou ponteiros.
*/

#include <iostream>

using namespace std;

int main()
{
    //1ª maneira:
    cout << "Pimeira maneira!\n" << endl;
    int num1;
    int i = 1;

    num1 = i++;

    cout << "Valor de num1: " << num1 << endl;
    cout << "Valor de i: " << i << endl;

    /*
        -> Primeiramente a variável num1 receberá i
        -> Depois de acontecer a atribuição, a variável i será incrementada

        Saídas:
            num1 = 1;
            i = 2;
    */

    //2ª maneira:
    cout << "Segunda maneira!\n" << endl;
    int num2;
    int j = 1;

    num2 = ++j;

    cout << "Valor de num2: " << num2 << endl;
    cout << "Valor de j: " << j << endl;

    /*
        -> Primeiramente será incrementado +1 na variavel j
        -> Depois vai acontecer a atribuição da variavel j a variavel num2

        Saídas:
            num2 = 2;
            j = 2;
    */
    
    return 0;
}