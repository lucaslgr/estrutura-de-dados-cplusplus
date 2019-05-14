#include <iostream>

#include "Lista.h"
#include "No.h"

using namespace std;

int main()
{
    Lista *l = new Lista();

    int n;
    cin >> n;

    for(int i=0; i<n; i++)
    {
        int valor;
        cin >> valor;
        l->insereFinal(valor);
    }

    for(int i=0; i<n; i++)
    {
        int valor;
        cin >> valor;
        l->insereInicio(valor);
    }


    l->imprime();

    for(int i=0; i<3; i++)
    {
        l->removeFinal();
    }

    l->imprime();

    for(int i=0; i<1; i++)
    {
        l->removePorValor(4);
    }

     l->imprime();

     for(int i=0; i<1; i++)
    {
        l->removeInicio();
    }

    l->imprime();

    return 0;
}
