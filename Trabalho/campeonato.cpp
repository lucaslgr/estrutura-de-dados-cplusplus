#include "campeonato.h"

campeonato::campeonato() {}

campeonato::campeonato(int numteams)
{
    this->teams = new team[numteams];
}

campeonato::~campeonato()
{
    cout << "\nCampeonato Destruido" << endl;
    delete this->teams;
}

void campeonato::entrega_Taca(team *vencedor)
{
    vencedor->atualiza_titulos(); //Já aumenta um no titulo do team 2
    this->nome_AtualCampeao = vencedor->get_nome();
}

string campeonato::get_AtualCamp()
{
    return this->nome_AtualCampeao;
}