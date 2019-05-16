#include "No.h"
#include "Lista.h"

using namespace std;

int main()
{
    // //TESTE DOS NÓS
    // No n1(20);
    // No n2(30);
    // cout << "A informacao do no 1 e 2 : "<< n1.getInfo() <<" e "<< n2.getInfo() << endl;
    // n1.setProx(&n2);
    // cout << "O valor do n2 acessando pelo prox de no 1: " << n1.getProx()->getInfo() << endl;
    // //FIM DO TESTE DOS NÓS

    Lista *l1 = new Lista();

    

    l1->insereInicio(20);
    l1->insereInicio(30);
    l1->insereFinal(40);
    l1->insereFinal(55);
    l1->insereFinal(60);

    l1->inserePosK(0, 33);
    l1->inserePosK(6, 33);
    l1->inserePosK(3,22);

    cout << "Tamanho da lista:" << l1->getTamLista() << endl;
    l1->imprimeLista();

    l1->removeInicio();
    l1->removeInicio();
    l1->removeInicio();
    l1->imprimeLista();

    l1->removeFinal();
    l1->removeFinal();
    l1->imprimeLista();
    return 0;
}