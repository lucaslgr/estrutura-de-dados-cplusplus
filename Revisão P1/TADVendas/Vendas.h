#include <iostream>
#include <string>

using namespace std;

class Vendas
{
    private:
        int NumItensVendidos;
        double *valorItens;
    public:
        Vendas(int n);
        ~Vendas();
        void calc_TotalVendido();
        double return_ValorItemMaisCaro();
};