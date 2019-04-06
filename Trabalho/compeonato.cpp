#include "campeonato.h"

campeonato::campeonato() {}

campeonato::campeonato(int numTimes)
{
    this->times = new time[numTimes];
}

campeonato::~campeonato()
{
    cout << "Campeonato Destruido" << endl;
    delete this->times;
}

void campeonato::entrega_Taca(time *vencedor)
{
    vencedor->atualiza_titulos(); //Já aumenta um no titulo do time 2
    this->nome_AtualCampeao = vencedor->get_nome();
}

string campeonato::get_AtualCamp()
{
    return this->nome_AtualCampeao;
}