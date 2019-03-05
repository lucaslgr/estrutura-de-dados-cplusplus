/*
    MODE->EXPERT
    OBS: Usando a função getline(obj, string)
    Exercício: 
    4. Escreva um programa que pergunte e leia o
    primeiro e último nome do usuário e em
    seguida crie, armazene e imprima uma string
    contendo o último e primeiro nomes no
    seguinte formato:

    Exemplo: José Oliveira
    Saída: Oliveira, J.
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string nomeCompleto, nome, sobrenome;

    cout << "Informe o seu primeiro nome completo e pressione ENTER: " << endl;
    getline(cin, nomeCompleto); //Pegando a linha toda do programa    

    //Rotina para pegar o nome
    int i;
    const char espaco = ' ';
    while (nomeCompleto[i] != espaco)
    {
        nome+=nomeCompleto[i];
        i++;
    }

    //Rotina para pegar sobrenome
    const char charNulo = '\0';
    while (nomeCompleto[i] != charNulo)
    {
        sobrenome += nomeCompleto[i];
        i++;
    }

    //SAÍDA na TELA
    cout << sobrenome << ", " << nome[0] << ".";

    //SAÍDA EM UM ARQUIVO
    ofstream arqSaida;
    arqSaida.open("exercicio04(Expert).txt");
    arqSaida << nomeCompleto << endl; //Escrevendo o nome completo no arquivo
    arqSaida << sobrenome << ", " << nome[0] << ".";
    arqSaida.close();

    return 0;
}