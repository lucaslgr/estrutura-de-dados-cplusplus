#include <iostream>
#include "team.h"
#include "campeonato.h"


using namespace std;


int main()
{
    system("cls");
    int numteams;
    cout << "Informe o numero de teams do campeonato" << endl;
    cin >> numteams;

    campeonato *p_interperiodo;
    campeonato interperiodo(numteams);
    p_interperiodo = &interperiodo;

    team *p_teams = new team[numteams];
    p_interperiodo->teams = p_teams;

    for(int i=0; i<numteams; i++)
    {
        system("cls");
        string nome;
        cout << "Informe o nome do " << i+1 << " team: " << endl;
        cin >> nome;

        p_teams[i] = team(nome);
    }

    //Compeonato rolando
    for(int i = 0; i < numteams; i++)
    {
        for(int j = (i + 1); j < numteams; j++)
        {
            p_interperiodo->teams[i].jogar(&(p_interperiodo->teams[j]));
        }
    }

    for (int i = 0; i < numteams; i++)
        cout << " Pontuacao do " << i <<" team:  " << p_interperiodo->teams[i].get_nome() << " eh: " << p_interperiodo->teams[i].get_pontuacao() << endl;

    int indice_vencedor;
    int pontuacao_vencedor = 0;
    for (int i = 0; i < numteams; i++)
    {
        if (p_interperiodo->teams[i].get_pontuacao() >= pontuacao_vencedor)
        {
            pontuacao_vencedor = p_interperiodo->teams[i].get_pontuacao();
            indice_vencedor = i;
        }
    }

    p_interperiodo->entrega_Taca(&p_interperiodo->teams[indice_vencedor]);
    cout << "Atual campeao: " << p_interperiodo->get_AtualCamp();

    return 0;
}
