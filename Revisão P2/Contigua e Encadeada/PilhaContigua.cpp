#include "PilhaContigua.h"

PilhaContigua::PilhaContigua(int max)
{
    this->max = max;
    this->n = 0;
    this->topo = -1;
    this->pilha = new int[max];
}

PilhaContigua::~PilhaContigua()
{
    delete [] this->pilha;
}

void PilhaContigua::empilhar(int val)
{
    if (this->n != this->max)
    {
        this->topo += 1;
        this->pilha[this->topo] = val;
        this->n += 1;
    }
    else
        cout << "\nPilha cheia!\n";
}

void PilhaContigua::desempilhar()
{
    if (this->topo== -1)
    {
        cout << "\nPilha vazia!\n";
    }
    else
    {
        this->topo -= 1;
        this->n -= 1;
    }
}

int PilhaContigua::busca()
{
    return this->pilha[this->topo];
}

bool PilhaContigua::vazia()
{
    return (this->topo == -1);
}

void PilhaContigua::imprime()
{
    cout << "\n***********************IMPRIMINDO A LISTA***********************\n";

    while (this->topo != -1)
    {
        cout << this->busca() << " ";
        this->desempilhar();
    }
}