#include "NoString.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

class ListaString
{
private:
    NoString *primeiro;

public:
    ListaString();
    ~ListaString();
    void insereInicio(string nome);
    bool busca(string nome);
    void imprime();
    bool removePorValor(string nome);
};
