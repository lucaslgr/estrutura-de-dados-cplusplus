#include "ListaContigua.h"

ListaContigua::ListaContigua(int max)
{
    this->max = max;
    this->n = 0;
    this->f = -1;
    this->x = new int[max];
}

ListaContigua::~ListaContigua()
{
    delete [] this->x;
}

void ListaContigua::insereInicio(int val)
{
    if (this->n == 0)
    {
        this->x[0] = val;
        this->n +=1;
        this->f +=1;
    } 
    else if (this->n == this->max)
    {
        cout << "A lista esta cheia!\n";
        exit(0);
    }
    else
    {
        // cout << "Passou aqui" << endl;
        // cout << "Valor de n: " << this->n << endl;
        for (int i = n; i >= 0; i--)
        {
            int aux = this->x[i];
            this->x[i+1] = aux;
        }
        this->x[0] = val;
        this->n += 1;
        this->f += 1;
    }
}

void ListaContigua::insereFinal(int val)
{
    if (this->n == 0)
    {
        this->x[0] = val;
        this->n += 1;
        this->f += 1;
        return;
    }
    else if (this->n == this->max)
    {
        cout << "A lista esta cheia!\n";
        exit(0);
    }
    else
    {
        this->x[f+1] = val;
        this->f += 1;
        this->n += 1;
    }
}

void ListaContigua::inserePosK(int k, int val)
{
    if (this->n == 0)
    {
        this->x[0] = val;
        this->n += 1;
        this->f += 1;
        return;
    }
    else if (this->n == this->max)
    {
        cout << "A lista esta cheia!\n";
        exit(0);
    }
    else
    {
        int cont = 0;
        for (int i = n; i >= k; i--)
        {
            int aux = this->x[i];
            this->x[i+1] = aux;
            if (i == k)
            {
                this->x[k] = val;
                this->n += 1;
                this->f += 1;
            }
        }
        return;
    }
}

void ListaContigua::removeInicio()
{
    if (this->n == 0)
    {
        cout << "A lista está vazia!" << endl;
        exit(0);
        return;
    }
    else
    {
        for (int i = 0; i <= this->f; i++)
        {
            int aux = this->x[i+1];
            this->x[i] = aux;
        }
        this->n -= 1;
        this->f -= 1;
        return;
    }
}

void ListaContigua::removeFinal()
{
    if (this->n == 0)
    {
        cout << "A lista está vazia!" << endl;
        exit(0);
        return;
    }
    else
    {   
        this->n -= 1;
        this->f -= 1;
        return;
    }
}

void ListaContigua::removePosK(int k)
{
    if (this->n == 0)
    {
        cout << "A lista está vazia!" << endl;
        exit(0);
        return;
    }
    else if( k>=0 && k<=n) //Testa se K é válido
    {
        for (int i = k; i <= n; i++)
        {
            this->x[i] = this->x[i+1];
        }
        this->f -= 1;
        this->n -= 1;
        return;
    }
    else
    {
        cout << "O número k informado é inválido!" << endl;
        exit(0);
    }
}

void ListaContigua::imprime()
{
    int pos = 0;
    cout << "\n*********************IMPRIMINDO A LISTA****************************\n";
    for (int i = 0; i <= f; i++)
    {
        cout << this->x[i] << " ";
    }
    cout << endl;
}

int ListaContigua::getTam()
{
    return this->n;
}

void ListaContigua::prencheLista()
{
    cout << "\n¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨PRENCHENDO A LISTA¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨\n";
    for (int i = 0; i < this->max; i++)
    {
        int val = 0;
        cout << "Informe o " << i << "º numero da lista: ";
        cin >> val;
        if (val < 0)
        {
            this->calcSomaEImprime();
            return; //Sai do loop
        }
        this->insereParInicioLista(val);
        cout << endl;
    }
    this->calcSomaEImprime();
}

void ListaContigua::insereParInicioLista(int val)
{
    if ( (val%2) == 0)
    {
        this->insereInicio(val);
    }
}

void ListaContigua::calcSomaEImprime()
{
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum += this->x[i];
    }
    cout << "A soma dos elementos da lista eh: " << sum << endl;
}