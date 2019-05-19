#ifndef FilaCircular_H
#define FilaCircular_H
#include <iostream>
#include <stdlib.h>

using namespace std;

class FilaCircular
{
    public:
        FilaCircular(int maximoF); //OK PASS
        virtual ~FilaCircular();   //OK PASS

        //Retorna o valor do primeiro elemento da fila
        float consultaInicio(); 

        //Insere no no final
        void insereFinal(float val); //OK PASS

        //Remove no do inicio
        void removeInicio(); //OK PASS

        //Testa se a fila está vazia
        bool listaVazia(); //OK PASS

        //Incrementa indice
        int inc(int ind); //OK PASS
        
        //Imprime a fila e todos seus dados
        void imprimeFila();

    protected:

    private:
        float *fila; //Ponteiro para os elementos da fila
        int maximoF; //Maximo de elementos do vetor
        int inicioF; //Indice do primeiro elemento
        int finalF; //Indice a posição livre após o ultimo elemento (LIVRE)
        int n; //Atual numero de elementos na fila
};

#endif // FILACIRCULAR_H
