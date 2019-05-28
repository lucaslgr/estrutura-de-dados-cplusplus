#include "ListaEncad.h"

ListaEncad::ListaEncad(/* args */)
{
    this->primeiro = NULL;
}

ListaEncad::~ListaEncad()
{
    No *p = this->primeiro;
    No *q;

    while (p->getProx() != NULL)
    {
        q = p;
        p = p->getProx();
        delete q;
    }
    delete p;
    cout << "\nA lista foi deletada!\n";
}

bool ListaEncad::ListaVazia()
{
    return (this->primeiro == NULL);
}

void ListaEncad::insereInicio(int val)
{
    No *p = this->primeiro;
    this->primeiro = new No(val);
    this->primeiro->setProx(p);
}

void ListaEncad::insereFinal(int val)
{
    if (this->primeiro == NULL) //Caso de lista vazia
    {
        this->primeiro = new No(val);
    }
    else
    {
        No *p = this->primeiro;
        while(p->getProx() != NULL)
        {
            p = p->getProx();
        }
        p->setProx(new No(val));
    }
}

void ListaEncad::insereOrdenado(int val)
{
    if (this->primeiro == NULL) //Caso de lista vazia
    {
        // cout << "Inseriu no inicio" << endl;
        this->primeiro = new No(val);
    }
    else
    {
        int flag = 0;

        if (this->primeiro->getInfo() >= val) //Caso do primeiro ser maior
        {
            this->insereInicio(val);
            flag = 1;
        }
        No *p = this->primeiro;
        No *q;
        while (p != NULL)
        {
            if (p->getInfo()>=val && q->getInfo()<val)
            {
                No *novo_No = new No(val);
                novo_No->setProx(p);
                q->setProx(novo_No);
                flag = 1;
            }
            q = p;
            p = p->getProx();
        }
        if(flag==0)
        {
            this->insereFinal(val);
            flag = 1;
        }
    }
}

void ListaEncad::removeFinal()
{
    if (this->ListaVazia())
    {
        cout << "Lista vazia!!" << endl;
        exit(0);
    }
    else
    {
        No *p = this->primeiro;
        No *q;

        while (p->getProx() != NULL)
        {
            q = p;
            p = p->getProx();
        }
        delete p;
        q->setProx(NULL);
    }
}

void ListaEncad::imprimirLista()
{
    if (this->ListaVazia())
    {
        cout << "Lista vazia!!" << endl;
        exit(0);
    }
    else
    {
        cout << "\n***************** IMPRIMINDO A LISTA *********************\n";
        No *p = this->primeiro;
        while (p != NULL)
        {
            cout << p->getInfo() << " ";
            p = p->getProx();
        }
    }
}