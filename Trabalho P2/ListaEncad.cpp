#include "ListaEncad.h"

ListaEncad::ListaEncad()
{
    this->primeiro = NULL;
}

ListaEncad::~ListaEncad()
{
    No *p = this->primeiro;

    while (p != NULL)
    {
        No *q = p->getProx(); //Salvando o proximo
        delete p;             //Deletando o atual
        p = q;                //Passando o proximo para o atual
    }

    cout << "A lista foi destruída" << endl;
}

void ListaEncad::insereInicio(int val)
{
    if (this->primeiro == NULL) //Caso lista vazia
        this->primeiro = new No(val);
    else
    {
        No *p = this->primeiro;       //Salvando o primeiro atual
        this->primeiro = new No(val); //Novo primeiro
        this->primeiro->setProx(p);   //Setando o antigo primeiro como proximo
    }
}

void ListaEncad::insereFinal(int val)
{
    if (this->primeiro == NULL) //Caso lista vazia
        this->primeiro = new No(val);
    else
    {
        No *p = this->primeiro;

        //while para no ultimo
        while (p->getProx() != NULL) //Loop necessário para chegar até o ultimo da lista (Se usar somento p->getProx() o while só sai quando já tiver apontando para NULL)
            p = p->getProx();

        p->setProx(new No(val)); //Pegando o ultimo e setando o ultimo como um novo nó
    }
}

void ListaEncad::inserePosK(int k, int val)
{
    //Pegando o tamanho da lista atual
    int n = this->getTamLista();

    if (k < 0 || k > n)
    {
        cout << "A posicao k é inválida!!!" << endl;
        exit(0);
    }
    //Se for inserir na primeira posicao
    else if (k == 0)
    {
        this->insereInicio(val);
        // No *p = this->primeiro;
        // this->primeiro = new No(val);
        // this->primeiro->setProx(p);

        cout << "Nó inserido na posicao K com sucesso!!\n";
    }
    //Se for a ultima posicao mais 1, insere também conectando a lista
    else if (k == n)
    {
        this->insereFinal(val);
    }
    else
    {
        int contador_Posicao = 1;
        No *p = this->primeiro;
        while (p->getProx() != NULL)
        {
            No *q = p;
            if (contador_Posicao == k) //Encontrando a posicao desejada
            {
                // cout << "contador Posicao: " << contador_Posicao << endl;
                // cout << "k: " << k << endl;
                // cout << "q info: " << q->getInfo() << endl;
                // cout << "p->prox() info: " << p->getProx()->getInfo() << endl;

                No *no_AtPosK = new No(val);      //Instanciando dinâmicamente um novo nó
                no_AtPosK->setProx(p->getProx()); //Setnado o proximo do novo nó para o nó da posicao antiga
                q->setProx(no_AtPosK);            //Setando o proximo da posicao anterior para o novo nó

                // cout << "q->getProx() info: " << q->getProx()->getInfo() << endl;
                // cout << "no_AtPosk->getProx() == p->prox() info: " << no_AtPosK->getProx()->getInfo() << endl;

                break;
            }

            contador_Posicao += 1;
            p = p->getProx();
        }
    }
}

void ListaEncad::insereOrdenado(int val)
{
    No *p = this->primeiro;

    if (this->verificaListaVazia())
    {
        //cout << "Passou aqui, insere o primeiro" << endl;
        this->primeiro = new No(val);
    }
    else
    {
        int posicao = 0;
        int flag = 0;
        No *q;
        // cout << "Passou aqui" << endl;
        while (p != NULL)
        {
            if (this->primeiro->getInfo() >= val)
            {
                //cout << "Passou aqui, insere no inicio" << endl;
                this->insereInicio(val);
                flag = 1;
                break;
            }
            else if (p->getInfo()>= val && q->getInfo()<= val)
            {
                //cout << "Passou aqui, insere no meio" << endl;
                No *novo_No = new No(val);
                novo_No->setProx(p);
                q->setProx(novo_No);
                flag = 1;
                break;
            }
            q = p;
            p = p->getProx();
        }
        if (flag != 1)
        {
            //cout << "Passou aqui, insere no final" << endl;
            this->insereFinal(val);
        }
    }  
}

void ListaEncad::removeInicio()
{
    if (this->primeiro == NULL)
    {
        cout << "A lista esta vazia" << endl;
        exit(0);
    }
    else
    {
        No *p = this->primeiro;
        this->primeiro = p->getProx();
        delete p;
    }
}

void ListaEncad::removeFinal()
{
    if (this->primeiro == NULL)
    {
        cout << "A lista esta vazia" << endl;
        exit(0);
    }
    else
    {
        No *p = this->primeiro;
        No *q; //Ponteiro para apontar para o penultimo
        while (p->getProx() != NULL)
        {
            q = p; //Q salva sempre o anterior
            p = p->getProx();
        }

        //Penultimo aponta para NULL
        q->setProx(NULL);
        //Deleta o ultimo
        delete p;
    }
}

void ListaEncad::removePosK(int k)
{
    //Pegando o tamanho da lista atual
    int n = this->getTamLista();

    if (k < 0 || k > (n - 1))
    {
        cout << "A posicao k é inválida!!!" << endl;
        exit(0);
    }
    //Se for inserir na primeira posicao
    else if (k == 0)
    {
        this->removeInicio();
    }
    //Se for a ultima posicao mais 1, insere também conectando a lista
    else if (k == (n - 1))
    {
        this->removeFinal();
    }
    else
    {
        int contadorPosicao = 1;
        No *p = this->primeiro;
        No *q = this->primeiro;

        while (p->getProx() != NULL)
        {
            if (contadorPosicao == k)
            {
                q = p;
                No *no_Del = p->getProx();
                // cout << "Info no_del:" << no_Del->getInfo() << endl; //pegando certo
                q->setProx(no_Del->getProx());
                delete no_Del;

                break;
            }
            q = p;
            p = p->getProx();
            contadorPosicao += 1;
        }
    }
}

bool ListaEncad::busca(int val)
{
    No *p = this->primeiro;
    while (p != NULL)
    {
        if (p->getInfo() == val)
        {
            return true;
        }
        p = p->getProx();
    }

    return false; //Se não entrar na saída true, entra aqui
}

void ListaEncad::imprimeLista()
{
    if (this->primeiro == NULL)
        cout << "\nA lista esta vazia!!!\n";
    else
    {
        No *p = this->primeiro;

        cout << "\n****************************************IMRPIMINDO A LISTA******************************************\n";
        while (p != NULL)
        {
            cout << p->getInfo() << " ";
            p = p->getProx();
            // cout << "Teste" << endl;
        }
    }
}

No *ListaEncad::getPrimeiro()
{
    return this->primeiro;
}

int ListaEncad::getTamLista()
{
    //Descobrindo o tamanho da lista
    int n = 0;
    No *p = this->primeiro;
    while (p != NULL)
    {
        n += 1;
        p = p->getProx();
    }

    return n;
}

bool ListaEncad::verificaListaVazia()
{
    if (this->getTamLista() == 0)
    {
        return true;
    }
    return false;
}