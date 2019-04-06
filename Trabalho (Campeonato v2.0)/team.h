#pragma once
#include <iostream>
#include <string>
#include <stdlib.h> //Necessária para usar o rand()
#include <time.h> //Necessaria para usar srand fornecendo uma seed diferente

using namespace std;

class team
{
    private:
        string nome;
        int pontuacao;
        int numero_Titulos;

        int geraGols();
        
    public:
        team();
        team(string nome);
        ~team();

        void jogar(team *adversario);
        void atualizaPontos(int pontos);
        void atualizaNTitulos();
        void informTime();

        string getNome();
        int getPontuacao();
        int getNTitulos();

        void setNome(string nome);
};