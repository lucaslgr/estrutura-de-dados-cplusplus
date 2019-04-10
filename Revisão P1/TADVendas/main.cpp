#include <iostream>
#include "Vendas.h"

using namespace std;

int main()
{
    Vendas v(3);

    v.calc_TotalVendido();

    cout << "O produto mais caro foi: " << v.return_ValorItemMaisCaro() << endl;

    return 0;
}