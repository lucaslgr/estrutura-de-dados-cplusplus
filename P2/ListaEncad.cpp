#include "ListaEncad.h"

ListaEncad::ListaEncad()
{
    this->primeiro = NULL;
}

ListaEncad::~ListaEncad()
{
    No* p = this->primeiro;
    No* t;
    while(p != NULL)
    {
        t = p->getProx();
        delete p;
        p = t;
    }
    this->primeiro = NULL;
}

void ListaEncad::insereFinal(int val)
{
    if(this->primeiro == NULL)
        this->primeiro = new No(val);
    else
    {
        No* p = this->primeiro;

        while(p->getProx() != NULL)
        {
            p = p->getProx();
        }
        p->setProx(new No(val));
    }
}

void ListaEncad::removeInicio()
{
    if(this->primeiro == NULL)
        cout << "\nA lista esta vazia!\n" << endl;
    else
    {
        No* p = this->primeiro;
        this->primeiro = p->getProx();
        delete p;
    }
}

void ListaEncad::removeFinal()
{
    if(this->primeiro == NULL)
        cout << "\nA lista esta vazia!\n" << endl;
    else
    {
        No *p = this->primeiro;
        No *q;
        while(p->getProx()!=NULL)
        {
            q = p;
            p = p->getProx();
        }
        q->setProx(NULL);
        delete p;
    }
}

void ListaEncad::removePorValor(int val)
{
    if(this->primeiro == NULL)
    {
        cout << "\nA lista esta vazia!\n" << endl;
    }
    else
    {
        //int flag = 0;
        if(this->primeiro->getInfo() == val)
        {
            this->removeInicio();
            //flag = 1;
        }
        No* p = this->primeiro;
        No* q;
        while(p != NULL )
        {
            if(p->getInfo()==val)
            {
                q->setProx(p->getProx());
                delete p;
            }
            q = p;
            p = p->getProx();
        }
    }
}

void ListaEncad::removeTodosPorValor(int val)
{
    if(this->primeiro == NULL)
    {
        cout << "\nA lista esta vazia!\n" << endl;
    }
    else
    {
        int contador = 0;
        No* p = this->primeiro;
        while(p != NULL )
        {
            if(p->getInfo()==val)
            {
                contador +=1;
            }
            p = p->getProx();
        }
        if(contador == 0)
        {
            cout << "\nValor nao existe na lista\n";
            return;
        }
        cout << "\nO numero de ocorrencias encontradas foi de: "<< contador << endl;
        for(int i = 0; i < contador; i++)
        {
            //cout << "\nPassou aqui" << endl;
            this->removePorValor(val);
        }
    }
}

void ListaEncad::imprime()
{
    if(this->primeiro == NULL)
        cout << "\nA lista esta vazia!\n" << endl;
    else
    {

        No* p = this->primeiro;

        cout << "\n******************IMPRIME A LISTA*********************\n";
        while(p != NULL)
        {
            cout << p->getInfo() << " ";
            p = p->getProx();
        }
    }
}

No* ListaEncad::getPrimeiro()
{
    return this->primeiro;
}
