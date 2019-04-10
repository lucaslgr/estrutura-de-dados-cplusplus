#include "Relogio.h"
#include <iostream>

using namespace std;

int main()
{
    Relogio r;
    r.acertarRelogio(10, 59, 58);
    r.tique();
    r.tique();
    r.tique();
    r.tique();
    r.tique();
    r.tique();
    r.tique();
    r.tique();
    r.tique();
    cout << "Hora certa: ";
    cout << r.consultarHoras() << ":"
         << r.consultarMinutos() << ":"
         << r.consultaSegundos() << "\n";

    return 0;
}