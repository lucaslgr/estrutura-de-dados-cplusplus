#pragma once
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <ctime>
#include "No.h"

using namespace std;

class Arvore
{
    //STRUCT
private:
    No *raiz;

    //VETOR PARA CONTROLE DAS CHAVES (OBJETIVO DE NÃO PERMITIR A UTILIZAÇÃO DE UMA CHAVE REPETIDA)
    int *controle_Chaves;
    //VETOR PARA CONTROLE DOS NOMES (OBJETIVO DE NÃO PERMITIR A UTILIZAÇÃO DE UMA CHAVE REPETIDA)
    string *controle_Nomes;

public:
    //CONSTRUTOR
    Arvore();

    //INSERE NOVO NO
    void inserir(string nome);

    //INSERE UMA FOLHA A DIREITA OU A ESQUERDA DEPENDENDO DO VALOR DA CHAVE SEM CHAVE REPETIDA
    void inserirAux(No *no, int chave, string nome);

    //RETORNA A RAIZ
    No *getRaiz();

    //PERCORRIMENTO EM ORDEM
    void emOrdem(No *no);

    //BUSCA EM ÁRVORE BINÁRIA por ID
    void buscaPorId(No *no, int chave);

    //BUSCA EM ÁRVORE BINÁRIA por nome
    void buscaPorNome(No *no, string n);
};