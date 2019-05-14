#include "Pilha.h"

using namespace std;

int main()
{
    int n = 3;
    Pilha *p1 = new Pilha(n);

    p1->pilhaVazia();
    p1->empilhar(10);
    cout << "Valor do topo: "<< p1->topo << endl;
    p1->empilhar(20);
    cout << "Valor do topo: " << p1->topo << endl;
    p1->empilhar(30);
    cout << "Valor do topo: " << p1->topo << endl;
    
    p1->buscaTopo();

    cout << "\n\n";

    for(int i=0; i<3;i++ )
    {
        cout << p1->pilha[i] <<" ";
    }

    p1->busca(10);
    p1->busca(20);
    p1->busca(30);
}