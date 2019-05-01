#include "Time.h"
#include <stdlib.h>

//CONSTRUTOR PADRAO
Time::Time()
{
    //ctor
}

//CONSTRUTOR COM UM PARÂMETRO
Time::Time(string n)
{
    nome = n;
    pontuacao = 0;
    titulos = 0;
}

//DESTRUTOR
Time::~Time()
{
    //dtor
}


void Time::jogar(Time *t2)
{
    int aleatorio;
    //Para gerar numero aleatrios diferentes
    unsigned(time(NULL));

    cout << endl << nome << " jogando contra " << t2->nome << endl;

    //Gerando um número aleatório de 0 a 2
    aleatorio = rand() % 3;

    if (aleatorio == 1){
        //Time 1 ganhou
        cout << "Vitoria do: " << nome << endl;
        pontuacao = pontuacao + 3;
    }
    else if(aleatorio == 2){
        //Time 2 ganhou
        cout << "Vitoria do: " << t2->nome << endl;
        t2->pontuacao = t2->pontuacao + 3;
    }
    else{
        //empate
        cout << "Partida empatada! " << endl;
        pontuacao = pontuacao + 1;
        t2->pontuacao = t2->pontuacao + 1;
    }

}

void Time::atualizapontos(int p){
    pontuacao = pontuacao + p;
}

void Time::atualizaTitulos(){
    titulos++;
}

void Time::infoTime(){
    cout << "Dados do time:" << endl;
    cout << nome << endl;
    cout << pontuacao << " pontos " << endl;
    cout << titulos << "titulos" << endl << endl;
}
