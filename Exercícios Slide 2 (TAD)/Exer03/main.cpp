#include <iostream>
#include "Aluno.h"

using namespace std;

int main()
{
    Aluno a1(22, "Lucas", "20143131312");

    a1.leNotas();
    a1.calculaMedia();
    a1.leFrequencia();
    //a1.print_dadosAluno();
    a1.aluno_Status();

    system("pause");
    return 0;
}