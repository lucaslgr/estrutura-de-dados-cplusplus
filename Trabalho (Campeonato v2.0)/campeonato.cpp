#include "campeonato.h"

campeonato::campeonato()
{
    numTimes = 0;
}

campeonato::campeonato(int numTimes)
{
    this->times = new team[numTimes];
}

campeonato::~campeonato()
{
    delete [] this->times;
    cout << "\nO campeonato foi destruido" << endl;
}

void campeonato::entregaTaca(team *vencedor)
{
    this->nome_CampeaoAtual = vencedor->getNome();
    vencedor->atualizaNTitulos(); //Soma mais um titulo
}

void campeonato::cadastraTimes()
{
    system("cls");

    cout << "*********************************************************" << endl;
    cout << "BEM-VINDO AO SISTEMA AUTOMÁTICO DE TABELAS DE CAMPEONATOS" << endl;
    cout << "*********************************************************" << endl;

    cout << "\nInforme o numero de times que participarao do campeonato" << endl;
    cin >> this->numTimes;
    this->times = new team[this->numTimes];

    //Limpando o buffer de leitura para utilização do getline
    cin.clear();
    cin.ignore(100, '\n');

    //Leitura dos nomes de N times
    for (int i = 0; i < this->numTimes; i++)
    {
        system("cls");
        string nome_Time;
        cout << "Informe o nome do " <<  i+1 << " time: " << endl;
        getline(cin, nome_Time);

        this->times[i] = team(nome_Time);
    }
}

void campeonato::geraPartidas()
{
    //FILTRO DE CASO
    if (this->numTimes == 0)
        cout << "Erro: E necessario cadastrar os times primeiro" << endl;
    else
    {
        //Todos contra todos SEM REPETIÇÃO
        for(int i = 0; i < this->numTimes; i++)
        {
            for (int j = (i + 1); j < this->numTimes; j++)
            {
                this->times[i].jogar(& this->times[j]);
            }
        }
    }
}

void campeonato::descobreCampeao()
{
    system("cls");
    int pontuacao_Vencedor = 0;
    int indice_Vencedor = 0;
    for(int i = 0; i < this->numTimes; i++)
    {
        if(this->times[i].getPontuacao() > pontuacao_Vencedor)
        {
            pontuacao_Vencedor = this->times[i].getPontuacao();
            indice_Vencedor = i;
        }
    }

    //Entregando a taça ao camepeão
    this->entregaTaca( & this->times[indice_Vencedor]);

    cout << "O time vencedor foi " << this->times[indice_Vencedor].getNome() << endl;
    cout << "Com a pontuacao: " << this->times[indice_Vencedor].getPontuacao() << endl;
}

void campeonato::informTodosTimes()
{
    system("cls");
    for (int i = 0; i < this->numTimes; i++)
    {
        this->times[i].informTime();
    }
}