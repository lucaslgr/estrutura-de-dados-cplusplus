/*
    1. Implemente as seguintes operações no TAD ListaEncad
    com descritor:
        I void insereFinal(int val);
        I void eliminaFinal();
    
    2. Qual e a complexidade computacional da operação insereFinal(int val) se implementada na (i) lista
    sem descritor e (ii) na lista com descritor e ponteiro para o ultimo nó? ´
    
    3. Implemente uma operac¸ao do TAD ListaEncad com descritor para inserir um valor depois de um no cujo valor e dado por 
    X. Se o valor X nao for encontrado, a operação nao deve inserir o valor e deve imprimir uma mensagem ˜
    de erro.
*/

#include "No.h"
#include "ListaEncad.h"
#include <iostream>

using namespace std;

int main()
{
    ListaEncad *l1 = new ListaEncad();
    
    l1->insereInicio(20);
    l1->insereInicio(30);
    l1->insereInicio(10);
    l1->insereFinal(30);
    l1->insereFinal(17);

    l1->imprime();

    return 0;
}