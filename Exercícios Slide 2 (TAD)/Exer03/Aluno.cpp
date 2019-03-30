#include "Aluno.h"

Aluno::Aluno(int idade, string n, string mat)
{
    this->idade = idade;
    this->nome = n;
    this->matricula = mat;
}

Aluno::~Aluno()
{
    cout << "Aluno destruido!" << endl;
}

void Aluno::set_nome(string *nome)
{
    this->nome = *nome;
}

void Aluno::set_matricula(string *matricula)
{
    this->matricula = *matricula;
}

void Aluno::set_idade(int *idade)
{
    this->idade = *idade;
}

int Aluno::get_idade()
{
    return this->idade;
}

string Aluno::get_nome()
{
    return this->nome;
}

string Aluno::get_matricula()
{
    return this->matricula;
}

double* Aluno::get_notas() {
    return this->notas;
}

void Aluno::leNotas()
{
    for (int i = 0; i < (sizeof(this->notas)/sizeof(this->notas[0])); i++)
    {
        cout << "Informa a " << i+1 << " nota: " << endl;
        cin >> this->notas[i];
    }
    system("cls");
}

void Aluno::calculaMedia()
{
    double soma=0;
    for (int i = 0; i < (sizeof(this->notas) / sizeof(this->notas[0])); i++)
        soma += this->notas[i];

    cout << "A media do aluno " << this->nome << " eh: " << soma / (sizeof(this->notas) / sizeof(this->notas[0])) << endl;
    system("pause");
    system("cls");
}

float Aluno::retorna_Media()
{
    double soma = 0;
    for (int i = 0; i < (sizeof(this->notas) / sizeof(this->notas[0])); i++)
        soma += this->notas[i];

    return (soma / (sizeof(this->notas) / sizeof(this->notas[0])) );
}

void Aluno::print_dadosAluno()
{
    cout << "Nome: " << this->nome << endl;
    cout << "Idade: " << this->idade << endl; 
    cout << "Matricula: " << this->matricula << endl;

    // cout << endl;

    // cout << "- Notas do aluno:\n";
    // this->leNotas();

    // cout << endl;

    // cout << "- Media do aluno:\n";
    // this->calculaMedia();
    Aluno::aluno_Status();

    system("pause");
    system("cls");
}

void Aluno::leFrequencia()
{
    cout << "Informe a presenca do aluno: " << this->nome  << endl;
    cout << "(1 -> presente )" << endl
         << "(0 -> ausente)" << endl;
    
    for (int i = 0; i < (sizeof(this->notas) / sizeof(this->notas[0])); i++)
    {
        cout << "Informe se no dia " << i + 1 << " o aluno esteve frenquente:" << endl;
        cin >> this->frequencia[i];
    }
    system("cls");
}

float Aluno::taxa_Frequencia()
{
    float cont_Presenca = 0,taxa_Presenca;

    for (int i = 0; i < (sizeof(this->notas) / sizeof(this->notas[0])); i++)
    {
        if (frequencia[i] == 1)
            cont_Presenca += 1;
    }

    taxa_Presenca = ((cont_Presenca / 7) * 100);

    return taxa_Presenca;
}

void Aluno::aluno_Status()
{
    if(Aluno::retorna_Media() >= 60)
    {
        if (Aluno::taxa_Frequencia()>= 60)
            cout << "Aluno aprovado\n";
        else
        {    
            cout << "Taxa de frequencia de " << this->nome << " eh: " << Aluno::taxa_Frequencia() <<"%"<< endl;
            cout << "Aluno reprovado por falta!\n";
        }
    }
    else
    {
        if (Aluno::taxa_Frequencia() >= 60)
        {
            cout << "Media de " << this->nome << " eh: " << Aluno::retorna_Media() << endl;
            cout << "Aluno reprovado por nota!\n";
        }
        else
        {
            cout << "Media de " << this->nome << " eh: " << Aluno::retorna_Media() << endl;
            cout << "Taxa de frequencia de " << this->nome << " eh: " << Aluno::taxa_Frequencia() << "%" << endl;
            cout << "Aluno reprovado por nota e por frequencia!" << endl;
        }
    }
}