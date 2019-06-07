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

void ListaEncad::insereOrdenado(int val)
{
    int flag = 0;
    if (this->primeiro == NULL)
    {
        No *p = new No(val);
        this->primeiro = p;
        this->ultimo = p;
        n++;
        flag = 1;
    }
    else if (this->primeiro->getInfo() >= val)
    {
        this->insereInicio(val);
        flag = 1;
    }
    else
    {
        No *p = this->primeiro;
        No *q;
        while (p->getProx() != NULL)
        {
            if (q->getInfo()<val && p->getInfo()>= val)
            {
                No *novo_No = new No(val);
                novo_No->setProx(p);
                q->setProx(novo_No);
                flag = 1;
                this->n += 1;
            }
            q = p;
            p = p->getProx();
        }
    }
    if (flag == 0)
        this->insereFinal(val);
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