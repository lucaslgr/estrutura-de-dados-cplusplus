#include "ListaEncad.h"

ListaEncad::ListaEncad(/* args */)
{
    this->primeiro = NULL;
}

ListaEncad::~ListaEncad()
{
    No *p = this->primeiro;
    No *t;

    while (p != NULL)
    {
        t = p->getProx();
        delete p;
        p = t;
    }
}

void ListaEncad::insereInicio(int val)
{    
    No *p = this->primeiro;
    this->primeiro = new No(val);
    this->primeiro->setProx(p);
}

void ListaEncad::insereFinal(int val)
{
    if (this->primeiro!=NULL)
    {
        No *p = this->primeiro;
        while (p->getProx() != NULL)
        {
            p = p->getProx();
        }
        p->setProx(new No(val));
    }
    else
    {
        this->primeiro = new No(val);
    }
}

void ListaEncad::removeInicio()
{
    if (this->primeiro == NULL)
        cout << "A lista esta vazia!!" << endl;
    else
    {
        No *p = this->primeiro;
        this->primeiro = p->getProx();
        delete p;
    }
}

void ListaEncad::removeFinal()
{
    if (this->primeiro == NULL)
        cout << "A lista esta vazia!!" << endl;
    else
    {
        No *p = this->primeiro;
        No* q;
        while (p->getProx() != NULL)
        {
            q = p;
            p = p->getProx();
        }
        delete p;
        q->setProx(NULL);
    }
}

bool ListaEncad::busca(int val)
{
    No* p = this->primeiro;
    while (p != NULL)
    {
        if (p->getInfo() == val)
            return true;

        p = p->getProx();
    }
    return false; //se não entrar no return true, entra aqui
}

bool ListaEncad::removePorValor(int val)
{
    if (this->primeiro == NULL)
        cout << "A lista esta vazia!!" << endl;
    else if(this->primeiro->getInfo() == val)
    {
        this->removeInicio();
        return true;
    }
    else
    {
        No *p = this->primeiro;
        No *q;
        while (p != NULL)
        {
            if (p->getInfo() == val)
            {
                q->setProx(p->getProx());
                delete p;
                return true;
            }
            q = p;
            p = p->getProx();
        }
    }
    return false; //se não entrar no return true, entra aqui
}

void ListaEncad::imprime()
{
    if (this->primeiro == NULL)
        cout << "A lista esta vazia!!" << endl;
    else
    {
        No *p = this->primeiro;
        cout << "\n********************IMPRIMINDO A LISTA***********************\n";
        while (p != NULL)
        {
            cout << p->getInfo() << " ";
            p = p->getProx();
        }
    }
}