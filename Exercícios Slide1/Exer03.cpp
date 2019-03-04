/*
    3. Faça um programa para ler um arquivo de
    entrada que contem as coordenadas X,Y e Z de um
    conjuntos de pontos.
    As coordenadas lidas devem ser impressas na tela
    no seguinte formato:
    Ponto 1 (0.0 , 0.0 , 0.0)
    Ponto 2 (1.5 , 1.5 , 2.0)
    ...
    A primeira linha do arquivo descreve a quantidade
    de pontos que vem a seguir e que deve ser lida pelo
    seu programa.

    Crie um arquivo texto (.txt) e salve-o
    no mesmo diretório do seu projeto
    no Codeblocks.
        * No Linux, use o programa gedit.
        Para abrir o gedit, tecle ALT+F2 e
        então digite gedit.
    
        * No Windows, use o Bloco de Notas

    Arquivo usado no exercicio:

        exercicio.txt
        9
        0.0 0.0 0.9
        0.5 0.0 0.4
        1.0 0.0 0.65
        0.0 0.5 2.5
        0.5 0.5 2.6
        1.0 0.5 4.2
        0.0 1.0 1.0
        0.5 1.0 2.5
        1.0 1.0 0.7 
        
*/

#include <fstream>
#include <iostream>

using namespace std;

int main()
{
    ifstream arqEntrada;
    int numAlunos;
    float pontoXYZ[3];

    arqEntrada.open("exercicio03.txt");
    arqEntrada >> numAlunos; //Pegando o primeiro termo

    for(int i; i < numAlunos; i++)
    {
        arqEntrada >> pontoXYZ[0]; //Pegando X
        arqEntrada >> pontoXYZ[1]; //   --   Y
        arqEntrada >> pontoXYZ[2]; //   --   Z

        //cout << "Ponto " << i + 1 << "(" << pontoXYZ[0] << " , " << pontoXYZ[1] << " , " << pontoXYZ[2] << ")\n";
        printf("Ponto %d (%.1f , %.1f , %.1f)\n", i+1, pontoXYZ[0], pontoXYZ[1], pontoXYZ[2]);
    }

    return 0;
}
