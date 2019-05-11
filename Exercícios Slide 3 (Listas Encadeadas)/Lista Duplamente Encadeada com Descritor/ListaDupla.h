#include <iostream>
#include "NoDuplo.h"

using namespace std;

class ListaDupla
{
  private:
    NoDuplo *primeiro;
    int n;
    NoDuplo *ultimo;

  public:
    ListaDupla(); //PASS
    ~ListaDupla(); //PASS
    bool busca(int val);
    void insereInicio(int val); //PASS
    void eliminaInicio();

    void insereFinal(int val); //PASS
    void removeFinal();
    void imprimeReverso();

};