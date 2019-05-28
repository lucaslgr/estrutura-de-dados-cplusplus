#include "ListaEncad.h"

ListaEncad::ListaEncad()
{
    this->primeiro = NULL;
}

ListaEncad::~ListaEncad()
{
}

void ListaEncad::insereInicio(int val)
{
    if (this->primeiro == NULL)
    {
        No *p = new No(val);
        this->primeiro = p;
        this->ultimo = p;
        n ++;
    }
    else
    {
        No *p = this->primeiro;
        this->primeiro = new No(val);
        this->primeiro->setProx(p);
        n++;
    }
}

void ListaEncad::insereFinal(int val)
{
    if (this->primeiro == NULL)
    {
        No *p = new No(val);
        this->primeiro = p;
        this->ultimo = p;
        n++;
    }
    else
    {
        this->ultimo->setProx(new No(val));
        this->ultimo = this->ultimo->getProx();
        n++;
    }
}

void ListaEncad::imprime()
{
    if (this->primeiro == NULL)
    {
        cout << "A lista esta vazia!!!" << endl;
        exit(0);
    }
    else
    {
        cout << "\n****************************IMPRIMINDO A LISTA*************************************\n";
        cout << endl << "Numero de elementos: " << this->n << endl;
        No *p = this->primeiro;
        while (p !=  NULL)
        {
            cout << p->getInfo() << " ";
            p = p->getProx();
        }
    }    
}