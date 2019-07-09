#include "Arvore.h"
#define LIMITE_RAND 100 //Constante definida para limitar a faixa de numeros randomicos

//CONSTRUTOR
Arvore::Arvore()
{
    this->raiz = NULL;
    this->lista_controleChaves = new ListaInteiro();
    this->lista_controleNomes = new ListaString();
}

//INSERE CLIENTE POR NOME
void Arvore::inserir(string nome)
{
    //SE PRIMEIRO NO
    if (this->raiz == NULL)
    {
        //Gerando a chave aleatoriamente
        srand((unsigned)time(0));
        int chaveRandon = rand() % LIMITE_RAND;        

        raiz = new No(chaveRandon, nome);

        //Atualizando listas de controle
        this->lista_controleChaves->insereInicio(chaveRandon); //Inserindo as chaves
        this->lista_controleNomes->insereInicio(nome); //Inserindo os nomes

        cout << endl << nome << " foi inserido com sucesso!\n\n" << endl;
    }
    //SENÃO
    else
    {
        int chaveRandon = 0;

        while (this->lista_controleNomes->busca(nome))
        {
            cout << "\nO nome informado ja existe!!\n";
            cout << "Por favor informe outro nome: ";
            cin >> nome;
        }

        srand((unsigned)time(0));
        chaveRandon = rand() % LIMITE_RAND;

        //Loop para verificar/gerar uma chave SEM REPETÊNCIA
        while (this->lista_controleChaves->busca(chaveRandon))
        {
            //Gerando a chave aleatoriamente
            srand((unsigned)time(0));
            chaveRandon = rand() % LIMITE_RAND;
        }

        inserirAux(this->raiz, chaveRandon, nome);
        
        //Atualizando listas de controle
        this->lista_controleChaves->insereInicio(chaveRandon); //Inserindo as chaves
        this->lista_controleNomes->insereInicio(nome);         //Inserindo os nomes
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
                if (no->getDir() == NULL)
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

void Arvore::removePorId(int id)
{
    this->raiz = this->removePorIdAux(this->raiz, id);
}

No *Arvore::removePorIdAux(No *no, int id)
{
    if (no == NULL)
    {
        return NULL;
    }
    else if (id < no->getId())
        no->setEsq( this->removePorIdAux(no->getEsq(), id));
    else if (id > no->getId())
        no->setDir( this->removePorIdAux(no->getDir(), id));
    else //Encontrado o no a ser removido
    {
        if ((no->getEsq() == NULL) && (no->getDir() == NULL))
        {
            no = this->removeFolha(no);
        }
        else if ((no->getEsq() == NULL) || (no->getDir() == NULL))
            no = this->removeNo1Filho(no);
        else
        {
            //nó tem dois filhos
            No *aux = menorSubArvDireita(no);

            //troca as informacoes
            int tmp = aux->getId();
            aux->setId(no->getId());
            no->setId(tmp);
            // tmp->setId(C);

            //recursao: para a sub. arv. direita
            no->setDir( this->removePorIdAux(no->getDir(), id));
        }
        
    }
    
    return no;
}


No *Arvore::removeFolha(No *no)
{
    delete no;
    return NULL;
}

No *Arvore::removeNo1Filho(No *p)
{
    No *aux;
    if (p->getEsq() == NULL)
        aux = p->getDir();
    else
        aux = p->getEsq();
    delete p;
    return aux;
}

No *Arvore::menorSubArvDireita(No *p)
{
    No *aux = p->getDir();
    while (aux->getEsq() != NULL)
        aux = aux->getEsq();
    return aux;
}