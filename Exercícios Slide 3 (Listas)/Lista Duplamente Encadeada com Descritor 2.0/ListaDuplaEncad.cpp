#include "ListaDuplaEncad.h"

ListaDuplaEncad::ListaDuplaEncad()
{
    this->primeiro = NULL;
    this->ultimo = NULL;
    this->n = 0;
}

ListaDuplaEncad::~ListaDuplaEncad()
{
    NoDuplo* p = this->primeiro;
    NoDuplo* t;
    while (p->getProx() != NULL)
    {
        t = p->getProx();
        delete p;
        p = t;
    }
    cout << "\nLista destruída!\n" << endl;
}

void ListaDuplaEncad::insereFinal(int val)
{
    if (this->primeiro == NULL) //Condicao de lista vazia
    {
        NoDuplo *novo_No = new NoDuplo(val);
        this->primeiro = novo_No;
        this->ultimo = novo_No;

        this->n += 1;
        return;
    }
    else
    {
        NoDuplo *p = this->ultimo;
        this->ultimo = new NoDuplo(val);
        this->ultimo->setAnt(p);
        p->setProx(this->ultimo);

        this->n += 1;
        return;
    }
}

void ListaDuplaEncad::removeFinal()
{
    if (this->n == 0)
    {
        cout << "A lista esta vazia!!" << endl;
    }
    else
    {
        NoDuplo *p = this->ultimo->getAnt();
        this->ultimo = p;
        this->ultimo->setProx(NULL);
        this->n -= 1;
    }
}

void ListaDuplaEncad::removeNoCentral()
{
    if ((this->n % 2) != 0) //Se for ímpar
    {
        int posCentral = (this->n/2);
        cout << "Posicao central: " << posCentral << endl; //Teste
        
        int cont = 0;
        NoDuplo *p = this->primeiro;
        NoDuplo *q;
        while (p != NULL)
        {
            if (cont == posCentral)
            {
                q->setProx(p->getProx());
                p->getProx()->setAnt(q);
                delete p;
                this->n -= 1;
                return;
            }
            cont += 1;
            q = p;
            p = p->getProx();
        }
    }
    else
        cout << "A lista nao eh impar!!!\n";
}

void ListaDuplaEncad::imprime()
{
    NoDuplo *p = this->primeiro;

    cout << "\n****************IMPRIMINDO A LISTA******************\n";
    while (p != NULL)
    {
        cout << p->getInfo() << " ";
        p = p->getProx();
    }
}

void ListaDuplaEncad::imprimeReverso()
{
    if (this->n == 0)
    {
        cout << "Lista vazia!!" << endl;
        return;
    }

    cout << "\n****************IMPRIMINDO A LISTA REVERSAMENTE******************\n";

    NoDuplo* p = this->ultimo;

    while (p != NULL)
    {
        cout << p->getInfo() << " ";
        p = p->getAnt();
    }
}