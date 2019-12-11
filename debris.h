#ifndef DEBRIS_H
#define DEBRIS_H
#include<iostream>
#include"position.h"
#include"personnage.h"
class debris{
public:
    debris(const position&p,int niveauDanger); //le niveua du danger permet de faire disparaitre le robot et/ou le joueur
    bool estDansDanger(personnage*p)const;                                       //leur point de vie seront fini ou eventuellement rester klk choses
private:                                   //si le niveau de dnge rest 10 alors le personnage meurt direct
    position d_positionDebris;
    int d_niveauDanger;




};


#endif // DEBRIS_H
