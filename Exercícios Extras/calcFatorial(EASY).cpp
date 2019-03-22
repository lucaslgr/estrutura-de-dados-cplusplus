/*
    -Objetivo:
    -> Calcular o fatorial de um numero (DA MANEIRA MAIS FÁCIL POSSÍVEL)
    -> Usando recursividade
*/

#include <iostream>

using namespace std;

void calc_Fatorial(float *num, float *fat)
{
    if ( (*num == 0 || *num == 1) && (*fat == 0) )
        *fat = 1;
        
    else if(*num > 1) //Aplicando recursividade aqui
    {
        if(*fat == 0)
            *fat = (*num) * (--(*num));
        else
            *fat = (*fat) * (--(*num));
        
        calc_Fatorial(num, fat);
    }
}

int main()
{
    float fat = 0;
    float valor;

    cout << "Informe um numero e pressione ENTER: " << endl;
    cin >> valor;
    int aux = valor;

    calc_Fatorial(&valor, &fat);
    cout << "O fatorial de " << aux << " eh: " << fat << endl;

    return 0;
}