/*
    -LISTA CONTIGUA
        ->DUAS PRINCIPAIS DIFERENÇAS:
            ->> PARA INSERIR: Utilizamos um for abrindo uma "vaga" quando o ultimo é != do maximo da lista, este FOR percorre
                a lista de trás para frente, copiando todos elementos para uma casa a frente.
            ->> PARA DELETAR: Uilizamos um for retirando uma "vaga", este FOR percorre a lista do ponto da remoção até o final
                realocando todos elementos uma casa atrás.

*/

#include "ListaCont.h"

ListaCont::ListaCont(int max)
{
    this->max = max;
    this->ultimo = -1;
    this->vet = new int[max];
}

ListaCont::~ListaCont()
{
    delete [] this->vet;
}

int ListaCont::consulta(int k)
{
    //cout << "O ultimo 1: " << this->ultimo << endl;
    //cout << "O K: " << k  << endl;
    if (k < 0 || k > this->ultimo)
    {
        cout << "\nPosicao invalida!!!\n";
        exit(1);
    }
    else
    {
        return vet[k]; 
    }
}

void ListaCont::insereInicio(int val)
{
    //caso lista vazia
    if(this->ultimo == -1)
    {
        this->vet[0] = val;
        this->ultimo += 1;
    }
    else if(this->ultimo == (this->max -1 ))
    {
        cout << "Lista cheia!!" << endl;
        exit(1);
    }
    else
    {
        //Criando um espaço vago no início deslocando toda lista de +1
        for (int i = this->ultimo; i >= 0; i--)
        {
            this->vet[i + 1] = this->vet[i]; //Andando uma posicao com todos os termos 
        }
        this->vet[0] = val; //Inserindo o valor no início
        this->ultimo += 1;  //Aumentando o tamanho da lista
    }
}

void ListaCont::insereUltimo(int val)
{
    if (this->ultimo == (this->max - 1) )
    {   
        cout << "A lista esta cheia" << endl;
        exit(1);
    }
    else
    {
        //cout << "\nO ultimo eh:" << this->ultimo << endl;
        this->ultimo += 1;
        // cout << "O valor eh: " << val << endl;
        // cout << "O ultimo eh: " << this->ultimo << endl;
        this->vet[this->ultimo] = val;
        //cout << "\nO ultimo eh:" << this->ultimo << endl;
    }
}

void ListaCont::eleminaInicio()
{
    if (this->ultimo == -1)
        cout << "\nLista vazia!!" << endl;
    else
    {
        // cout << "O ultimo eh:" << this->ultimo << endl;
        for (int i = 1; i <= this->ultimo; i++)
        {
            // cout <<"Valores:" << (i-1);
            //cout << "Num pos: " << this->vet[i-1] << ", Recebe: " << this->vet[i] << endl;
            this->vet[i-1] = this->vet[i];
        }
        this->ultimo -= 1;
        cout << "Ultimo eh: " << this->ultimo << endl;
    }
}

void ListaCont::eliminaUltimo()
{
    if (this->ultimo == -1)
    {
        cout << "\nLista vazia!!" << endl;
        exit(1);
    }
    else
        this->ultimo -= 1;
    //cout << "Valor do ultimo: " << this->ultimo << endl;
}

void ListaCont::insereK(int k, int val)
{
    if (this->ultimo == (max - 1))
        cout << "Vetor cheio!" << endl;
    else if (k>=0 && k<=ultimo)
    {
        for (int i = this->ultimo; i >= k; i--) //Tudo depois do k é deslocado, abrindo uma posicao vaga
            this->vet[i + 1] = this->vet[i];
        
        //Inserindo o elemento no espaco vago
        this->vet[k] = val;
        this->ultimo += 1;
    }
    else
    {
        cout << "\nIndice invalido!" << endl;
        exit(1);
    }
}

void ListaCont::eliminaK(int k)
{
    if (this->ultimo == -1)
    {
        cout << "\nLista vazia!!" << endl;
        exit(1);
    }
    else
    {
        for (int i = k; i <= this->ultimo ; i++)
        {
            this->vet[i] = this->vet[i + 1];
        }
        this->ultimo -=1;
    }
}

int ListaCont::getUltimo()
{
    return this->ultimo;
}