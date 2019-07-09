#include "No.h"

//NOVO NO
No::No(int chave, string n)
{
    this->id = chave;
    this->nome = n;
    this->esq = NULL;
    this->dir = NULL;
}

//PEGA O VALOR DO NO
int No::getId()
{
    return this->id;
}

//RETORNA REFERÊNCIA DO FILHO ESQUERDO
No *No::getEsq()
{
    return this->esq;
}

//RETORNA REFERÊNCIA DO FILHO DIREITO
No *No::getDir()
{
    return this->dir;
}

string No::getNome()
{
    return this->nome;
}

//ATRIBUI NOVO NO COMO FILHO ESQUERDO
void No::setEsq(No *no)
{
    this->esq = no;
}

//ATRIBUI NOVO NO COMO FILHO DIREITO
void No::setDir(No *no)
{
    this->dir = no;
}

//ATRIBUI ID NO NÓ
void No::setId(int id)
{
    this->id = id;
}