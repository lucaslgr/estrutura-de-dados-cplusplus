#ifndef _LISTACONT_H_
#define _LISTACONT_H_

#include <iostream>
#include <stdlib.h>

using namespace std;

template <class T>
class ListaCont
{
    private:
        int max; //capacidade máxima de elementos
        int ultimo; //indice do ultimo no da lista
        T *vet;  //vetor que armazena a lista

    public:
        ListaCont<T>(int tam); //OK//PASS
        ListaCont() //Construtor padrão (OBRIGRATÓRIO PARA O USO DE TEMPLATE)
        ~ListaCont();       //OK//PASS

        T consulta(int k); //OK//PASS
        //void atribui(int k, int val); //OK //Igual insereK

        void insereInicio(T val); //OK//PASS
        void insereUltimo(T val); //OK//PASS

        void eliminaUltimo(); //OK//PASS
        void eleminaInicio(); //OK//PASS

        void insereK(int k, T val); //OK//PASS
        void eliminaK(int k);         //OK//PASS

        int getUltimo(); //OK//PASS
};

#include "ListaCont.cpp"

#endif //_LISTACONT_H_