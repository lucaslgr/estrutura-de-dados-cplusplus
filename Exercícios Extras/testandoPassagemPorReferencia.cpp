/*
    -Objetivos:
        
        - O que é passagem por valor?
            -> Uma cópia do valor é passado para a função.
            -> Mesmo que a função altere o valor, esta alteração não permanecerá no parâmetro
                original após o retorno da função.
        
        - O que é passagem por referência?
            -> Se a função alterar o valor do objeto passado, essa alteração será realizada no
                objeto original.
            -> Como arrays/vetores são ponteiros, então a passagem de arrays para funções é sempre
                por referência.
                ->> Os elementos do array não são copiados, apenas o endereço do primeiro elemento
                    do array.
                ->> Sendo assim pode-se alterar os valores dos elementos do array dentro da função.
*/

#include <iostream>

using namespace std;

//Exemplo de passagem por valor
void trocaPassagemPorValor(int a, int b) 
{
    int aux = b;
    b = a;
    a = aux;
}

//Exemplo de passagem por referencia
void trocaPassagemPorReferencia(int *a, int *b) 
{
    int aux = *b;
    *b = *a;
    *a = aux;
}

/*
    ATENÇÃO!!!
    - Exemplo passagem de vetor por parâmetro para exemplificar que todo array é um ponteiro
        -> Note que a funcao receberá apenas o endereço da primeira posicao do vetor vet, pois o vetor
            já é um ponteiro e consequentemente já é passado por referência por padrão
        -> Podemos usar os seguintes prototipos para declarar uma funçao que recebe um array
            ->> void incr_vet(int tam, int vet[]);
            ->> void incr_vet(int tam, int vet[3]);
            ->> void incr_vet(int tam, int *vet);
            (TODAS SÃO EQUIVALENTES, e no final das contas o que é passado para a função é o endereço
            do primeiro elemento do array)
*/

// Tipos de protótipos para se receber um array como parâmetro
// void incr_vet(int tam, int vet[])
// void incr_vet(int tam, int vet[3])
void incr_vet(int tam, int *vet)
{
    // cout << "\nPrintando o endereço da primeira posicao do vetor vet: " << vet << endl;
    // cout << "\nPrintando o endereço da segunda posicao do vetor vet: " << vet + 1 << endl;
    // cout << "\nPrintando o endereço da terceira posicao do vetor vet: " << vet + 2 << endl;

    for (int i = 0; i < tam; i++) //Incrementando os valores do vetor
        vet[i] = vet[i] + 1;
}

int main()
{
    /*
        1º - Teste PASSAGEM POR VALOR
    */
    int x = 2, y = 30;
    trocaPassagemPorValor(x, y);
    cout << "Aqui eh impresso os resultados de acordo com a passagem por valor!" << endl;
    cout << "x = " << x << " , ";
    cout << "y = " << y << endl;

    /*
        2º - Teste PASSAGEM POR REFERENCIA
    */
    cout << "\n\nAqui eh impresso os resultados de acordo com a passagem por referencia!" << endl;
    trocaPassagemPorReferencia(&x, &y);
    cout << "x = " << x << " , ";
    cout << "y = " << y << endl;

    /*
        3º - Teste PASSAGEM DE ARRAYS/VETORES
    */
    cout << "\n\nAqui eh impresso os resultados do vetor passado pela funcao de incremento!" << endl;
    int v[] = {10, 20, 5, 21}; //Declarando e inicializando um array/vetor

    incr_vet(4, v); //Chamando a funcao incr_vet e passando o vetor como parâmetro

    cout << v[0] << " " << v[1] << " " << v[2] << " " << v[3] << "\n"; //Saída: 11 21 6

    return 0;
}