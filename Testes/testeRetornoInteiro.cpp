/*
    Descrição: Esse programa tem o objetivo de exemplificar o que ocorre na linha 18 que 
    denota que quando se realiza operações com variáveis do tipo "Inteiro", independente da
    variável que irá receber o resultado, este resultado será do tipo "Inteiro", logo, o 
    resultado será truncado, ou seja, sem casas decimais.

    OBS: Caso um dos termos da operação seja float ou double, o retorno terá casas decimais
    normalmente
*/

#include <iostream>

using namespace std;

int main()
{
    int x;
    float y;

    x = 4 + 2;
    y = x/4; // Independente da variável y ser do tipo FLOAT, ela receberá um valor inteiro da operação

    cout << x/3 << " " << x*2 << endl; // Resposta: 2 12
    cout << "y = " << y << endl; // Resposta: 1
    return 0;
}