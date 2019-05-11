#include "Lista.h"

Lista::Lista()
{
    this->primeiro = NULL;
}

Lista::~Lista()
{
    cout << "\n\nDestrutor da lista foi usado\n\n" << endl;
    No* p = this->primeiro;

    while(p != NULL)
    {
        No* p_prox = p->getProx();
        delete p;
        p = p_prox;
    }
}

void Lista::insereInicio(int val)
{
    // if(this->primeiro == NULL)
    // {
    //     this->primeiro = new No(val);
    //     this->primeiro->setProx(NULL);
    // }
    // else
    // {
    //     //TAMBÉM FUNCIONA
    //     // No *p = new No(val);
    //     // p->setProx(this->primeiro);
    //     // this->primeiro = p;
        
    //     No *p = this->primeiro;
    //     this->primeiro = new No(val);
    //     this->primeiro->setProx(p);
    // }

    No *p = new No(); // cria No apontado por p
    p->setInfo(val);
    p->setProx(primeiro);
    primeiro = p;
}

void Lista::insereFinal(int val)
{
    if(this->primeiro == NULL)
    {
        this->primeiro = new No(val);
        this->primeiro->setProx(NULL);
    }
    else
    {
        No *p = this->primeiro;

        //Percorrendo a lista até chegar no último
        while(p->getProx() != NULL)
        {
            p = p->getProx();
        }

        p->setProx(new No(val));
    }
}

void Lista::removeInicio()
{
    if (this->primeiro == NULL)
        cout << "Lista vazia!";
    else
    {
        No *p = this->primeiro;
        
        this->primeiro = p->getProx();
        
        delete p;
    }
}

void Lista::removeFinal()
{
    if (this->primeiro == NULL)
        cout << "Lista vazia!";
    else
    {
        No *p = this->primeiro;

        //Loop para chegar no penúltimo
        while(p->getProx()->getProx() != NULL)
        {
            p = p->getProx();
        }

        //Deletando o ultimo 1ª Método
        // No* ultimo = p->getProx();
        // delete ultimo;

        //Deletando o ultimo 2º Método
        delete p->getProx();

        //Aterrando o penultimo para se tornar o ultimo
        p->setProx(NULL);
    }
}

bool Lista::removePorValor(int val)
{
    No *p, *q; //q é o ultimo
    if (this->primeiro == NULL)
        cout << "\nLista vazia!!" << endl;
    else
    {
        p = this->primeiro;
        if (p->getInfo() == val) //Se estiver no primeiro cai aqui
        {
            this->primeiro = p->getProx();
            delete p;
            return true;
        }

        while (p->getProx() != NULL)
        {
            if (p->getProx()->getInfo() == val)
            {
                q = p->getProx(); //O que será deletado

                p->setProx(q->getProx()); // Emendando a lista

                delete q;

                return true;
            }
            p = p->getProx(); //Faz o while rodar      
        }
    }
    return false; //Se não retornar true em nenhum dos if's acima
}

void Lista::imprime()
{
    // system("cls");

    if (this->primeiro == NULL)
        cout << "\nLista vazia!!!" << endl;
    else
    {
        cout << "\n************************************ IMPRIMINDO A LISTA ************************************" << endl;
        No *p = this->primeiro;

        while (p != NULL) // Corrigido, anteriormente estava while(p->getProx() != NULL), logo ia só até o penultimo
        {
            cout << p->getInfo() << " ";
            p = p->getProx();
        }
    }
}