#include "No.h"
#include "Lista.h"

using namespace std;

int main()
{
    Lista l1;

    l1.insereInicio(20);
    l1.insereInicio(30);

    l1.insereFinal(40);
    l1.insereFinal(60);

    l1.imprime();
    
    l1.removeInicio(); //Ta com erro

    l1.imprime();

    l1.removeFinal();

    l1.imprime();

    l1.removePorValor(40);
    
    l1.imprime();

    l1.removePorValor(20);

    l1.imprime();

    return 0;
}