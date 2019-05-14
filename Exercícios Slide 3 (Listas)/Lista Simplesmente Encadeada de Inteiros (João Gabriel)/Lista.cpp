#include "Lista.h"

Lista::Lista()
{
    primeiro = NULL;
}

Lista::~Lista()
{
    No *p = primeiro;
    while(p != NULL)
    {
        No *t = p->getProx();
        delete p;
        p = t;
    }
}

void Lista::insereInicio(int val)
{
    No *p = new No(); // cria No apontado por p
    p->setInfo(val);
    p->setProx(primeiro);
    primeiro = p;
}

void Lista::insereFinal(int val)
{
    No *p = new No();
    No *q;

    if(primeiro == NULL){
        p->setInfo(val);
        p->setProx(primeiro);
        primeiro = p;
    }
    else {
        q = primeiro;
        while(q->getProx() != NULL){
            q = q->getProx();
        }
        p->setInfo(val);
        p->setProx(NULL);
        q->setProx(p);
    }
}

void Lista::removeInicio()
{
    No *p;
    if(primeiro == NULL){
        cout << "Lista Vazia";
    }
    else{
        p = primeiro;
        primeiro = p->getProx();
        delete p;
    }
}

void Lista::removeFinal()
{
    No *p, *q; //Q é o penúltimo
    if(primeiro == NULL){
        cout << "Lista Vazia";
    }
    else{
        p = primeiro;

        if (p->getProx() == NULL){ //So tem um elemento na lista
            primeiro = NULL;
            delete p;
        }
        else{
            while(p->getProx() != NULL){
                q = p;
                p = p->getProx();
            }
            q->setProx(NULL);
            delete p;
        }
    }
}

bool Lista::removePorValor(int val)
{
    No *p, *q; //Q é o penúltimo
    if(primeiro == NULL){
        cout << "Lista Vazia";
    }
    else{
        p = primeiro;
        if(p->getInfo() == val){ //Elemento está no primeiro
            primeiro = NULL;
            delete p;
            return true;
        }
        q = p;
        while(p->getProx() != NULL){
            if(p->getInfo() == val){
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


void Lista::imprime(){
    No *p = primeiro;
    while(p != NULL){
        cout << p->getInfo();
        p = p->getProx();
    }
    cout << "\n\n";
}

bool Lista::busca(int val)
{
    No* p = primeiro;
    while(p != NULL)
    {
        if(p->getInfo() == val)
            return true;
        p = p->getProx();
    }
    return false;
}
