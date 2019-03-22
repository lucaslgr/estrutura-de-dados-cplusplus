/*
    Testes com operadores asterisco-> * e E comercial -> &, utilizados JUNTOS.
*/

#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{

    int *p;
    int x = 5;
    p = &x;

    cout << "Teste imprime endereço de p: " << &p << endl; //Imprime o endereço de p
    cout << "Teste imprime o valor para qual p aponta: " << *p << endl; //Imprime o valor para qual p aponta:

    //Inicio dos testes
    cout << "\n\nInicio dos testes";

    cout << "\n\nTeste 1" << endl;
    cout << "Teste de anulacao -> *&x aplicado em uma variavel x:  " << *&x << endl; // *&x == x
    cout << "E o mesmo que apenas -> x: " << x << endl;

    cout << "\n\nTeste 2" << endl;
    cout << "Teste de anulacao -> *&p aplicado em um ponteiro p:  " << *&p << endl;  // *&p = p
    cout << "E o mesmo que apenas -> : p que e o endereco que p armazena: " << p << endl;
    cout << "Que TAMBEM e o mesmo que apenas -> : &x que e o endereco que p armazena: " << &x << endl;

    cout << "\n\nTeste 3" << endl;
    cout << "Teste de anulacao -> &*p aplicado em um ponteiro p:  " << &*p << endl; // &*p = p
    cout << "E o mesmo que apenas -> : p que e o endereco que p armazena: " << p << endl;
    cout << "Que TAMBEM e o mesmo que apenas -> : &x que e o endereco que p armazena: " << &x << endl;

    cout << "\n\nTeste 4 (DA ERRO)" << endl;
    //cout << "Teste de anulacao -> &*x aplicado em uma variavel x:  " << &*x << endl; // &*x = ERRO
    /*
        Descrição:
            ->Uma variavel não armazena nenhum endereço, para que possa ser acessado com asterisco.
    */

    return 0;
}
