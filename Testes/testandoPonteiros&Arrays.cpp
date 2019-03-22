/*
    -Objetivos:
        - O que é um vetor?
            -> Em C e C++, o nome de um array (vetor) e interpretado como o endereco de memoria do primeiro
                elemento do array.
            -> Um array é implicitamente um ponteiro
        - Como utilizar?
            -> Pode-se acessar os elementos de um array de duas formas:
                ->> Utilizando o operador [] (colchetes) que busca o valor de uma especificada posicao de memória no array
                    Ex:
                        vet[2];
                        vet[i];
                        vet[i+1]
                ->> Utilizando o sinal de * (asterisco) que busca o valor de um endereço de memória específicado a sua frente
                    Ex:
                        *(vet + 2);
                        *(vet + i);
                        *(vet + i + 1);
*/

#include <iostream>

using namespace std;

int main()
{
    //Exemplo de vetores
    int vet[] = {10, 20, 30}; //Declarando e inicializando um vetor na mesma linha
    cout << "Enderecos das posicoes de memoria do vetor: " << endl;
    cout << "\n1ª maneira de acessar os enderecos: " << endl;
    cout << "comando: vet = " << vet << endl; //1ª Posicao
    cout << "comando: (vet + 1) = " << (vet + 1) << endl; //2ª Posicao
    cout << "comando: (vet + 2) = " << (vet + 2) << endl; //3ª Posicao
    cout << "\n2ª maneira de acessar os enderecos: " << endl;
    cout << "comando: &vet[0] = " << &vet[0] << endl; //1ª Posicao
    cout << "comando: &vet[0] = " << &vet[1] << endl; //2ª Posicao
    cout << "comando: &vet[0] = " << &vet[2] << endl; //3ª Posicao

    cout << "Valores armazenados nas posicoes de memoria do vetor: " << endl;
    cout << "\n1ª maneira de acessar os valores: " << endl;
    cout << "comando: *vet = " << *vet << endl;             //1ª Posicao
    cout << "comando: *(vet + 1) = " << *(vet + 1) << endl; //2ª Posicao
    cout << "comando: *(vet + 2) = " << *(vet + 2) << endl; //3ª Posicao
    cout << "\n2ª maneira de acessar os valores: " << endl;
    cout << "comando: vet[0] = " << vet[0] << endl; //1ª Posicao
    cout << "comando: vet[0] = " << vet[1] << endl; //2ª Posicao
    cout << "comando: vet[0] = " << vet[2] << endl; //3ª Posicao

    //Exemplo vetores + ponteiros
    cout << "\n\n\nExemplo vetores + ponteiros" << endl;
    double doubleRandom[3] = {1.5, 2.5, 3.5}; //Declarando e inicializando um vetor na mesma linha
    int intRandom[] = {10, 20, 30, 40};       //Declarando e inicializando um vetor na mesma linha

    int *p_int; //Declarando e inicializando um ponteiro para tipo inteiro na mesma linha
    p_int = intRandom; //Atribuindo o endereço da pimeira posicao do vetor intRandom ao ponteiro p_int

    //Printando os endereços
    cout << "\n\nPrintando enderecos do vetor intRandom: " << endl;
    cout << "\n1ª maneira, usando o ponteiro p_int " << endl;
    cout << "comando: p_int = " << p_int << endl;            //1ª Posicao
    cout << "comando: (p_int + 1) = " << (p_int + 1) << endl; //2ª Posicao
    cout << "comando: (p_int + 2) = " << (p_int + 2) << endl; //3ª Posicao
    cout << "comando: (p_int + 3) = " << (p_int + 3) << endl; //4ª Posicao
    cout << "\n2ª maneira, usando o proprio vetor intRandom " << endl;
    cout << "comando: intRandom = " << intRandom << endl;     //1ª Posicao
    cout << "comando: (intRandom + 1) = " << (intRandom + 1) << endl; //2ª Posicao
    cout << "comando: (intRandom + 2) = " << (intRandom + 2) << endl; //3ª Posicao
    cout << "comando: (intRandom + 3) = " << (intRandom + 3) << endl; //4ª Posicao

    //Printando os valores
    cout << "\n\nPrintando valores do vetor intRandom: " << endl;
    cout << "\n1ª maneira, usando o ponteiro p_int " << endl;
    cout << "comando: *p_int = " << *p_int << endl;             //1ª Posicao
    cout << "comando: *(p_int + 1) = " << *(p_int + 1) << endl; //2ª Posicao
    cout << "comando: *(p_int + 2) = " << *(p_int + 2) << endl; //3ª Posicao
    cout << "comando: *(p_int + 3) = " << *(p_int + 3) << endl; //4ª Posicao
    cout << "\n2.1ª maneira, usando o proprio vetor intRandom, usando o -> *(asterisco): " << endl;
    cout << "comando: *intRandom = " << *intRandom << endl;             //1ª Posicao
    cout << "comando: *(intRandom + 1) = " << *(intRandom + 1) << endl; //2ª Posicao
    cout << "comando: *(intRandom + 2) = " << *(intRandom + 2) << endl; //3ª Posicao
    cout << "comando: *(intRandom + 3) = " << *(intRandom + 3) << endl; //4ª Posicao
    cout << "\n2.2ª maneira, usando o proprio vetor intRandom, usando operador ->[](colchetes): " << endl;
    cout << "comando: intRandom[0] = " << intRandom[0] << endl; //1ª Posicao
    cout << "comando: intRandom[1] = " << intRandom[1] << endl; //2ª Posicao
    cout << "comando: intRandom[2] = " << intRandom[2] << endl; //3ª Posicao
    cout << "comando: intRandom[3] = " << intRandom[3] << endl; //4ª Posicao

    return 0;
}