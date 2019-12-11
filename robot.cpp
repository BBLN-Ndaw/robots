
#include"robot.h"
robot::robot(){}

robot::~robot() {}
robot::robot(const std::string&nom,position*p,joueur*jou):personnage(nom,p),d_joueur{jou}
{ personnage::d_dureeVie=d_dureeVie-3;}//pour que le robot ait une durée de vie < au joueur}

position*robot::positionJoueur()const
{    return d_joueur->caseLogee();
}
bool robot::aEcraserJoueur()const
{
    return positionJoueur()==caseLogee();
}
