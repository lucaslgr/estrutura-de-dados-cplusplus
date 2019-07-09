#include "ListaInteiro.h"

ListaInteiro::ListaInteiro()
{
    primeiro = NULL;
}

ListaInteiro::~ListaInteiro()
{
    NoInteiro *p = primeiro;
    while (p != NULL)
    {
        NoInteiro *t = p->getProx();
        delete p;
        p = t;
    }
}

void ListaInteiro::insereInicio(int val)
{
    NoInteiro *p = new NoInteiro(); // cria NoInteiro apontado por p
    p->setInfo(val);
    p->setProx(primeiro);
    primeiro = p;
}

bool ListaInteiro::removePorValor(int val)
{
    NoInteiro *p, *q; //Q é o penúltimo
    if (primeiro == NULL)
    {
        cout << "ListaInteiro Vazia";
    }
    else
    {
        p = primeiro;
        if (p->getInfo() == val)
        { //Elemento está NoInteiro primeiro
            primeiro = NULL;
            delete p;
            return true;
        }
        q = p;
        while (p->getProx() != NULL)
        {
            if (p->getInfo() == val)
            {
                q->setProx(NULL);
                delete p;
                return true;
            }
            q = p;
            p = p->getProx();
        }
        return false;
    }
}

void ListaInteiro::imprime()
{
    NoInteiro *p = primeiro;
    while (p != NULL)
    {
        cout << p->getInfo();
        p = p->getProx();
    }
    cout << "\n\n";
}

bool ListaInteiro::busca(int val)
{
    NoInteiro *p = primeiro;
    while (p != NULL)
    {
        if (p->getInfo() == val)
            return true;
        p = p->getProx();
    }
    return false;
}