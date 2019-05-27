#include "No.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

class ListaEncad
{
private:
    No *primeiro;

public:
    ListaEncad(); //CONSTRUTOR DEFAULT//OK PASS
    ~ListaEncad(); //DESTRUTOR//OK PASS

    //Insere no inicio
    void insereInicio(int val); //OK PASS
    //Insere no final
    void insereFinal(int val);  //OK PASS
    //Insere na posicao K e retorna true se conseguiu inserir com sucesso ou false se não conseguiu
    void inserePosK(int k, int val); //OK PASS
    //Insere os nós de forma ordenada
    void insereOrdenado(int val); //OK PASS

    void removeInicio();    //OK PASS
    void removeFinal();     //OK PASS
    void removePosK(int k); //OK PASS

    //Busca determinado valor na lista retorna true or false se o valor está contido na lista
    bool busca(int val); //OK PASS

    //Imprime a lista do inicio ao fim
    void imprimeLista(); //OK PASS

    No *getPrimeiro(); //OK PASS
    int getTamLista(); //OK PASS
    bool verificaListaVazia();
};
