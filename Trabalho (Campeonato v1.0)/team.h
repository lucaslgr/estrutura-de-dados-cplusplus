#pragma once
/*
    O comando acima é para informar ao pré-processador que é para incluri os programas de cabeçalho apenas uma vez.
        ->#pragma once
*/

#include <iostream>
#include <string>
#include <stdlib.h> //Necessária para funcao rand()
#include <cstdlib>
#include <time.h> //Necessária para utilizar como valor "semente" da funcao srand() para sempre gerar numeros aleatorios

using namespace std;

class team
{
    private:
        string nome;
        int pontuacao;
        int numTitulos;
        int gera_gols();

    public:
        team();
        team(string nome);
        ~team();
        void jogar(team *t2);
        void atualiza_pontos(int p);
        void atualiza_titulos();
        void informacoes_team();
        //GETS
        string get_nome();
        int get_pontuacao();
        int get_numTitulos();
        //SETS
        void set_nome(string nome);
};