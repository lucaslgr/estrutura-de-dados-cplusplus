#include "Pilha.h"

Pilha::Pilha()
{
    topo = NULL;
}

Pilha::~Pilha()
{
    while (topo != NULL){
        desempilha();
    }
}

void Pilha::setTopo(No* p){
    topo = p;
}

No* Pilha::getTopo(){
    return topo;
}

void Pilha::empilha(int val){
    No* p = new No();

    p->setInfo(val);
    p->setProx(topo);
    topo = p;

}

void Pilha::desempilha(){
    if (topo != NULL){
        No* p = topo;
        topo = p->getProx();
        delete p;
    }
    else exit(2);
}

int Pilha::busca(){
    if(topo == NULL){
        cout << "Pilha vazia!";
        exit(1);
    }
    else {
        return topo->getInfo();
    }

}
