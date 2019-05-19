#include <iostream>

using namespace std;

class Pilha
{
    public:
        int topo;
        int limite;
        int *pilha;

    public:
        Pilha(int limite);
        ~Pilha();
        bool pilhaVazia();
        void empilhar(int val);
        void desempilhar();
        void busca(int val);
        void buscaTopo();
};