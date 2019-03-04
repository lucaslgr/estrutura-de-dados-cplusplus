/*
    MODE->EASY

    Exercício:
    2. Implemente agora o Exercício (1) como uma função que possua o seguinte protótipo:
    -> float LeCalculaMedia (int n);
*/

#include <iostream>

using namespace std;

float LeCalculaMedia(int n)
{
    float sum = 0;

    for (int i = 0; i < n; i++)
    {
        int numAux = 0;
        cout << "Digite um numero e pressione ENTER:  " << endl;
        cin >> numAux;
        sum += numAux;
    }

    return (sum / n);
}

int main()
{
    int N = 0;
    float sum = 0;

    cout << "Digite um numero N e pressione ENTER: " << endl;
    cin >> N;

    cout << "A media eh: " << LeCalculaMedia(N) << endl;

    return 0;
}