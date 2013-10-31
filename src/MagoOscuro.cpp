#include "MagoOscuro.h"

MagoOscuro::MagoOscuro(int hp,int puntos_de_ataque, false)
{
     this->hp=hp;
    this->puntos_de_ataque=puntos_de_ataque;
    this->tipo="MagoOscuro"
}

MagoOscuro::~MagoOscuro()
{
    //dtor
}
void MagoOscuro::imprimir()
{
    cout<<"HP: "<<hp<<endl;
    cout<<"Puntos de ataque: "<<puntos_de_ataque<<endl;
    cout<<"Tipo: "<<tipo<<endl;
}

void MagoOscuro::activarPoder()
{
  this->super_rayo = true;
}

void atacar(Personaje*objetivo){
  if(super_rayo){
  objetivo->recibirAtaque(this->puntos_de_ataque*2);
  }
   objetivo->recibirAtaque(this->puntos_de_ataque);
}
