/*
    (EM CONSTRUÇÃO)
    - Quando um programa é executado, a memória do processo é dividida em quatro área:
        -> Intruções: Armazena o código C compilado e montado em linguagem de máquina.
        -> Pilha: Nela são criadas as variáveis locais.
        -> Estática: Onde variáveis globais e estáticas (static) são armazenadas.
        -> Heap: Alocada dinamicamente em tempo de execução. Memória "manuseável" acessada através
            do uso de ponteiros.

*/

#include <iostream>

using namespace std;

int var_Global; //Declarando uma variavel GLOBAL do tipo inteiro (Sera armazenada na ESTATICA)

int main()
{
    int var_Local; //Declarando uma variavel LOCAL do tipo inteiro (Sera armazenada na PILHA)
}