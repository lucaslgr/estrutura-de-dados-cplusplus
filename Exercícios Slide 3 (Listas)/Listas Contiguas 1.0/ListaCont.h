#include <iostream>
#include <stdlib.h>

using namespace std;

class ListaCont
{
    private:
        int max; //capacidade máxima de elementos
        int ultimo; //indice do ultimo no da lista
        int *vet; //vetor que armazena a lista

    public:
        ListaCont(int tam); //OK//PASS
        ~ListaCont();       //OK//PASS

        int consulta(int k); //OK//PASS
        //void atribui(int k, int val); //OK //Igual insereK

        void insereInicio(int val); //OK//PASS
        void insereUltimo(int val); //OK//PASS

        void eliminaUltimo(); //OK//PASS
        void eleminaInicio(); //OK//PASS

        void insereK(int k, int val); //OK//PASS
        void eliminaK(int k);         //OK//PASS

        int getUltimo(); //OK//PASS
};