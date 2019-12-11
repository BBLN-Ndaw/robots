#include"vieuxRobot.h"


 vieuxRobot::vieuxRobot() {}

 vieuxRobot::~vieuxRobot(){delete d_joueur;}

 vieuxRobot::vieuxRobot(const std::string&nomRobot,position*p,joueur*jou):robot(nomRobot,p,jou) {}

void vieuxRobot::sauver(std::ostream&ost)const
{
    ost<<'r';
    affiche(ost);

}

void vieuxRobot::deplacer(int direction)
{
switch (direction)
   {
    case 1:
        deplacerVersHaut();
        break;
    case -1:
        deplacerVersBas();
        break;
    case 2:
        deplacerVersDroite();
        break;
    case -2:
         deplacerVersGauche();
         break;
    default:
        return;
   }
}

