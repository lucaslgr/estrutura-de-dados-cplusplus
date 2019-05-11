#include "ListaDupla.h"

ListaDupla::ListaDupla()
{
    this->primeiro = NULL;
    this->ultimo = NULL;
    this->n = 0;
}

ListaDupla::~ListaDupla()
{
    if(n ==  0)
        cout << "A lista já está vazia!!";
    else
    {
        NoDuplo *p;

        p  = this->primeiro;
        while(p != NULL)
        {
            NoDuplo *p_prox;

            p_prox = p->getProx();

            delete p;
            
            n -= 1;
            p = p_prox;
        }
    }
}

void ListaDupla::insereInicio(int val)
{
    NoDuplo* p = this->primeiro;

    this->primeiro = new NoDuplo(val);

    this->primeiro->setAnt(NULL);
    this->primeiro->setProx(p);
}

void ListaDupla::insereFinal(int val)
{
    NoDuplo *p = this->ultimo;

    this->ultimo = new NoDuplo(val);
    this->ultimo->setProx(NULL);
    this->ultimo->setAnt(p);
}

void ListaDupla::eliminaInicio()
{
    if(n != 0)
    {
        cout << "A lista esta vazia!" << endl;
    }
    else
    {
        NoDuplo *p = this->primeiro;
        this->primeiro = this->primeiro->getProx();
        delete p;
    }
}