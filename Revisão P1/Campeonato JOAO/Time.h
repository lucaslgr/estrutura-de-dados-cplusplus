#ifndef TIME_H
#define TIME_H

#include <iostream>
#include <string>

using namespace std;

class Time
{
    public:
        Time();
        Time(string n);
        virtual ~Time();
        string nome;
        int pontuacao;
        int titulos;
        void jogar(Time *t2);
        void atualizapontos(int p);
        void atualizaTitulos();
        void infoTime();

    protected:
    private:
};

#endif // TIME_H
