#include"joueurExpert.h"
joueurExpert(const  std::string&nomjoueur,position*p):joueur{nomjoueur,p} {}
void joueurExpert::deplacer(int direction)
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
        break;
}
