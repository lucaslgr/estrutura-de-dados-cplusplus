#include "ListaEncadDupla.h"

ListaEncadDupla::ListaEncadDupla(/* args */)
{
    this->primeiro = NULL;
    this->ultimo = NULL;
    this->n = 0;
}

ListaEncadDupla::~ListaEncadDupla()
{
    NoDuplo *p = this->primeiro;
    NoDuplo *t;

    while (p != NULL)
    {
        t = p->getProx();
        delete p;
        p = t;
    }
    this->n = 0;
    this->primeiro = NULL;
    this->ultimo = NULL;
}

bool ListaEncadDupla::busca(int val)
{
    if (this->n == 0)
    {
        cout << "A lista esta vazia!" << endl;
    }
    else
    {
        NoDuplo *p = this->primeiro;
        
        while (p != NULL)
        {
            if (p->getInfo() == val)
                return true;
            p = p->getProx();
        }
        return false;
    }
}

void ListaEncadDupla::insereInicio(int val)
{
    if (this->n == 0)
    {
        this->primeiro = new NoDuplo(val);
        this->ultimo = this->primeiro;
        this->n += 1;
    }
    else
    {
        NoDuplo *p = this->primeiro;
        this->primeiro = new NoDuplo(val);
        this->primeiro->setProx(p);
        p->setAnt(this->primeiro);
        this->n+=1;
    }
}

void ListaEncadDupla::insereFinal(int val)
{
    if (this->n == 0)
    {
        this->primeiro = new NoDuplo(val);
        this->ultimo = this->ultimo;
        this->n += 1;
    }
    else
    {
        NoDuplo *p = this->ultimo;

        this->ultimo = new NoDuplo(val);
        p->setProx(this->ultimo);
        this->ultimo->setAnt(p);
        
        this->n += 1;
    }
}

void ListaEncadDupla::eliminaInicio()
{
    if (this->n == 0)
        cout << "\nA lista esta vazia!!" << endl;
    else
    {
        NoDuplo *p = this->primeiro;
        this->primeiro = p->getProx();
        delete p;
        this->primeiro->setAnt(NULL);
        this->n -= 1;
    }
}

void ListaEncadDupla::eliminaFinal()
{
    if (this->n == 0)
        cout << "\nA lista esta vazia!!" << endl;
    else
    {
        NoDuplo *p = this->ultimo;
        this->ultimo = p->getAnt();
        delete p;
        this->ultimo->setProx(NULL);
        this->n -= 1;
    }
}

void ListaEncadDupla::imprimeReverso()
{
    if (this->n == 0)
        cout << "\nA lista esta vazia!!" << endl;
    else
    {
        NoDuplo *p = this->ultimo;
        cout << "\n**********************IMPRIME REVERSO****************************\n";
        for (NoDuplo *p = this->ultimo; p != NULL; p = p->getAnt())
        {
            cout << p->getInfo()<< " ";
        }
        //OU
        // NoDuplo *p = this->ultimo;
        // while (p != NULL)
        // {
        //     cout << p->getInfo() << " ";
        //     p = p->getAnt();
        // }
    }
}