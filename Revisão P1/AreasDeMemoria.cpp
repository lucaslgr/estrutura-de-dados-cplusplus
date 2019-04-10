/*
    -> Quando um programa é executado a memória do processo é dividida em quatro áreas:
        ->> INSTRUÇÕES:
            - Armazena o código C compilado e montado e linguagem de máquina
        ->> PILHA:
            - Nela são criadas as variáveis locais
        ->> ESTÁTICA:
            - Onde variáveis globais e estáticas (static) são armazenadas
        ->> HEAP
            - Aloca dinamicamente em tempo de execução. Memória manuseável acessada através do uso de ponteiros.
*/
#include <iostream>

using namespace std;

int vGlobal; //Alocada na área de memória -> ESTATÍCA


void func_Test()
{
    int vLocal; //Alocada na área de memória -> PILHA

    int numeroLocal;
    cout << "Digite um numero: " << endl;
    cin >> numeroLocal; //Alocada na área de memória -> PILHA
}

int main()
{
    int vLocal; //Alocada na área de memória -> PILHA

    int vLocal = 2;
    int *p1 = new int[vLocal]; //Alocada de forma dinamica ou de forma estática ? na PILHA ou na HEAP?
    // ou
    // int *p1 = new int[2];

    cout << "Digite um numero para alocar um vetor: " << endl;
    cin >> vLocal;

    int *p2 = new int[vLocal]; //Alocada de forma dinamica na área de memória -> HEAP

    return 0;
}