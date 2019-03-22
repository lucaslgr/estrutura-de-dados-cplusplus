/*
    -Objetivo:
    -> Calcular o fatorial de um numero
    -> Usando recursividade
*/

#include <iostream>

using namespace std;

void calc_Fatorial(float *num, float *fat)
{
    if (*num == 0 && *fat == 0)
        *fat = 1;
    else if (*num == 1 && *fat == 0)
        *fat = 1;
    else if(*num > 1) //Aplicando recursividade aqui
    {
        cout << *fat << endl;
        if(*fat == 0)
            *fat = (*num) * (--(*num));
        else
            *fat = (*fat) * (--(*num));
        
        calc_Fatorial(num, fat);
    }
}

int main()
{
    float valor = 8;
    float fat = 0;

    calc_Fatorial(&valor, &fat);
    cout << "O fatorial de 8 eh: " << fat << endl;

    return 0;
}