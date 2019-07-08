#include "Arvore.h"
#define LIMITE_RAND 100

//CONSTRUTOR
Arvore::Arvore()
{
    raiz = NULL;
}

//INSERE NOVO NO
void Arvore::inserir(string nome)
{
    //SE PRIMEIRO NO
    if (raiz == NULL)
    {
        //Gerando a chave aleatoriamente
        srand((unsigned)time(0));
        int aux = rand() % LIMITE_RAND;

        raiz = new No(aux, nome);
        cout << nome << " foi inserido com sucesso!\n\n" << endl;
    }
    //SENÃO
    else
    {
        //Gerando a chave aleatoriamente
        srand((unsigned)time(0));
        int aux = rand() % LIMITE_RAND;

        inserirAux(this->raiz, aux, nome);
        cout << nome << " foi inserido com sucesso!\n\n" << endl;
    }
}

//INSERE UMA FOLHA A DIREITA OU A ESQUERDA DEPENDENDO DO VALOR DA CHAVE SEM CHAVE REPETIDA
void Arvore::inserirAux(No *no, int chave, string nome)
{
    if (chave < no->getId())
    {
        if (no->getEsq() == NULL)
        {
            No *novo_no = new No(chave, nome);
            no->setEsq(novo_no);
        }
        else
        {
            inserirAux(no->getEsq(), chave, nome);
        }
    }
    else if (chave > no->getId())
    {
        if (no->getDir() == NULL)
        {
            No *novo_no = new No(chave, nome);
            no->setDir(novo_no);
        }
        else
        {
            inserirAux(no->getDir(), chave, nome);
        }
    }
}

//RETORNA A RAIZ
No *Arvore::getRaiz()
{
    return raiz;
}

//PERCORRIMENTO EM ORDEM
void Arvore::emOrdem(No *no)
{
    if (no != NULL)
    {
        emOrdem(no->getEsq());
        cout << "\nID: " << no->getId() << " ";
        cout << "\nNome: " << no->getNome();
        cout << endl;
        emOrdem(no->getDir());
    }
}

//BUSCA EM ÁRVORE BINÁRIA por ID
void Arvore::buscaPorId(No *no, int chave)
{
    if (no != NULL)
    {
        if (chave == no->getId())
        {
            cout << endl;
            cout << endl
                 << "Chave " << chave << " localizada\n";
            cout << "Nome: " << no->getNome() << endl;
            cout << "Id: " << no->getId() << endl;
        }
        else
        {
            if (chave > no->getId())
            {
                if (no->getEsq() == NULL)
                {
                    cout << endl
                         << " ID NAO ENCONTRADO" << endl;
                }
                else
                {
                    buscaPorId(no->getDir(), chave);
                }
            }
            else if (chave < no->getId())
            {
                if (no->getEsq() == NULL)
                {
                    cout << endl
                         << " ID NAO ENCONTRADO" << endl;
                }
                else
                {
                    buscaPorId(no->getEsq(), chave);
                }
            }
        }
    }
}

//BUSCA EM ÁRVORE BINÁRIA por nome
void Arvore::buscaPorNome(No *no, string nomeProcurado)
{
    if (no != NULL)
    {
        if (nomeProcurado == no->getNome())
        {
            cout << endl;
            cout << endl
                 << "Nome " << nomeProcurado << " localizado(a)\n";
            cout << "Nome: " << no->getNome() << endl;
            cout << "Id: " << no->getId() << endl;
            return;
        }
        else
        {
            this->buscaPorNome(no->getEsq(), nomeProcurado);
            this->buscaPorNome(no->getDir(), nomeProcurado);
            return;
        }
        cout << "\nO NOME " << nomeProcurado << " NAO EXISTE NA LISTA! \n";
    }
}