#include "Vendas.h"

Vendas::Vendas(int n)
{
    this->NumItensVendidos = n;
    this->valorItens = new double[NumItensVendidos];

    for (int i = 0; i < NumItensVendidos; i++)
    {
        cout << "Digite o valor do item = ";
        double x;
        cin >> x;
        this->valorItens[i] = x;
    }
}

Vendas::~Vendas()
{
    delete [] this->valorItens;
}

void Vendas::calc_TotalVendido()
{
    double sum = 0;
    for(int i = 0; i < this->NumItensVendidos; i++)
        sum += this->valorItens[i];
    cout << "A soma dos valor eh:" << sum << endl;
}

double Vendas::return_ValorItemMaisCaro()
{
    double valorMaisCaro = 0;
    for (int i = 0; i < this->NumItensVendidos; i++)
    {
        if(this->valorItens[i] >= valorMaisCaro)
            valorMaisCaro = this->valorItens[i];
    }
    return valorMaisCaro;
}