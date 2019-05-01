#include "Campeonato.h"

Campeonato::Campeonato()
{

}

Campeonato::Campeonato(int n)
{
    ntimes = n;
    t = new Time[n];
}

Campeonato::~Campeonato()
{
    delete [] t;
}

void Campeonato::entregaATaca(Time *vencedor){
    campeao = vencedor->nome;
    vencedor->atualizaTitulos();
}
