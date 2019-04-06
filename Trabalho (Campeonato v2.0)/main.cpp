#include <iostream>
#include "team.h"
#include "campeonato.h"

using namespace std;

int main()
{
    campeonato brasileirao;
    campeonato *p_brasileirao = &brasileirao;
    p_brasileirao->cadastraTimes();

    p_brasileirao->informTodosTimes();
    p_brasileirao->geraPartidas();
    p_brasileirao->informTodosTimes();
    p_brasileirao->descobreCampeao();



    return 0;
}