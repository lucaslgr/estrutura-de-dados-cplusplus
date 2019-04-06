#include "team.h"

team::team()
{
    this->pontuacao = 0;
    this->numero_Titulos = 0;
}

team::team(string nome)
{
    this->nome = nome;
    this->pontuacao = 0;
    this->numero_Titulos = 0;
}

team::~team()
{
    cout << "\nO time: "<< this->nome <<" foi destruido" << endl;
}

void team::atualizaPontos(int pontos)
{
    this->pontuacao += pontos;
}

void team::jogar(team *adversario)
{
    int gols1 = this->geraGols();
    int gols2 = adversario->geraGols();

    if (gols1 > gols2)
        this->pontuacao += 3;

    else if (gols1 == gols2) //empate
    {
        this->pontuacao += 1;
        adversario->atualizaPontos(1);
    }
    else
        adversario->atualizaPontos(3);
}

void team::atualizaNTitulos()
{
    this->numero_Titulos += 1; 
}

void team::informTime()
{
    system("cls");
    cout << "Nome do time: " << this->nome << endl;
    cout << "Pontuacao: " << this->pontuacao << endl;
    cout << "Numero de titulos: " << this->numero_Titulos << endl;
    system("pause");
}

string team::getNome()
{
    return this->nome;
}

int team::getPontuacao()
{
    return this->pontuacao;
}

int team::geraGols()
{
    int gol = 0;
    srand((unsigned int)time(NULL));
    gol = rand() % 100;

    return gol;
}