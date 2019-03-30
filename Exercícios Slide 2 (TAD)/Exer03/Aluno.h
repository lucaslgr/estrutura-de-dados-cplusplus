#include <iostream>
#define NUM 7 //Numero de alunos

using namespace std;

class Aluno
{
private:
    int idade;
    string nome, matricula;
    double notas[NUM];
    bool frequencia[NUM];

public:
    Aluno(int idade, string n, string mat);
    ~Aluno();
    
    void set_nome(string *nome);
    void set_matricula(string *matricula);
    void set_idade(int *idade);
    void set_notas();

    int get_idade();
    string get_nome();
    string get_matricula();
    double* get_notas();

    void leNotas();
    void leFrequencia();
    void calculaMedia();
    float retorna_Media();
    float taxa_Frequencia();
    void aluno_Status();

    void print_dadosAluno();
};