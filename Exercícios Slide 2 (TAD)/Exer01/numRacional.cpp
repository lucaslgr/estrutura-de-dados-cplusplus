#include <iostream>
#include "numRacional.h"

using namespace std;

numRacional::numRacional(float *a, float *b)
{
    this->a = *a;
    while(*b==0)
    {
        cout << "O denominador nao pode ser ZERO!!!\n";
        cout << "Digite o numero novamente!\n";
        cin >> *b;
    }
    this->b = *b;
}

numRacional::~numRacional(){}

numRacional numRacional::criaNumRacional()
{
    float a, b;
    cout << "Digite um numero para a: " << endl;
    cin >> a;

    cout << "Digite um numero para b: " << endl;
    cin >> b;

    return numRacional(&a, &b);
}

void numRacional::setNumerador(float *a)
{
    this->a = *a;
}

void numRacional::setDenominador(float *b)
{
    this->b = *b;
}

float numRacional::adicao(numRacional *n)
{
    float num1 = this->a / this-> b;
    float num2 = n->a / n->b;

    return (num1 + num2);
}

float numRacional::subtracao(numRacional *n)
{
    float num1 = this->a / this->b;
    float num2 = n->a / n->b;

    return (num1 - num2);
}

float numRacional::multiplicacao(numRacional *n)
{
    float num1 = this->a / this->b;
    float num2 = n->a / n->b;

    return (num1 * num2);
}

float numRacional::divisao(numRacional *n)
{
    float num1 = this->a / this->b;
    float num2 = n->a / n->b;

    return (num1 / num2);
}