#include "Retangulo.h"

Retangulo::Retangulo()
{
    this->inf_Esquerdo = new ponto(0, 0);
    this->sup_Direito = new ponto(0, 0);
}

Retangulo::Retangulo(ponto *inf_Esquerdo, ponto *sup_Direito)
{
    this->inf_Esquerdo = inf_Esquerdo;
    this->sup_Direito = sup_Direito;
}

Retangulo::Retangulo(float x1, float y1, float x2, float y2)
{
    this->inf_Esquerdo = new ponto(x1, y1);
    this->sup_Direito = new ponto(x2, y2);
}

Retangulo::~Retangulo()
{
    cout << "Retangulo destruido" << endl;
}

float Retangulo::calc_Area()
{
    float area = 0;

    float largura = this->sup_Direito->get_X() - this->inf_Esquerdo->get_X();
    float altura = this->sup_Direito->get_Y() - this->inf_Esquerdo->get_Y();
    return (altura*largura);
}

bool Retangulo::vPontoInterno(ponto *op)
{
    bool condicaoA = (op->get_X() <= this->sup_Direito->get_X()
                        && op->get_X() >= this->inf_Esquerdo->get_X());

    bool condicaoB = (op->get_Y() <= this->sup_Direito->get_Y()
                        && op->get_Y() >= this->inf_Esquerdo->get_Y());

    if(condicaoA == true && condicaoB == true)
        return true;
    else
        return false;
}