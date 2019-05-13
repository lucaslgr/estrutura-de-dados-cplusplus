#include "ListaDupla.h"

ListaDupla::ListaDupla()
{
    this->primeiro = NULL;
    this->ultimo = NULL;
    this->n = -1;
}

ListaDupla::~ListaDupla()
{
    if(n ==  0)
        cout << "A lista já está vazia!!";
    else
    {
        NoDuplo *p;

        p  = this->primeiro;
        while(p != NULL)
        {
            NoDuplo *p_prox;

            p_prox = p->getProx();

            delete p;
            
            n -= 1;
            p = p_prox;
        }
    }
}

bool ListaDupla::busca(int val)
{
    NoDuplo *p = this->primeiro;

    for (int i = 0; i <= this->n; i++)
    {
        if (p->getInfo() == val)
        {
            return true;
        }
        p = p->getProx();
    }

    return false; //Se não entrar no if, retorna falso
}

void ListaDupla::insereInicio(int val)
{
    //Caso lista vazia
    if (n == -1)
    {
        NoDuplo *FirstNo = new NoDuplo(val);

        this->primeiro = FirstNo;
        //this->primeiro->setProx(FirstNo);
        
        this->ultimo = FirstNo;
        //this->ultimo->setAnt(FirstNo);
        n++;
    }
    //1 ou mais
    else
    {
        NoDuplo *p = this->primeiro;
        this->primeiro = new NoDuplo(val);
        this->primeiro->setProx(p);
        p->setAnt(this->primeiro);

        //Aumentando o numero de elementos da contagem do descritor
        this->n++;
    }
}

void ListaDupla::insereFinal(int val)
{
    //Caso lista vazia
    if (n == -1)
    {
        NoDuplo *FirstNo = new NoDuplo(val);

        this->ultimo = FirstNo;
        this->primeiro = FirstNo;
        this->n++;
    }
    //1 ou mais
    else
    {
        NoDuplo *p = this->ultimo;

        this->ultimo = new NoDuplo(val);
        this->ultimo->setAnt(p);
        p->setProx(this->ultimo);
        this->n++;
    }
}

void ListaDupla::removeInicio()
{
    if(n == -1)
    {
        cout << "A lista esta vazia!" << endl;
    }
    else
    {
        NoDuplo *p = this->primeiro;
        this->primeiro = this->primeiro->getProx();
        delete p;
        //this->primeiro->setAnt(NULL);
        this->n--;
    }
}

void ListaDupla::removeFinal()
{
    if (n == -1)
    {
        cout << "A lista esta vazia!" << endl;
    }
    else
    {
        NoDuplo *p = this->ultimo;
        this->ultimo = this->ultimo->getAnt();
        delete p;
        this->n--;
    }
}

void ListaDupla::imprimeReverso()
{
    NoDuplo *p = this->ultimo;

    // cout << "Valor de n: " << this->n <<endl;
    cout << "\n****************************************-IMPRIME REVERSO-*********************************************\n\n";
    for (int i = this->n; i >= 0 ; i--)
    {
        cout << p->getInfo() << " ";
        p = p->getAnt();
    }

    cout << endl;
}

void ListaDupla::imprimeDireto()
{
    NoDuplo *p = this->primeiro;

    cout << "\n****************************************-IMPRIME DIRETO-*********************************************\n\n";
    for (int i = 0; i <= n; i++)
    {
        cout << p->getInfo() << " ";
        p = p->getProx();
    }
    cout << endl;
}