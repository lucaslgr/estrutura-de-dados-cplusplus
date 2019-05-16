/*
    Seguindo a solução proposta nos links por xErath:
        https://www.hardware.com.br/comunidade/myclass1-template/285234/
        https://cboard.cprogramming.com/archive/index.php/t-49829.html

    PASSOS:
        ->No arquivo h eu escrevo: 

        #ifndef _FILE_H_ 
        #define _FILE_H_ 

        / * 
        declarações, comentários, o que quer que seja 
        * / 
        #include "file.cpp" 

        #endif // _ FILE_H_ 

        ->No cpp eu escrevo: 


        #ifdef Código codificado _FILE_H_ 
        / * 
        , funções inline
        - a parte é compilada somente quando incluída do h 
        * / 
        #else 
        #include "file.h" 
        / * 
        código não modelado 
        * / 
#endif // _ FILE_H_ 
*/

#include "ListaCont.h"
#include <iostream>

using namespace std;

int main()
{
    int max = 5;
    ListaCont<int> *l1 = new ListaCont<int>(max);

    //ListaCont<int> l1(max);

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