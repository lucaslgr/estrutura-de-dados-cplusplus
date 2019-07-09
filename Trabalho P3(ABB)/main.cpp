#include "No.h"
#include "Arvore.h"

using namespace std;

//Função que exibe e controla o menu do programa
void funcao_Menu(Arvore *a1)
{
    int option = -1;
    while (option != 9)
    {
        cout << "\n-------------------------Menu de operacoes---------------------------";
        cout << "\nDigite o numero correspondente a operacao desejada e pressione ENTER!\n";
        cout << "\n1. Inserir cliente por nome.";
        cout << "\n2. Buscar cliente por identificador.";
        cout << "\n3. Buscar cliente por nome.";
        cout << "\n4. Apagar cliente por identificador.";
        cout << "\n5. Listar todos os clientes.\n";
        cout << "\n9. Sair.\n";

        cin >> option;

        switch (option)
        {
        case 1:
        {
            system("cls");
            string nome;
            cout << "\nInforme o nome que deseja cadastrar: ";
            cin >> nome;
            a1->inserir(nome);
            system("pause");
        }
        break;

        case 2:
        {
            system("cls");
            int id;
            cout << "\nInforme o id que deseja buscar: ";
            cin >> id;
            a1->buscaPorId(a1->getRaiz(), id);
            system("pause");
        }
        break;

        case 3:
        {
            system("cls");
            string nome;
            cout << "\nInforme o nome que deseja buscar: ";
            cin >> nome;
            a1->buscaPorNome(a1->getRaiz(), nome);
            system("pause");
        }
        break;

        case 4:
        {
            system("cls");
            int id;
            cout << "\nInforme o id correspondente ao cliente que deseja apagar: ";
            cin >> id;
            a1->removePorId(id);
            system("pause");
        }
        break;

        case 5:
        {
            system("cls");
            cout << "\nListando todos os clientes!\n";
            a1->emOrdem(a1->getRaiz());
            system("pause");
        }
        break;

        case 9:
        {
            system("cls");
            cout << "\nSaindo...\n";
        }
        break;

        default:
        {
            system("cls");
            cout << "\n OPCAO INVALIDA!\n";
            system("pause");
        }
            break;
        }
    }
}

int main(void)
{
    Arvore *a1 = new Arvore();

    funcao_Menu(a1);


    system("pause");
    return 0;
}