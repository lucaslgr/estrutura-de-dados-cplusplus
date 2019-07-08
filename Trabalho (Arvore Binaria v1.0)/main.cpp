#include <iostream>
#include "No.h"
#include "Arvbin.h"

using namespace std;

int main()
{
    Arvbin *b = new Arvbin();

    b->inserir(20);
    b->inserir(11);
    b->inserir(13);
    b->inserir(1);
    b->inserir(12);
    b->inserir(55);
    cout << endl;
    cout << "Menor valor na arvore: " << endl;
    b->menor(b->getRaiz());
    cout << endl;

    cout << "Pre-ordem" << endl;
    b->preOrdem(b->getRaiz());
    cout << endl;

    cout << "Em-ordem" << endl;
    b->emOrdem(b->getRaiz());


    return 0;
}