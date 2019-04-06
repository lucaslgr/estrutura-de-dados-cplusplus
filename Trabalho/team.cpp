/*
    Ref para funcao rand():
        -> http://www.cplusplus.com/reference/cstdlib/rand/
    Note que: a funcao rand gera uma sequencia de números a partir de um numero "semente", caso você não informe nenhum
    numero, ele sempre irá gerar a mesma sequência de numeros, considerando a semente padrão de 1.
*/

#include "team.h"

//CONSTRUTORES
team::team(){}

team::team(string nome)         
{
    this->nome = nome;
    this->pontuacao = 0;
    this->numTitulos = 0;    
}

//DESTRUTOR
team::~team()
{
    cout << "\nteam Destruido" << endl;
}


//MÉTODOS
void team::jogar(team *t2)
{
    int gols1 = gera_gols();
    int gols2 = gera_gols();
    if(gols1 == gols2)
    {
        this->pontuacao += 1;
        t2->atualiza_pontos(1);
    }
    else if(gols1 > gols2)
    {
        this->pontuacao += 3;
    }
    else
    {
        t2->atualiza_pontos(3);
    }
}

void team::atualiza_pontos(int p)
{
    this->pontuacao += p;
}

void team::atualiza_titulos()
{
    this->numTitulos += 1;
}

void team::informacoes_team()
{
    cout << nome << endl << pontuacao << " pontos" << endl << numTitulos << " titulos" << endl;
}


//FUNCOES GET'S
string team::get_nome()
{
    return this->nome;
}

int team::get_pontuacao()
{
    return this->pontuacao;
}

int team::get_numTitulos()
{
    return this->numTitulos;
}


//FUNCAO PRIVATE GERA GOLS
int team::gera_gols()
{
    srand(time(NULL));
    return (rand()%10);
}

//FUNCOES SET'S
void team::set_nome(string nome)
{
    this->nome = nome;
}