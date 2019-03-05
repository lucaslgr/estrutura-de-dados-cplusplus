/*
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

using namespace std;

int main()
{
    string nome, sobrenome;

    cout << "Informe o seu primeiro nome e pressione ENTER: " << endl;
    cin >> nome;

    cout << "Informe o seu sobrenome e pressione ENTER: "<< endl;
    cin >> sobrenome;

    //SAÍDA na TELA
    cout << sobrenome << ", " << nome[0] <<".";

    //SAÍDA EM UM ARQUIVO
    ofstream arqSaida;
    arqSaida.open("exercicio04.txt");
    arqSaida << sobrenome << ", " << nome[0] << ".";
    arqSaida.close();

    return 0;
}