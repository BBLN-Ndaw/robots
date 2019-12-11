#ifndef ROBOT_H
#define ROBOT_H
#include<iostream>
#include"personnage.h"
#include"joueur.h"
class robot : public personnage{

public:
    robot();
    virtual~robot();
    robot(const std::string&nom,position*p,joueur*jou);
     virtual void sauver(std::ostream&ost)const=0;
      virtual void deplacer(int direction)=0;
       position*positionJoueur()const;
        bool aEcraserJoueur()const;

protected:
    joueur*d_joueur;

};




#endif // ROBOT_H
