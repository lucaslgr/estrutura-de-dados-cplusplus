#include "ListaCont.h"
#include <iostream>
#define max 5

using namespace std;

int main()
{
    ListaCont *l1 = new ListaCont(max);

    l1->insereUltimo(20);
    l1->insereUltimo(1);
    l1->insereInicio(40);
    l1->insereInicio(33);
    l1->insereInicio(20);

    l1->eliminaUltimo();
    l1->eliminaUltimo();
    l1->eleminaInicio();

    //Imprimindo os valores
    cout << "\n*********************************IMPRIMINDO VALORES***************************************\n";
    for (int i = 0; i <= l1->getUltimo(); i++)
    {
        cout << l1->consulta(i) << " ";
    }

    l1->eliminaK(1); //Falta conferir

    //CONSULTANDO  VALORES
    // int pos = -1;
    // cout << "Informe  a posicao que deseja consultar  valor: " << endl;
    // cin >> pos;
    // cout << "\nValor consultado na posicao " << pos << " eh: "<< l1->consulta(pos) << endl;

    //cout << "1:" << l1->consulta(0) << endl;
    //cout << "1:" << l1->consulta(1) << endl;

    //Imprimindo os valores
    cout << "\n*********************************IMPRIMINDO VALORES***************************************\n";
    for (int i = 0; i <= l1->getUltimo(); i++)
    {
        cout << l1->consulta(i) << " ";
    }
    
    return 0;
}