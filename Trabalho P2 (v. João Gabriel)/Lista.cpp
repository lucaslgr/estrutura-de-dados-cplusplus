#include "Lista.h"

Lista::Lista()
{
    primeiro = NULL;
}

Lista::~Lista()
{
    while(primeiro != NULL){
        removeFinal();
    }
}

bool Lista::vazia()
{
    No* p = primeiro;
    if(p == NULL){
        return true;
    }
    else return false;
}

void Lista::removeFinal()
{
    if(primeiro == NULL){
        cout << "Lista Vazia";
        exit(4);
    }
    else{
        No* p = primeiro;
        if(p->getProx() == NULL){ //APENAS 1 ELEMENTO NA LISTA
            primeiro = NULL;
            delete p;
        }
        else{
            No* q = p; //PONTEIRO PARA O PENULTIMO
            p = p->getProx();
            while (p->getProx() != NULL){
                q = q->getProx();
                p = p->getProx();
            }
            q->setProx(NULL);
            delete p;
        }
    }

}

void Lista::insereOrdenado(int val)
{
    No* p = new No();
    p->setInfo(val);
    if(primeiro == NULL || val < primeiro->getInfo()){ //NAO TEM ELEMENTOS NA LISTA ou O VALOR É MENOR QUE O PRIMEIRO ELEMENTO
        p->setProx(primeiro);
        primeiro = p;
    }
    else{
        No* q = primeiro;
        while(q->getProx() != NULL){
            //VERIFICANDO A CONDIÇÃO DO VALOR A SER INSERIDO ESTAR ENTRE DOIS VALORES DA LISTA
            if(val > q->getInfo() && val < q->getProx()->getInfo()){
                p->setProx(q->getProx());
                q->setProx(p);
                return;
            }
            q = q->getProx();
        }
        //CASO NO SEJA INSERIDO O VALOR ANTERIORMENTE, O ELEMENTO É O ÚLTIMO DA LISTA (MAIOR DE TODOS)
        q->setProx(p);
        p->setProx(NULL);
    }
}

void Lista::imprime()
{
    No* p = primeiro;
    while (p != NULL){
        cout << p->getInfo() << " ";
        p = p->getProx();
    }
    cout << endl;
}
