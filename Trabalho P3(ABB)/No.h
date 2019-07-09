#pragma once
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>

using namespace std;

class No
{
    //MEMBROS
private:
    No *esq, *dir;
    int id;
    string nome;

public:
    //NOVO NO
    No(int chave, string n);

    //PEGA O VALOR DO NO
    int getId();

    //RETORNA REFERÊNCIA DO FILHO ESQUERDO
    No *getEsq();

    //RETORNA REFERÊNCIA DO FILHO DIREITO
    No *getDir();

    //RETORNA O NOME
    string getNome();

    //ATRIBUI NOVO NO COMO FILHO ESQUERDO
    void setEsq(No *no);

    //ATRIBUI NOVO NO COMO FILHO DIREITO
    void setDir(No *no);

    //ATRIBUI ID NO NO
    void setId(int id);
};