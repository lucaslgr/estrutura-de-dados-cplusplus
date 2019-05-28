#include "No.h"
#include <iostream>

using namespace std;

class ListaEncad
{
private:
    No *primeiro;
    No *ultimo;
    int n;
public:
    ListaEncad(/* args */);
    ~ListaEncad();

    void insereFinal(int val);
    void removeFinal();

    bool listaVazia();

    /*
    Essa função tem o objetivo de inserir um valor depois de um no cujo valor e dado por X. Se o valor X nao for encontrado,
    a operação não deve inserir o valor e deve imprimir uma mensagem de erro.
    */
    void insereAposValorX(int x, int valor);

    void imprime();
};