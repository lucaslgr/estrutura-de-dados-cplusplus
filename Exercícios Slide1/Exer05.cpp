/*
    - O que fazem os seguintes programas?
        -> As descrições e os testes estão comentados e referenciados em cada programa.

    Referencia para entendimento de Precedência entre operadores em C: 
        ->>https://www.ime.usp.br/~pf/algoritmos/apend/precedence.html
*/

#include <iostream>

using namespace std;

int main()
{
    //Programa 1
    cout << "\nSaida programa 1:";
    int mat1[] = {4, 5, 6}; //Declaracao e atribuição de um vetor
    for (int j = 0; j < 3; j++)
        cout << " \n" << *(mat1 + j);
    /*
        Saída:
            4
            5
            6
    */

    //Programa 2
    cout << "\n\nSaida programa 2:";
    int mat2[] = {4, 5, 6}; //Declaracao e atribuição de um vetor
    for (int j = 0; j < 3; j++)
        cout << " \n" << (mat2 + j);
    /*
        Saída:
            Endereço 1ª posicao de mat2
            Endereço 2ª posicao de mat2
            Endereço 3ª posicao de mat2
    */

    //Programa 3
    cout << "\n\nSaida programa 3:";
    int mat3[] = {4, 5, 6}; //Declaracao e atribuição de um vetor
    // int mat3[] = {4, 5, 6, 7}; //Declaracao e atribuição de um vetor // DÚVIDA 2 AQUI
    int *p = mat3; //Declaracao e atribuição de um ponteiro do tipo inteiro que apontará para a primeira posicao do vetor mat3
    for (int j = 0; j < 3; j++)
    {
        // cout << " \n" << *p++;
        cout << " \n" << ++*p; // DÚVIDA 2 AQUI
    }
    /*

        - Exemplo de prioridade de operadores:
            ->  expressão   interpretação
                &x[i]	    &(x[i])
                *p.dia      *(p.dia)
                a[i].b[j]	((a[i]).b)[j]
                h->e->d	    (h->e)->d
                &h->e	    &(h->e)
                *x++	    *(x++)

        - Prioridade de operadores:
            -> Note que o operador de incremento ++ tem prioridade sobre o operador asterisco, logo, o que ocorre é que o incremento
                opera em cima do endereço para qual p aponta, em j=0 é impresso o conteúdo do primeiro endereço do vetor e posteriormente é incrementado +1 no ENDEREÇO do 
                ponteiro[posicao 1], em j=1 é impresso o valor do conteúdo do segundo endereço do vetor e posteriormente é 
                incrementado +1 no ENDEREÇO do ponteiro[posicao 2], em j=2 é impresso o conteúdo do teceiro endereço do vetor
                e posteriormente é incrementado +1 no endereço para qual o ponteiro aponta [posicao 3] e FIM do loop FOR.
    */

    /*
        Saída:
            4
            5
            6
    */

    //Programa 3 - (DUVIDA)
    /*
        -> Porquê no programa abaixo o incremento do ponteiro não continua mantendo a última posição para qual ele aponta?
            Na linha A, eu faço um outro incremento dentro do loop e ele aponta para o primeiro valor novamente
        
    */
    cout << "\n\nSaida programa 3(COM DUVIDA):";
    int mat4[] = {4, 5, 6, 7}; //Declaracao e atribuição de um vetor
    int *p_vet = mat4;             //Declaracao e atribuição de um ponteiro do tipo inteiro que apontará para a primeira posicao do vetor mat3
    for (int j = 0; j < 3; j++)
    {
        cout << " \n"
             << (*p_vet)++;
        if (j == 2)
            cout << "\nUltimo valor: " << *(p_vet + 1) << endl; //LINHA A
    }

    return 0;
}