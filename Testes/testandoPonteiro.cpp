/*
    -Objetivos:
        - O que é um ponteiro?
            -> Um ponteiro é simplesmente uma variável que armazena o endereço de outra variável ao invés
                do conteúdo.
            -> O CONTEÚDO de uma variável do tipo ponteiro, é sempre um conteúdo do tipo ENDEREÇO de memória
            
        - Como utilizar?
            -> Aplicando o operador *, conhecido como operador conteudo de, recupera-se o valor armazenado 
                naquela posicao de memoria.
            -> Se pt_x e um ponteiro, então *pt_x é o valor contido naquele endereço de memoria.
            -> Através do operador * (asterisco) pode-se alterar o valor que está armazenado em uma posição
                de memoria.
*/

#include <iostream>

using namespace std;

int main()
{

    cout << "\n\n\nExemplo sobre ponteiros e suas utilizacoes: " << endl;

    int idade = 8;

    //Existem duas maneiras de se declarar um ponteiro:

    // 1ª:
    // int *prt_idade = &idade; //Declaração juntamente com inicializacao do ponteiro
    //FIM da primeira

    // 2ª
    int *prt_idade;
    prt_idade = &idade;
    //FIM da segunda

    /*
        1º ERRO de sintaxe, pois o asterisco acessa o valor do ponteiro, portanto não pode receber um
        endereço
    */
    //*prt_idade = &idade;

    /*
        2º ERRO de sintaxe, o ponteiro não pode receber um valor diretamente antes de ser incializado com 
        um endereco de memoria para o qual ele deve apontar
    */
    //*prt_idade = 20;

    //Imprime os valores
    cout << "Valor da idade, uilizando a variavel idade: idade = " << idade << endl;
    cout << "Valor da idade, uilizando o ponteiro: *prt_idade = " << *prt_idade << endl;

    //Imprime os endereços
    cout << "Endereco da variavel idade: &idade =  " << &idade << endl;
    cout << "Endereco que o ponteiro armazenou: prt_idade =  " << prt_idade << endl;
    cout << "Endereco do proprio ponteiro: &prt_idade = " << &prt_idade << endl;

    //Usando o ponteiro para altear o conteudo da varivel idadade
    *prt_idade += 1;
    cout << "Atualizando a variavel idade utiliznado o ponteiro: *prt_idade += 1 = " << idade << endl;

    cout << "\n\n\nExemplo aritmetica de ponteiros: " << endl;
    /*
        - O que significa somar 1 a uma variavel do tipo ponteiro?
            -> Depende do tipo de ponteiro!
            -> Somar 1 a um ponteiro, voce esta indo para o proximo endereco de memoria do tipo de dado 
                especificado.
    */
    int numeroInt = 10;
    int *pt_numInt = &numeroInt; //Declaranco e incializando um ponteiro na mesma linha

    cout << "Imprimindo o endereco que o ponteiro(int) pt_num armazena: pt_num = " << pt_numInt << endl;
    cout << "Imprimindo a soma no ponteiro(int): pt_num + 1 = " << (pt_numInt + 1) << endl;
    //Note que na impressao, foi somado 4, devido a um inteiro ter tamanho de 4 bytes, no endereço de memorial no qual o ponteiro apontava
    cout << "Imprimindo a soma no ponteiro(int): pt_num + 2 = " << (pt_numInt + 2) << endl;
    //Note que na impressao, foi somado 8, devido a um inteiro ter tamanho de 4 bytes, no endereço de memorial no qual o ponteiro apontava

    double numeroDouble = 10;
    double *pt_numeroDouble = &numeroDouble; //Declaranco e incializando um ponteiro na mesma linha

    cout << "Imprimindo o endereco que o ponteiro(double) pt_num armazena: pt_num = " << pt_numeroDouble << endl;
    cout << "Imprimindo a soma no ponteiro(double): pt_num + 1 = " << (pt_numeroDouble + 1) << endl;
    //Note que na impressao, foi somado 8, devido a um double ter tamanho de 8 bytes, no endereço de memorial no qual o ponteiro apontava
    cout << "Imprimindo a soma no ponteiro(double): pt_num + 2 = " << (pt_numeroDouble + 2) << endl;
    //Note que na impressao, foi somado 16, devido a um double ter tamanho de 8 bytes, no endereço de memorial no qual o ponteiro apontava

    cout << "De forma geral, obedece essa regra: pt_tipo = pt_tipo + tam(tipo)*n" << endl;

    return 0;
}