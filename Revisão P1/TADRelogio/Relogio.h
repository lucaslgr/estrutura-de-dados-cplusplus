#include <iostream>
#include <time.h>

using namespace std;

class Relogio
{
    private:
        int segundos, minutos, horas;
    public:
        Relogio();
        Relogio(int h);
        ~Relogio();
        void acertarRelogio(int h, int m, int s);
        int consultarHoras();
        int consultarMinutos();
        int consultaSegundos();
        void tique();
};

