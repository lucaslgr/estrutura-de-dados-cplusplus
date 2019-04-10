#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    ofstream arq_Saida;

    //Abrindo o arquivo
    arq_Saida.open("UsandoOfstream.txt");

    string nome;
    
    //Limpando buffer de memoria do cin
    cin.clear();
    cin.ignore(100, '\n');
    
    cout << "Informa um nome: " << endl;
    getline(cin, nome);

    arq_Saida << nome;

    string idade;
    cout << "Informe a idade: " << endl;
    cin >> idade;

    arq_Saida << endl << idade;

    //Fechando o arquivo
    arq_Saida.close();


    ifstream arq_Entrada;

    arq_Entrada.open("UsandoOfstream.txt");

    string nomeLido;
    string idadeLida;

    getline(arq_Entrada, nomeLido); // NomeLido;
    arq_Entrada >> idadeLida;

    cout << "O nome lido eh: " << nomeLido << endl;
    cout << "A idade lida eh: " << idadeLida << endl;

    return 0;
}