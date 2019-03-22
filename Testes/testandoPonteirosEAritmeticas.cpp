/*
    -Objetivos:
        - Testar quais declaração e atribuições para ponteiros são válidas e corretas e quais
            geram erros.
*/

#include <iostream>

using namespace std;

int main()
{
    int i, j; //Declarando duas variáveis inteiras
    int *p, *q; //Declarando duas variáveis do tipo ponteiros

    //Teste 1
    p = &j;
    
    /*
        - CORRETO/FUNCIONA!
        Justificativa:
            -> Uma variável do tipo ponteiro armazena no seu conteúdo O ENDEREÇO de outra variável
                do tipo ao qual o ponteiro foi declarado.
        Descrição:
            -> No teste 1 a atribuição realizada faz com que o ponteiro p, que é um ponteiro para o
                tipo primitivo de dado INTEIRO, receba o endereço de da variável INTEIRA j, portanto,
                a sintaxe está correta.
    */

    //Teste 2
    //*q = &j;

    /*
        - INCORRETO/ NAO FUNCIONA!
        Justificativa:
            -> O operador asterisco *, busca o conteúdo/valor que o ENDEREÇO de memória para o qual o 
                ponteiro aponta está armazenando, portanto pode apenas receber um valor e não um endereço.
        Descrição:
            -> No teste 2 a atribuição realizada faz com que o ponteiro p, que é um ponteiro para o
                tipo primitivo de dado INTEIRO, vá ao VALOR para qual o endereço que ele aponta está
                armazenando e receba o ENDEREÇO de da variável INTEIRA j, portanto, a sintaxe está incorreta.
    */

    //Teste 3
    p = &*&i;

    /*
        - CORRETO/FUNCIONA!
        Justificativa:
            -> Uma variável do tipo ponteiro armazena no seu conteúdo O ENDEREÇO de outra variável
                do tipo ao qual o ponteiro foi declarado.
            -> A junção do símbolo "E comercial" & que busca o endereço da variável a sua frente juntamente
                com o asterisco * que busca o valor/conteudo do endereço de memória a sua frente SE ANULAM
        Descrição:
            -> No teste 3 a atribuição realizada faz com que o ponteiro p, que é um ponteiro para o
                tipo primitivo de dado INTEIRO, receba o endereço da variável i, pois os dois sinais
                &* anteriores se ANULAM, sobrando apenas ->> p = &i; , que é uma atribuição correta.
    */

    //Teste 4
    //i = (*&)j;

    /*
        - INCORRETO/ NAO FUNCIONA!
        Justificativa:
            -> A junção do símbolo "E comercial" & que busca o endereço da variável a sua frente juntamente
                com o asterisco * que busca o valor/conteudo do endereço de memória a sua frente SE ANULAM,
                PORÉM, os dois símbolos são como operadores internos de escopos de variáveis, portanto, eles
                precisam ser utilizados juntamente com uma variável a sua frente, para o qual eles vão buscar
                o endereço ou o valor da mesma.
        Descrição:
            -> No teste 4 o erro está nos símbolos *& serem mantidos dentro do parênteses, eles devem sempre
                vir juntamente com uma variave posterior a eles, pois eles são operadores que tem como parâmetro
                uma variável.
    */

    //Teste 5
    i = *&*&j;

    /*
        - CORRETO/FUNCIONA!
        Justificativa:
            -> A junção do símbolo "E comercial" & que busca o endereço da variável a sua frente juntamente
                com o asterisco * que busca o valor/conteudo do endereço de memória a sua frente SE ANULAM
        Descrição:
            -> No teste 5 a atribuição realizada faz com que a variavel inteiro i, receba o valor da variavel
                inteira j, pois a ANULAÇÃO dos símbolos *& utilizados seguidamente resulta em uma atribuição
                equivalente a esta -> i = j; .
    */

    //Teste 6
    //q = &p; 

    //ABAIXO A FORMA CORRETA
    int **pt = &p; //Declarando um ponteiro de ponteiro e atribuindo e o fazendo apontar para o ponteiro p
    
    /*
        - INCORRETO/NÃO FUNCIONA!
        Justificativa:
            -> Uma variável do tipo ponteiro armazena no seu conteúdo O ENDEREÇO de outra variável
                do tipo ao qual o ponteiro foi declarado.
            -> A junção do símbolo "E comercial" & que busca o endereço da variável a sua frente, logo,
                como o ponteiro JÁ é uma VARIÁVEL QUE ARMAZENA O ENDEREÇ DE OUTRA VARIÁVEL primitiva, 
                o uso do "E comercial" & no ponteiro, faz com que seja retornado o PRÓPRIO ENDEREÇO DO
                PONTEIRO.
        Descrição:
            -> No teste 6 a atribuição realizada faz com que o ponteiro q, tente receber o endereço de
                memória DE UM PONTEIRO, logo, para a expressão funcionar, o ponteiro q teria que ser um
                um PONTEIRO DE PONTEIRO, ou seja, uma variável ponteiro que armazena ENDEREÇO DE PONTEIROS.
                    ->>Ex correto:
                        int **q = &p;
    */

    //Teste 7
    int a = 1;
    int b = 1;

    p = &a;
    q = &b;

    int num1 = (*p)++ + *q; //Teste 7 AQUI
    // ATRIBUI PRIMEIRO para num1, INCREMENTA a variável para qual p aponta DEPOIS
    cout << "\nSaidas do teste 7 "<< endl;
    cout << "\n1 - Usando o incremento após a variavel-> num1 = (*p)++ + *q; \n Saida:  " << num1 << endl;

    int c = 1;
    int d = 1;

    p = &c;
    q = &d;

    int num2 = ++(*p) + *q; //Teste 7 AQUI
    // INCREMENTA primeiro para a variável para qual p aponta, ATRIBUI para num2 DEPOIS
    cout << "\n\n2 - Usando o incremento antes da variavel-> num2 = ++(*p) + *q; \n Saida:  " << num2 << endl;

    /*
        - CORRETO/FUNCIONA!
        Justificativa:
            -> O operador asterisco *, busca o conteúdo/valor que o ENDEREÇO de memória para o qual o 
                ponteiro aponta está armazenando
        Descrição:
            -> No teste 7 a atribuição realizada faz com que a variavel inteiro i, receba o valor da variavel
                inteira para qual p aponta incrementada +1 (Devido ao incremento ++), e posteriormente é somada
                com o valor da variável para qual o ponteiro q aponta.
    */

    //Teste 8
    // if (p == i) i++;

    /*
        - INCORRETO/NÃO FUNCIONA!
        Justificativa:
            -> p é um ponteiro que armazena um endereço de uma variável do tipo inteiro, e i é uma variável do tipo inteiro,
                logo, a comparação realizada (p==i) compara dois conteúdos diferentes, um erro de SINTAXE.
    */

    return 0;
}
