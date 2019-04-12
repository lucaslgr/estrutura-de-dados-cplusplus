/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int matrx[][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    
    cout << matrx[1][2] << endl; // Segunda linha, Terceira Coluna
    
    cout << **matrx << endl; // Primeira Linha, Primeira Coluna
    
    cout << *(*(matrx+1)+2)  << endl; //Segunda linha, Terceira Coluna
    
    cout << *(matrx[2]+3)  << endl; //Terceira linha, Quarta Coluna
    
    cout << (*(matrx+2))[2] << endl; //Terceira Linha, Terceira Coluna
    
     cout << *((*matrx)+1) << endl; //Terceira linha
     
     int i, j;
     
     int *pti, *ptj;
     
     cout << pti << endl;
     cout << ptj << endl;
     i = pti-ptj;
     
     //pti += ptj;
     
     cout << i << endl;
    
    return 0;
}
