#ifndef GUERRERO_H
#define GUERRERO_H
#include "Personaje.h"

class Guerrero : Personaje
{
    public:
        Guerrero();
         int puntos_de_curacion;
        Guerrero(int hp,int puntos_de_ataque);
        void imprimir();
        void activarPoder();
        virtual ~Guerrero();
    protected:
    private:
};

#endif // GUERRERO_H
