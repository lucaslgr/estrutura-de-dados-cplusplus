#include "ListaString.h"

ListaString::ListaString()
{
    primeiro = NULL;
}

ListaString::~ListaString()
{
    NoString *p = primeiro;
    while (p != NULL)
    {
        NoString *t = p->getProx();
        delete p;
        p = t;
    }
}

void ListaString::insereInicio(string info)
{
    NoString *p = new NoString(); // cria NoString apontado por p
    p->setInfo(info);
    p->setProx(primeiro);
    primeiro = p;
}

bool ListaString::removePorValor(string info)
{
    NoString *p, *q; //Q é o penúltimo
    if (primeiro == NULL)
    {
        cout << "ListaString Vazia";
    }
    else
    {
        p = primeiro;
        if (p->getInfo() == info)
        { //Elemento está NoString primeiro
            primeiro = NULL;
            delete p;
            return true;
        }
        q = p;
        while (p->getProx() != NULL)
        {
            if (p->getInfo() == info)
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

void ListaString::imprime()
{
    NoString *p = primeiro;
    while (p != NULL)
    {
        cout << p->getInfo();
        p = p->getProx();
    }
    cout << "\n\n";
}

bool ListaString::busca(string info)
{
    NoString *p = primeiro;
    while (p != NULL)
    {
        if (p->getInfo() == info)
            return true;
        p = p->getProx();
    }
    return false;
}