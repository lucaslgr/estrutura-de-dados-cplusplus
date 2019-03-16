/*
    - Dados dois numeros inteiros num e div, fazer uma funçao para calcular e retornar o quociente e o resto da divisao 
    inteira de num por div. Considerar o seguinte:
    
    prototipo:
    ->> void divisao(int num, int div, int *q, int *r);
    
    - Onde
    1. num e dividendo.
    2. div e o divisor.
    3. q e o quociente.
    4. r e o resto.
*/

#include <stdio.h>
#include <iostream>

using namespace std;

void divisao(int num, int div, int *q, int *r)
{
    *q = num / div;
    *r = num % div;
}

int main()
{
    int num, div;
    int q, r;

    num = 3;
    div = 2;

    divisao(num, div, &q, &r);
    cout << "Quociente retornado da funcao: " << q << endl;
    cout << "Resto retornado da funcao: " << r << endl;

    return 0;
}
