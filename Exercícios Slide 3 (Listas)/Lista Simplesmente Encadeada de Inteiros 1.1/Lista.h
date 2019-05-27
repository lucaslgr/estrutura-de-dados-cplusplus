/*
    Exercícios da Lista Simplesmente Encadeada - Slide 3 (41 - 44)

    1 - Implemente a operação imprime() que imprime na tela todos os valores armazenados na lista
    2 - Qual a saída do programa se os seguintes valores 5, 10, 20, 30, 40, 50 forem lidos do teclado nessa ordem?
    3 - Desenvolver uma nova operação do TAD ListaEncad para inserir um novo nó na lista contendo o valore real val como
        o ultimo no da lista.
    4 - Desenvolver uma nova operação para excluir o último nó da lista.
    5 - Desenvolver uma nova operação para contar e retornar o total de nós da lista.
    6 - Desenvolver uma nova operação para incluir um novo nó em uma determinada posição da lista, a qual será especificada
        por um parametro pos.
*/

#include "No.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

class Lista
{
    private:
        No* primeiro;

    public:
        Lista();  //CONSTRUTOR DEFAULT//OK PASS
        ~Lista(); //DESTRUTOR//OK PASS

        void insereInicio(int val); //OK PASS
        void insereFinal(int val);  //OK PASS
        //Insere na posicao K e retorna true se conseguiu inserir com sucesso ou false se não conseguiu
        void inserePosK(int k, int val); //OK PASS

        void removeInicio(); //OK PASS
        void removeFinal();  //OK PASS
        void removePosK(int k); //OK PASS

        //Busca determinado valor na lista retorna true or false se o valor está contido na lista
        bool busca(int val); //OK PASS

        //Imprime a lista do inicio ao fim
        void imprimeLista(); //OK PASS

        No *getPrimeiro(); //OK PASS
        int getTamLista(); //OK PASS
};
