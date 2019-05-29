#include "ListaDuplaEncadCircular.h"

ListaDuplaEncadCircular::ListaDuplaEncadCircular()
{
    this->primeiro = NULL;

    this->ultimo = this->primeiro;

    this->n = 0;
}

ListaDuplaEncadCircular::~ListaDuplaEncadCircular()
{
    NoDuplo* p = this->primeiro;
    NoDuplo* t;

    int cont = 0; //Contador
    while (cont<=this->n)
    {
        t = p->getProx();
        delete p;
        p = t;
        cont += 1;
    }
    cout << "\nLista destruída!\n" << endl;
}

void ListaDuplaEncadCircular::insereInicio(int val)
{
    if (this->n == 0) //Condicao de lista vazia
    {
        NoDuplo *novo_No = new NoDuplo(val);
        this->primeiro = novo_No;
        this->ultimo = novo_No;
        this->primeiro->setAnt(this->ultimo);
        this->ultimo->setProx(novo_No);
        this->n += 1;
        return;
    }
    else
    {
        NoDuplo *p = this->primeiro;
        this->primeiro = new NoDuplo(val);
        this->primeiro->setProx(p);
        this->primeiro->setAnt(this->ultimo);
        this->ultimo->setProx(this->primeiro);

        this->n += 1;
        return;
    }
}

void ListaDuplaEncadCircular::removeInicio()
{
    if (this->n == 0)
    {
        cout << "A lista esta vazia!!" << endl;
    }
    else
    {
        NoDuplo *p = this->primeiro;
        this->primeiro = p->getProx();
        delete p;
        this->primeiro->setAnt(this->ultimo);
        this->ultimo->setProx(this->primeiro);
        this->n -= 1;
    }
}

void ListaDuplaEncadCircular::imprime()
{
    NoDuplo *p = this->primeiro;

    cout << "\n****************IMPRIMINDO A LISTA******************\n";
    int cont = 0;
    while (cont < this->n)
    {
        cout << p->getInfo() << " ";
        p = p->getProx();
        cont += 1;
    }
}