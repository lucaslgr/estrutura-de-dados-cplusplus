#include "FilaContCircular.h"

FilaContCircular::FilaContCircular(int max)
{
    this->m = max;
    this->c = 0;
    this->f = 0;
    this->n = 0;
    this->x = new int[max];
}
FilaContCircular::~FilaContCircular()
{
    delete [] this->x;
}

int FilaContCircular::incremento(int ind)
{
    if (ind == (this->m-1))
        return 0;
    else
        return ind+1;
}

void FilaContCircular::insereFinal(int val)
{
    if (this->n == this->m)
    {
        cout << "A fila esta cheia!" << endl;
    }
    else
    {
        this->x[this->f] = val;
        this->f = this->incremento(this->f);
        this->n += 1;
    }
}

void FilaContCircular::removeInicio()
{
    if (this->n == 0)
        cout << "Lista vazia!!\n";
    else
    {
        this->c = this->incremento(this->c);
        this->n -= 1;
    }
}

int FilaContCircular::getTam()
{
    return this->n;
}

void FilaContCircular::imprimir()
{
    if (this->n == 0)
    {
        cout << "\nNao ha o que imprimir, a fila esta vazia!!!\n";
    }
    else
    {
        cout << "\n-----------------------Imprimindo a fila--------------------------\n";

        // cout << "TESTE 1" << " " << this->x[0] << " " << this->x[1] << " " << this->x[2] << endl;
        for (int i = 0; i < n; i++)
        {
            cout << this->x[this->c + i] << " ";
        }
    }
}