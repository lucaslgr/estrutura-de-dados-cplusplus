#include "Arvbin.h"

Arvbin::Arvbin()
{
    this->raiz = NULL;
}

Arvbin::~Arvbin()
{

}

void Arvbin::inserir(int chave)
{
    if (this->raiz == NULL)
    {
        this->raiz = new No(chave);
        this->nNo += 1;
    }
    else
    {
        this->inserirAux(this->raiz, chave);
        this->nNo += 1;
    }
}

void Arvbin::preOrdem(No *no)
{
    if(no != NULL)
    {
        cout << no->getInfo() << " ";
        this->preOrdem(no->getEsq());
        this->preOrdem(no->getDir());
    }
}

void Arvbin::emOrdem(No *no)
{
    if (no != NULL)
    {
        this->emOrdem(no->getEsq());
        cout << no->getInfo() << " ";
        this->emOrdem(no->getDir());
    }
}


void Arvbin::menor(No *no)
{
    if (no != NULL)
    {
        this->menor(no->getEsq());
        if (this->VarControle == 0)
        {
            cout << no->getInfo() << " ";
            this->VarControle = 1;
        }
    }
}

//Funcao utilizada recursivamente em inserir
void Arvbin::inserirAux(No *no, int chave)
{
    if (chave < no->getInfo())
    {
        if (no->getEsq() == NULL)
            no->setEsq(new No(chave));
        else
            this->inserirAux(no->getEsq(), chave);
    }
    else if (chave > no->getInfo())
    {
        if (no->getDir() == NULL)
            no->setDir(new No(chave));
        else
            this->inserirAux(no->getDir(), chave);
    }
}

bool Arvbin::busca(int chave)
{
    if(this->raiz == NULL)
        cout << "\nA arvore esta vazia!\n";
    else
    {
        this->buscaAux(this->raiz, chave);
    }
}

//Funcao utilizada recursivamente no busca
bool Arvbin::buscaAux(No* no, int chave)
{
    if(no->getInfo() == chave)
        return true;
    else if (buscaAux(no->getEsq(), chave))
        return true;
    else
        return buscaAux(no->getDir(), chave);
}

int Arvbin::numNos()
{
    return this->nNo;
}

No* Arvbin::getRaiz()
{
    return this->raiz;
}