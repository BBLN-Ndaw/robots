#include"joueur.h"
joueur::joueur():d_score{0}  {}
joueur::joueur(const std::string&nomjoueur,position*p):personnage(nomjoueur,p),d_score{0}  {}
 const int joueur::score()const
 {
    return d_score;
 }
void joueur:: deplacer(int direction)
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
    case 3:
           deplaceHautDroite();
           break;
    case -3:
           deplaceHautGauche();
           break;
    case 4:
           deplaceBasDroit();
           break;
    case -4:
        deplaceBasGauche();
        break;
    default:
        return;
   }

}

void joueur::sauver(std::ostream&ost)const
{
    ost<<'j';
    affiche(ost);
}

void joueur::lirejoueur(std::istream&ist)
{

}
