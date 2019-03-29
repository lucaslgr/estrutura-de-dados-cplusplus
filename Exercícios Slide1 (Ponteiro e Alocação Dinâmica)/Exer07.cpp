/*
    - Faça um programa que declare uma variavel pt do tipo ponteiro para inteiro e imprima o seu endereço de
        memoria.Em seguida, realize as seguintes operaçoes :
            -> 1 Crie uma variavel inteira x.
            -> 2 Leia um valor para x.
            -> 3 Faça com que pt aponte para x.
            -> 4 Imprima o conteudo da variavel pt.
            -> 5 Imprima o enderec ̧o de x.
            -> 6 Usando apenas o ponteiro pt multiplique x por 10 e altere o seu valor.
            -> 7 Imprima o conteudo apontado por pt.
            -> 8 Some 10 a variavel pt.
            -> 9 Imprima o seu conteudo novamente.
            -> 10 Qual e a saída ? O que significa ?
*/

#include <iostream>

using namespace std;

int main()
{
    int x;
    //x = 6;
    int *pt = &x;

    cout << "Informe um numero para X:";
    cin >> x;

    cout << "Imprimindo o endereco DO PONTEIRO: " << &pt << endl;
    cout << "Imprimindo o conteudo DO PONTEIRO: " << pt << endl;
    cout << "Imprimindo o endereco de X pelo ponteiro: " << pt << endl;
    cout << "Imprimindo o endereco de X diretamente por X: " << &x << endl;

    *pt = 10 * *pt;
    cout << "Imprimindo o conteudo apontado por pt após multiplicar por 10: " << *pt << endl;

    *pt = *pt + 10;

    cout << "Imprimindo o conteudo apontado por pt após somar 10: " << *pt << endl;

    return 0;
}
