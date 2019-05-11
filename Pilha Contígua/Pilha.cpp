#include "Pilha.h"

Pilha::Pilha(int limite)
{
    this->limite = limite;
    this->topo = -1;
    this->pilha = new int[limite];
}

Pilha::~Pilha()
{
    delete this->pilha;
    cout << "A pilha foi deletada" << endl;
}

bool Pilha::pilhaVazia()
{
    if( this->topo == -1)
    {
        cout << "A pilha esta vazia"<< endl;
    }
}

void Pilha::empilhar(int val)
{
    if(this->topo == this->limite)
    {
        cout << "A pilha esta cheia!" << endl;
    }
    else
    {
        this->pilha[topo+1] = val;
        this->topo++;
    }
}

void Pilha::desempilhar()
{
    if(this->topo == -1)
    {
        cout << "A pilha esta vazia!" << endl;
    }
    else
    {
        this->topo--;
    }
}

void Pilha::busca(int val)
{
    // cout << "Passou aqui" << endl;
    if(this->topo == -1)
    {
        cout << "A pilha esta vazia!" << endl;
    }
    else
    {
        cout << " Passou aqui no for" << endl;
        cout << " Topo: " << this->topo << "\n";
        
        for(int i = 0; i <= this->topo; i++)
        {
            cout << "\n\n" << val << "    " << this->pilha[i] << "\n\n";
            if(val == this->pilha[i])
                cout << "O valor foi encontrado na posicao: " << i << endl;
        }
    }
}

void Pilha::buscaTopo()
{
    cout << "Retorna o elemento do topo: " << this->pilha[this->topo];
}