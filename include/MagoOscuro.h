#ifndef MAGOOSCURO_H
#define MAGOOSCURO_H
#include "Personaje.h"

class MagoOscuro
{
    public:
        MagoOscuro();
         int puntos_de_curacion;
         bool super_rayo;
        Guerrero(int hp,int puntos_de_ataque);
        void imprimir();
        void activarPoder();
        virtual ~MagoOscuro();
    protected:
    private:
};

#endif // MAGOOSCURO_H
