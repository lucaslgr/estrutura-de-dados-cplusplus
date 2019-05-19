#include "FilaCircular.h"

FilaCircular::FilaCircular(int maximoF)
{
    this->fila = new float[maximoF];
    this->inicioF = 0;
    this->finalF = 0;
    this->n = 0;
    this->maximoF = maximoF;
}

FilaCircular::~FilaCircular()
{
    delete [] this->fila;
}

bool FilaCircular::listaVazia()
{
    return (this->n == 0);
}

int FilaCircular::inc(int ind)
{
    int pos;
    (ind == (this->maximoF -1) )? (pos=0) : (pos=ind+1);
    return pos;
}

void FilaCircular::insereFinal(float val)
{
    if(this->n == this->maximoF)
    {
        cout << "A fila esta cheia!" << endl;
        exit(0);
    }
    else
    {
        // //1ª FORMA DE FAZER
        // if(this->finalF == this->maximoF)
        // {
        //     this->fila[0] = val;
        //     this->finalF = 1;
        //     this->n += 1;
        // }
        // else
        // {
        //     this->fila[this->finalF] = val;
        //     this->finalF += 1;
        //     this->n += 1;
        // }
        // //FIM DA 1ª FORMA

        //              OU

        //2ª FORMA DE FAZER (Usando a função inc)
        this->fila[ this->finalF ] = val;
        this->finalF = this->inc(this->finalF);
        this->n ++;
        //FIM DA 1ª FORMA
    }
}

void FilaCircular::removeInicio()
{
    if(!this->listaVazia()) //Se não estiver vazia
    {
        this->inicioF = this->inc(this->inicioF);
        this->n--;
    }
}

float FilaCircular::consultaInicio()
{
    return (this->fila[this->inicioF]);
}

void FilaCircular::imprimeFila()
{
    if(!this->listaVazia())
    {
        cout << "\n*********************************IMPRIME AS INFORMACOES DA FILA************************************\n";
        cout << "Numero de elementos: " << this->n << endl;
        cout << "Indice do primeiro elemento: " << this->inicioF << endl;
        cout << "Indice da proxima posicao livre apos o ultimo elemento: " << this->finalF << endl;
        cout << endl;
        cout << "\n*********************************IMPRIME os ELEMENTOS DA FILA************************************\n";
        
        int cont = 0;
        for (int i = this->inicioF; cont<1 ; i = this->inc(i))
        {

            cout << this->fila[i] << " " << endl;

            if (i == this->finalF) //Incrementacao na variavel de controle de loop
            {
                cont += 1;
            }
        }
        
    }
}