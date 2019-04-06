#pragma once
#include <iostream>
#include <string>
#include "team.h"

using namespace std;

class campeonato
{
    private:
        int numteams;
        string nome_AtualCampeao;

    public:
        team *teams;
        campeonato();
        campeonato(int numteams);
        ~campeonato();
        void entrega_Taca(team *vencedor);
        string get_AtualCamp();
};