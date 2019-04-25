/*
    MODE->EXPERT
    OBS: Usando alocação dinâmica

    USANDO MALLOC:
        Documentação:
            A função  malloc  (o nome é uma abreviatura de memory allocation) aloca espaço para
            um bloco de bytes consecutivos na memória RAM (= random access memory) do computador
            e devolve o endereço desse bloco.  O número de bytes é especificado no argumento da
            função.
            O endereço devolvido por malloc é do tipo genérico  void *. O programador armazena
            esse endereço num ponteiro de tipo apropriado. No exemplo abaixo, o endereço é armaz-
            -enado no ponteiro ptr, que é do tipo ponteiro-para-char.  A transformação do ponteiro
            genérico em ponteiro-para-char é automática; não é necessário escrever:
                -> ptr = (char *) malloc (1)

            REF: https://www.ime.usp.br/~pf/algoritmos/aulas/aloca.html

    Exercício:
    2. Implemente agora o Exercício (1) como uma função que possua o seguinte protótipo:
    -> float LeCalculaMedia (int n);
*/

#include <iostream>
#include <stdlib.h> //Para usar malloc

using namespace std;

float LeCalculaMedia(int n)
{
    float sum = 0;

    float *prt_sum = (float*) malloc(n * sizeof(int)); //Alocando memória dinamicamente

    for (int i = 0; i < n; i++)
    {
        cout << "Digite um numero e pressione ENTER:  " << endl;
        cin >> *(prt_sum + i);
        sum += *(prt_sum + i);
    }

    return (sum / n);
}

int main()
{
    int N = 0;

    cout << "Digite um numero N e pressione ENTER: " << endl;
    cin >> N;

    cout << "A media eh: " << LeCalculaMedia(N) << endl;

    return 0;
}