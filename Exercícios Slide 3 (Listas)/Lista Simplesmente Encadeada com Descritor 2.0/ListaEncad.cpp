#include "ListaEncad.h"

ListaEncad::ListaEncad(/* args */)
{
    this->n = 0;
    this->primeiro = NULL;
    this->ultimo = NULL;
}

ListaEncad::~ListaEncad()
{
    No *p = this->primeiro;
    while (p->getProx() != NULL)
    {
        No *t = p->getProx();
        delete p;
        p = t;
    }
}

void ListaEncad::insereFinal(int val)
{
    if (this->listaVazia())
    {
        this->primeiro  = new No(val);
        this->ultimo = this->primeiro;
        this->n += 1;
    }
    else
    {
        No *p = this->ultimo;
        this->ultimo = new No(val);
        p->setProx(this->ultimo);
        this->n += 1;
    }
}

void ListaEncad::removeFinal()
{
    if (!this->listaVazia())
    {
        No *p = this->primeiro;
        No *q;
        while (p->getProx() != NULL)
        {
            q = p;
            p = p->getProx();
        }
        delete p;
        this->ultimo = q;
        this->ultimo->setProx(NULL);
        this->n -= 1;
    }
    else
    {
        cout << "A lista esta vazia!!" << endl;
    }
}

void ListaEncad::insereAposValorX(int x, int valor)
{
    if (this->listaVazia())
    {
        this->primeiro = new No(valor);
        this->ultimo = this->primeiro;
        this->n += 1;
    }
    else
    {
        No *p = this->primeiro;
        No *q;
        int flag = 0;
        while (p->getProx() != NULL)
        {
            if (p->getInfo() == x)
            {
                No *novo_No = new No(valor);
                novo_No->setProx(q);
                p->setProx(novo_No);
                this->n += 1;

                flag = 1;
                return;
            }
            else if (this->ultimo->getInfo() == x)
            {
                this->insereFinal(valor);
                this->n += 1;

                flag = 1;
                return;
            }
            p = p->getProx();
            q = p->getProx();
        }
        if (flag == 0)
            cout << "ERRO: O valor X nao foi encontrado!" << endl;
    }
}

void ListaEncad::imprime()
{
    if (!this->listaVazia())
    {
        cout << "\n**********************IMPRIMINDO A LISTA***********************\n";
        No* p = this->primeiro;
        while (p != NULL)
        {
            cout << p->getInfo() << " " << endl;
            p = p->getProx();
        }
    }
    else
        cout << "Lista vazia!\n";
}

bool ListaEncad::listaVazia()
{
    return (this->n==0);
}