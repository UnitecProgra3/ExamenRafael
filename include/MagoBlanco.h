#ifndef MAGOBLANCO_H
#define MAGOBLANCO_H
#include "Personaje.h"

class MagoBlanco :: public Personaje
{
    public:
        MagoBlanco();
         int puntos_de_curacion;
        MagoBlanco(int hp,int puntos_de_ataque);
        void imprimir();
        void activarPoder();
        virtual ~MagoBlanco();
    protected:
    private:
};

#endif // MAGOBLANCO_H
