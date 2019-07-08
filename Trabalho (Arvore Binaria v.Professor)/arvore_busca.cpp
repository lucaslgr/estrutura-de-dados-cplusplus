//ARVORE BINÁRIA DE BUSCA
//EM C++ NÃO PRECISA ALOCAR NADA. O OBJETO É CRIADO COM NEW
//NÃO EXISTE STRUCT. AS VARÁVEIS FICAM NA CLÁUSULA PRIVATE

#include <iostream>

using namespace std;
//----------------------------------------------------------------------------------------------------//
class No
{
public:

    //NOVO NO
    No(int chave)
    {
        this->chave = chave;
        esq = NULL;
        dir = NULL;
    }

    //PEGA O VALOR DO NO
    int getChave()
    {
        return chave;
    }

    //RETORNA REFERÊNCIA DO FILHO ESQUERDO
    No* getEsq()
    {
        return esq;
    }

    //RETORNA REFERÊNCIA DO FILHO DIREITO
    No* getDir()
    {
        return dir;
    }

    //ATRIBUI NOVO NO COMO FILHO ESQUERDO
    void setEsq(No* no)
    {
        esq = no;
    }

    //ATRIBUI NOVO NO COMO FILHO DIREITO
    void setDir(No* no)
    {
        dir = no;
    }

//STRUCT
private:
    No *esq, *dir;
    int chave;
};
//----------------------------------------------------------------------------------------------------//
class Arvore
{
public:

    //CONSTRUTOR
    Arvore()
    {
        raiz = NULL;
    }

    //INSERE NOVO NO
    void inserir(int chave)
    {
        //SE PRIMEIRO NO
        if(raiz == NULL)
        {
            raiz = new No(chave);
        }
        //SENÃO
        else
        {
            inserirAux(raiz, chave);
        }
    }

    //INSERE UMA FOLHA A DIREITA OU A ESQUERDA DEPENDENDO DO VALOR DA CHAVE SEM CHAVE REPETIDA
    void inserirAux(No* no, int chave)
    {
        if(chave < no->getChave())
        {
            if(no->getEsq() == NULL)
            {
                No *novo_no = new No(chave);
                no->setEsq(novo_no);
            }
            else
            {
                inserirAux(no->getEsq(), chave);
            }
        }
        else if(chave > no->getChave())
        {
            if(no->getDir() == NULL)
            {
                No *novo_no = new No(chave);
                no->setDir(novo_no);
            }
            else
            {
                inserirAux(no->getDir(), chave);
            }
        }
    }

    //RETORNA A RAIZ
    No* getRaiz()
    {
        return raiz;
    }

    //PERCORRIMENTO EM ORDEM
    void emOrdem(No* no)
    {
        if(no != NULL)
        {
            emOrdem(no->getEsq());
            cout << no->getChave() << " ";
            emOrdem(no->getDir());
        }
    }

    //BUSCA EM ÁRVORE BINÁRIA
    void busca(No* no, int chave)
    {
        if(no != NULL)
        {
            if(chave == no->getChave())
            {
                cout << "Chave " << chave << " localizada\n";
            }
            else
            {
                if(chave > no->getChave())
                {
                    busca(no->getDir(), chave);
                }
                else if(chave < no->getChave())
                {
                    busca(no->getEsq(), chave);
                }
            }
        }

    }

//STRUCT
private:
    No* raiz;
};
//----------------------------------------------------------------------------------------------------//
int main(void)
{
    Arvore arv;
    arv.inserir(8);
    arv.inserir(10);
    arv.inserir(14);
    arv.inserir(13);
    arv.inserir(3);
    arv.inserir(1);
    arv.inserir(6);
    arv.inserir(4);
    arv.inserir(7);

    arv.emOrdem(arv.getRaiz());

    arv.busca(arv.getRaiz(), 7);

    return 0;
}
