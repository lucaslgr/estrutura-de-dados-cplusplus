#include "Relogio.h"

Relogio::Relogio()
{
    this->horas = 0;
    this->minutos = 0;
    this->segundos = 0;
}

Relogio::Relogio(int h)
{
    this->horas = h;
    this->minutos = 0;
    this->segundos = 0;
}

Relogio::~Relogio() {}

void Relogio::acertarRelogio(int h, int m, int s)
{
    this->horas = h;
    this->minutos = m;
    this->segundos = s;
}

int Relogio::consultarHoras()
{
    return this->horas;
}

int Relogio::consultarMinutos()
{
    return this->minutos;
}

int Relogio::consultaSegundos()
{
    return this->segundos;
}

void Relogio::tique()
{
    this->segundos += 1;

    if(this->segundos >= 60)
    {
        this->minutos += 1;
        this->segundos = 0;
    }
    if(this->minutos >= 60)
    {
        this->horas += 1;
        this->minutos = 0;
    }
    if (this->horas > 12)
    {
        this->horas -= 12; // this->horas = 0; // DIA +1 
    }
    
}
