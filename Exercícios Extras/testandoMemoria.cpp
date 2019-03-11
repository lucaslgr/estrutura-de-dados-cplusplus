/*
    - Objetivo:
        -> Entender o como funciona a memória do computador
        -> Como é endereçada e como são os endereços de memória
        -> Qual o tamanho de memória ocupa cada tipo primitivo de variável (int, long, float, double, char ... etc)

    - Notas:
        -> Função sizeof():
            O operador sizeof indica o tamanho, em bytes, do tipo da variável. Esse operador permite que
            você evite especificar tamanhos de dados dependentes do computador em seus programas.
            Ref: https://www.cprogressivo.net/2013/03/A-funcao-sizeof-e-blocos-vizinhos-de-memoria-em-C.html
*/

#include <iostream>

using namespace std;

int main()
{
    cout << "\n\n\nExemplo sobre memoria: " << endl;

    // Printando o tamanho de vários tipos de variáveis do C e do C++
    cout << "O tamanho em bytes que uma variável char ocupa na memoria eh: " << sizeof(char) << " byte." << endl;
    cout << "O tamanho em bytes que uma variável bool ocupa na memoria eh: " << sizeof(bool) << " byte." << endl;
    cout << "O tamanho em bytes que uma variável short ocupa na memoria eh: " << sizeof(short) << " byte." << endl;
    cout << "O tamanho em bytes que uma variável inteiro ocupa na memoria eh: " << sizeof(int) << " byte." << endl;
    cout << "O tamanho em bytes que uma variável long ocupa na memoria eh: " << sizeof(long) << " byte." << endl;
    cout << "O tamanho em bytes que uma variável float ocupa na memoria eh: " << sizeof(float) << " byte." << endl;
    cout << "O tamanho em bytes que uma variável double ocupa na memoria eh: " << sizeof(double) << " byte." << endl;
    cout << "O tamanho em bytes que uma variável string ocupa na memoria eh: " << sizeof(string) << " byte." << endl;
    //FIM

    /*
        - O que é a memória?
            -> A memoria de qualquer computador e uma sequencia de bytes.
            -> Cada byte na memoria e identificado por um enderecço numérico, independente do seu conteudo.
            -> Cada byte na memoria e identificado por um endereço numérico, independente do seu conteúdo.
                Ex:
                    -> 0x0065FD40
        
        - Sempre que declaramos uma variavel temos associoado a ela:
            -> Um nome (Ou identificador)
            -> Um endereço de memória
            -> Um valor/conteúdo
    */
    cout << "\n\n\nExemplo sobre alocacao de memoria e variaveis: " << endl;

    int anoAtual = 2019; //Declaracao e atribuição de uma variável

    cout << "O nome da variavel eh: anoAtual" << endl;
    cout << "O endereco dessa variavel eh: " << &anoAtual << endl;
    cout << "O conteudo/valor dessa variavel eh: "<< anoAtual << endl;

    return 0;
}