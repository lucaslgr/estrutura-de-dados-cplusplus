#include <iostream>
#include <stdlib.h>
#include <string>

#include "Time.h"
#include "Campeonato.h"

using namespace std;

int main()
{
    int i, n, j;
    string name;

    cout << "*********************************************************" << endl;
    cout << "BEM-VINDO AO SISTEMA AUTOMÁTICO DE TABELAS DE CAMPEONATOS" << endl;
    cout << "*********************************************************" << endl;

    cout << "\nInforme o numero de times do campeonato\n";
    cin >> n;

    Campeonato *c = new Campeonato(n);

    //VOCÊS PODEM CRIAR OS TIMES COM OS NOMES DIRETO NO CONSTRUTOR

    //Limpando o buffer de leitura para utilização do getline
    cin.clear();
    cin.ignore(100, '\n');

    //LEITURA DOS NOMES DO N TIMES
    for(i = 0; i < n; i++){
        cout << "Informe o nome do time: " << i+1 << endl;
        getline(cin, name);
        //Se colocar atletico mineiro ele sempre vence ! kkk
        c->t[i] = Time(name);
        //cout << c->t[i].nome;
    }

    cout << endl << endl;

    system("clear");

    //TODOS CONTRA TODOS
    for(i = 0; i < n; i++){
        for(j = i; j < n; j++){
            if(i != j){
                c->t[i].jogar(&c->t[j]);
            }
        }
    }

    cout << "\nDigite 1 para prosseguir para tabela\n";
    cin >> name;

    system("clear");

    //IMPRIME AS PONTUAÇÕES
    cout << "Pontuação Final:" << endl << endl;
    for(i = 0; i < n; i++){
        cout << c->t[i].nome << ":" << c->t[i].pontuacao << endl;
    }

    //DESCOBRE O CAMPEÃO - vamos desconsiderar o fato de dois times estarem empatados na primeira posicao
    int maior_pontuacao = c->t[0].pontuacao;
    int indice = 0;
    for(i = 1; i < n; i++){
        if(c->t[i].pontuacao > maior_pontuacao){
            maior_pontuacao = c->t[i].pontuacao;
            indice = i;
        }
    }

    //JÁ TEMOS O CAMPEÃO
    c->entregaATaca(&c->t[indice]);
    cout << "\nO campeao desta temporada foi: " << c->t[indice].nome << endl;
}
