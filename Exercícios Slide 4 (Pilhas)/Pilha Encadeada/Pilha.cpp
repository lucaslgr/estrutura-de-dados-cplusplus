#include "Pilha.h"

Pilha::Pilha()
{
    this->topo == NULL;
    this->n = -1;
}

Pilha::~Pilha()
{
    No *p = this->topo;
    No *q;

    while (p!=NULL)
    {
        q = p;
        p = p->getProx();
        delete q;
    }
    cout << "\nPilha destruida" << endl;
}

bool Pilha::verificaPilhaVazia()
{
    if (this->topo == NULL || this->n == -1)
    {
        cout << "\nA pilha está vazia" << endl;
        return true;
    }
    return false;    
}

void Pilha::empilhar(int val)
{
    if (this->topo == NULL)
    {
        this->topo = new No(val);
        this->n++;
    }
    else
    {
        No *p = this->topo;
        this->topo = new No(val);
        this->topo->setProx(p);
        this->n++;
    }
    
}

void Pilha::desempilhar()
{
    if (this->topo == NULL || this->n == -1)
        cout << "\nA pilha esta vazia!!!" << endl;
    else
    {
        No *p = this->topo;
        this->topo = p->getProx();
        delete p;
        this->n--;
    }
}

No* Pilha::busca()
{
    if (this->topo == NULL)
        cout << "\nLista vazia!!!" << endl;
    else
    {
        return this->topo;
    }    
}

int Pilha::getTam()
{
    return this->n;
}