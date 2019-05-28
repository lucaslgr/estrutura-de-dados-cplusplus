#include <iostream>
#include <stdlib.h>

using namespace std;

class ListaContigua
{
    private:
        int max;
        int n;
        int f;
        int *x;
    public:
        ListaContigua(int max);     //OK PASS
        ~ListaContigua();           //OK PASS
        void insereInicio(int val); //OK PASS
        void insereFinal(int val);  //OK PASS
        void inserePosK(int k, int val); //OK PASS
        void removeInicio();        //OK PASS
        void removeFinal();         //OK PASS
        void removePosK(int k);     //OK PASS
        void imprime();             //OK PASS


        //Prenche a lista até que um número negativo seja enviado pelo teclado ou quando a lista se torne cheia
        void prencheLista();
        //Insere no inicio da lista apenas valores PAR
        void insereParInicioLista(int val); //Exercício 2 Slide 3, pag-24
        //Calcula e imprime a soma de todos elementos da lista
        void calcSomaEImprime();

        int getTam();               //OK PASS
};