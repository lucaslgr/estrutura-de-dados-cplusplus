#include "ListaContigua.h"
#define N 7

using namespace std;

int main()
{
    ListaContigua *l1 = new ListaContigua(N);

    // l1->insereInicio(10);
    // l1->insereInicio(11);
    // l1->insereInicio(20);
    // l1->insereFinal(15);
    // l1->insereFinal(12);


    // cout << "Tamanho da lista: " << l1->getTam() << endl;
    // l1->imprime();

    // l1->removeInicio();
    // l1->removeInicio();
    // l1->imprime();
    // l1->removeFinal();
    // l1->removeFinal();
    // l1->imprime();
    // l1->inserePosK(2, 3);
    // l1->imprime();
    // l1->removePosK(2);
    // l1->imprime();

    l1->prencheLista();
    l1->imprime();
    l1->excluiNosPorValor(2);
    // l1->removePorValor(2);
    l1->imprime();
    return 0;
}