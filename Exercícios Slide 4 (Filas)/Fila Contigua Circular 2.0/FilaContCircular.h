#include <iostream>

using namespace std;

class FilaContCircular
{
private:
    int m; //Armazena a capacidade maxima de elementos na fila
    int c; //Armazena a posicao do primeiro elemento da fila
    int f; //Armazena a primeira posicao livre apos o ultimo elemento da fila
    int n; //Armazena o numero de elementos que existem na fila
    int *x; //Armazena o vetor com todos elementos da fila

public:
    FilaContCircular(int max);
    ~FilaContCircular();

    //Funcao que retorna o incremento correto para c ou f
    int incremento(int ind);

    void insereFinal(int val);
    void removeInicio();
    
    //Retorna o numero de elementos na lista
    int getTam();

    void imprimir();
};