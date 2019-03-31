#include "Prova.h"

Prova::Prova(int N)
{
    this->N = N;
    this->notasQuestoes = new float[N];
    this->notaFinal = 0;
}

Prova::~Prova()
{
    delete[] notasQuestoes;
    cout << "Prova deletada" << endl;
}

void Prova::leNotas()
{
    for(int i=0; i<this->N ; i++)
    {
        cout << "Informe a " << i+1 << " nota:" << endl;
        cin >> notasQuestoes[i];
    }
    system("cls");
}

void Prova::calculaNotaFinal()
{
    float sum=0, menorNota=0, pos_MenorNota;
    for(int i=0; i<this->N; i++)
    {
        menorNota = notasQuestoes[i];
        for(int j=0; j<this->N; j++)
        {
            if (menorNota > notasQuestoes[j])
            {
                menorNota = notasQuestoes[j];
                pos_MenorNota = j;
            }
        }
    }

    for (int i = 0; i < this->N; i++)
    {
        if ( i != pos_MenorNota)
            sum += this->notasQuestoes[i]; 
    }

    this->notaFinal = sum;
}

double Prova::obtemNotaFinal()
{
    if(this->notaFinal == 0)
    {
        this->calculaNotaFinal();
        return this->notaFinal;
    }
}