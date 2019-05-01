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
    if(this->primeiro == NULL)
    {
        this->primeiro = new No(val);
        this->primeiro->setProx(NULL);
    }
    else
    {
        //TAMBÉM FUNCIONA
        // No *p = new No(val);
        // p->setProx(this->primeiro);
        // this->primeiro = p;
        
        No *p = this->primeiro;
        this->primeiro = new No(val);
        this->primeiro->setProx(p);
    }    
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
        No *p_prox = this->primeiro->getProx();
        
        // delete this->primeiro;
        // this->primeiro = p_prox;
        this->primeiro = this->primeiro->getProx();
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
    if (this->primeiro == NULL)
        cout << "Lista vazia!";
    else
    {
        No *p = this->primeiro;

        while(p->getProx() != NULL)
        {
            No *p_anterior = p;

            cout << "Passou aqui no while" << endl;
            if (p->getProx()->getInfo() == val)
            {
                cout << "Passou aqui, encontrou val" << endl; 
                //Fecho o laço, pulando o que eu quero deletar
                p->setProx(p->getProx()->getProx());

                //deleto o do meio
                delete p->getProx();
                return true;
                break;
            }
            p = p->getProx();
        }

        return false; //Se não entrar no if e retornar true, passará aqui
    }
}

void Lista::imprime()
{
    // system("cls");

    if (this->primeiro == NULL)
        cout << "Lista vazia!!!" << endl;
    else
    {
        cout << "\n************************************ IMPRIMINDO A LISTA ************************************" << endl;
        No *p = this->primeiro;

        while(p != NULL)
        {
            cout << p->getInfo() << " ";
            p = p->getProx();
        }
    }
}