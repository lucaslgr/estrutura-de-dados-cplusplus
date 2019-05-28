#include "Pilha.h"

Pilha::Pilha()
{
    this->topo = NULL;
}

Pilha::~Pilha()
{
    No *p = this->topo;
    No *q;
    while (p != NULL)
    {
        q = p;
        p = p->getProx();
        delete q;
    }
    delete p;
    cout << "A pilha foi deletada!" << endl;
}

bool Pilha::PilhaVazia()
{
    return (this->topo == NULL);
}

void Pilha::empilhar(int val)
{
    if (this->PilhaVazia())
    {
        // cout << "Inseriu" << endl;
        this->topo = new No(val);
    }
    else
    {
        No *p = this->topo;
        // cout << "Inseriu" << endl;
        No * novo_No = new No(val);
        novo_No->setProx(p);
        this->topo = novo_No;
    }
}

void Pilha::desempilhar()
{
    if (this->PilhaVazia())
    {
        cout << "Pilha vazia!!" << endl;
        // exit(0);
    }
    else
    {
        No *p = this->topo;
        this->topo = p->getProx();
        delete p;
    }
}

No* Pilha::busca()
{
    if (this->PilhaVazia())
    {
        cout << "Pilha vazia!!" << endl;
        exit(0);
    }
    else
    {
        return this->topo;
    }
}

int Pilha::getTam()
{
    int contador = 0;
    No *p = this->topo;

    while (p != NULL)
    {
        // cout << "Passou aqui " << endl;
        contador += 1;
        p = p->getProx();
    }
    return contador;
}