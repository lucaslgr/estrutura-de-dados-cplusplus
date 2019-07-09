#pragma once
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <ctime>
#include "No.h"

#include "ControleChaves/ListaInteiro.h"
#include "ControleChaves/NoInteiro.h"
#include "ControleNomes/ListaString.h"
#include "ControleNomes/NoString.h"

using namespace std;

class Arvore
{
    //STRUCT
private:
    No *raiz;

    ListaInteiro *lista_controleChaves;
    ListaString *lista_controleNomes;

    //Funções necessárias para realizar a operação de remove por ID
    No *removePorIdAux(No *no, int id); //remove NO
    No *removeFolha(No *no);            //caso 1
    No *removeNo1Filho(No *p);          //caso 2
    No *menorSubArvDireita(No *p);      // caso 3

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

    //REMOVE UM CLIENTE POR ID
    void removePorId(int id); //chama auxRemove
};