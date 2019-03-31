#include <string>
#include <iostream>

using namespace std;

class Prova
{
private:
    int N;
    float *notasQuestoes;
    float notaFinal;
    void calculaNotaFinal();

  public:
    Prova(int N);
    ~Prova();

    void leNotas();
    double obtemNotaFinal();
};
