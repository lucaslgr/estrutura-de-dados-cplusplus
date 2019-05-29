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
        int tam = n;
        for (int i = k; i <= tam; i++)
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

void ListaContigua::removePorValor(int x)
{
    if (this->n == 0)
    {
        cout << "Lista esta vazia!!" << endl;
        return;
    }
    else
    {
        int tam = n;
        if (this->x[f] == x)
        {
            this->removeFinal();
        }
        else
        {
            for (int i = 0; i <= tam; i++)
            {
                if (this->x[i] == x)
                {
                    for (int j = this->f; j >= i; j--)
                    {
                        this->x[j-1] = this->x[j];
                    }
                    this->f -= 1;
                    this->n -= 1;
                    return;
                }
            }
        }
    }
}

void ListaContigua::excluiNosPorValor(int x)
{
    int *vetPos = new int[this->n];

    if (this->n == 0)
    {
        cout << "Lista esta vazia!!" << endl;
        return;
    }
    else
    {
        int tam = n; //Precisa pegar antes o valor de "n" pois enquanto vai excluindo ele vai diminuindo de 1 em 1, logo o loop for da erro de semântica
        int cont = 0; //Conta o numero de incidencias do valor que se deseja excluir os elementos
        for (int i = 0; i < tam; i++)
        {
            //Loop para pegar todas posicoes que tem os valores
            if (this->x[i] == x)
            {
                cont += 1;
            }
        }

        //Loop para remover todas todas incidencias que contem o valor desejado na lista
        for (int i = 0; i < cont; i++)
        {
            // cout << vetPos[i] << " " ;
            this->removePorValor(x);
        }
        
    }
}