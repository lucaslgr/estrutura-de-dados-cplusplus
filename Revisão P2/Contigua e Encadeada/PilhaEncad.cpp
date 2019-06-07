#include "PilhaEncad.h"

PilhaEncad::PilhaEncad(/* args */)
{
    this->topo = NULL;
}

PilhaEncad::~PilhaEncad()
{
    No * p = this->topo;

    No *t;

    while (p != NULL)
    {
        t = p->getProx();
        delete p;
        p = t;
    }
    this->topo = NULL;
}

void PilhaEncad::empilhar(int val)
{
    if (this->topo == NULL)
    {
        this->topo = new No(val);
    }
    else
    {
        No *p = this->topo;
        this->topo = new No(val);
        this->topo->setProx(p);
    }
}

void PilhaEncad::desempilhar()
{
    if (this->topo == NULL)
    {
        cout << "\nA pilha esta vazia!" << endl;
    }
    else
    {
        No *p = this->topo;
        this->topo = p->getProx();
        delete p;
    }
}

void PilhaEncad::imprime()
{
    if (this->topo == NULL)
    {
        cout << "\nA pilha esta vazia!" << endl;
    }
    else
    {
        cout << "\n\t\tImprimindo a Pilha\t\t\n" << endl;
        
        // while (this->topo != NULL)
        // {
        //     cout << this->topo->getInfo() << " ";
        //     this->desempilhar();
        // }
        
        //OU

        No *p = this->topo;
        while (p != NULL)
        {
            cout << p->getInfo() << " ";
            p = p->getProx();
        }
        
    }
}

bool PilhaEncad::vazia()
{
    return (this->topo == NULL);
}

bool PilhaEncad::busca(int val)
{
    No *p = this->topo;
    while (p != NULL)
    {
        if (p->getInfo() == val)
        {
            return true;
        }
        p = p->getProx();
    }
    return false;
}