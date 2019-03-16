/*
    -Objetivos:
        - Testando a alocação estática, provocando ERRO.

    -Nota que:
        -> Quando o escopo dessa função somaVetores termina, o espaço alocado para o vetor "r" é desalocado automaticamente, portanto 
            não tem como retornar o seu endereço.
        ->>ERRO APRESENTADO:
            testandoAlocacaoEstatica.cpp:17:11: warning: address of local variable 'r' returned [-Wreturn-local-addr] float r[3];
*/

#include <iostream>

using namespace std;

float *somaVetores(float u[], float v[])
{
    //Alocado de forma estatica
    float r[3];

    r[0] = u[0] + v[0];
    r[1] = u[1] + v[1];
    r[2] = u[2] + v[2];

    return r;
}

int main()
{
    float *resposta, *u, *v;

    resposta = somaVetores(u, v); //A funcao não consegue retornar pois o ponteiro foi destruido no final do escopo

    return 0;
}