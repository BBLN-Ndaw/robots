#ifndef JOUEUREXPERT_H
#define JOUEUREXPERT_H
#include"joueur.h"
#include<iostream>
class position;

class joueurExpert:public joueur{
public:
    joueurExpert(const  std::string&nomjoueur,position*p);
    virtual void deplacer(int direction)override;
     void deplaceHautDroite()=delete;
    void deplaceHautGauche()=delete;
    void deplaceBasDroit()=delete;
    void deplaceBasGauche()=delete;








};




#endif // JOUEUREXPERT_H
