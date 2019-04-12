#include <locale.h>
#include <iostream>
#include "Prova.h"
#define N 3

using namespace std;

int main()
{
    //setlocale(LC_ALL, "Portuguese");

    Prova p1(N);

    p1.leNotas();
    cout << "A nota final de p1 eh: " << p1.obtemNotaFinal() << endl;

    return 0;
}
