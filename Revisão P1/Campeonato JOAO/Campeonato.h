#ifndef CAMPEONATO_H
#define CAMPEONATO_H

#include "Time.h"
#include <iostream>
#include <string>

using namespace std;

class Campeonato
{
    public:
        Campeonato();
        Campeonato(int n);
        virtual ~Campeonato();
        void entregaATaca(Time *vencedor);

        int ntimes;
        string campeao;
        Time *t;
    protected:
    private:
};

#endif // CAMPEONATO_H
