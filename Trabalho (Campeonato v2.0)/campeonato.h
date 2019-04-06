#pragma once
#include <iostream>
#include <string>
#include "team.h"

class campeonato
{
    private:
        int numTimes;
        string nome_CampeaoAtual;
        team *times;

    public:
        campeonato();
        campeonato(int numTimes);
        ~campeonato();

        //Cadastra todos os times no campeonato
        void cadastraTimes();

        //Gera partidas entre todos os times do campeonato
        void geraPartidas();

        //Descobre o time com maior oontuacao ao final do campeonato
        void descobreCampeao();

        //Informa todos os dados atuais de todos os times
        void informTodosTimes();

        //Entrega a taça ao time vencedor
        void entregaTaca(team *vencedor);
};

