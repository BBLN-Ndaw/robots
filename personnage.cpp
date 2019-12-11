#include"personnage.h"
#include"position.h"

personnage::personnage(const std::string&nom,position*pos):d_nom{nom},
d_caseLogee{pos},d_dureeVie{10} {}

personnage::personnage():d_nom{" "},d_caseLogee{nullptr},d_dureeVie{0} {}

personnage::~personnage() {delete d_caseLogee;}

std::string personnage::nom()const  {return d_nom;}


void personnage::deplacerVersHaut()
{
    d_caseLogee=new position{d_caseLogee->numLigne()-1,d_caseLogee->numColonne()};

}

void personnage::deplacerVersBas()
 {
     d_caseLogee=new position{d_caseLogee->numLigne()+1,d_caseLogee->numColonne()};
 }
void personnage::deplaceHautDroite()
{
    deplacerVersHaut();
    deplacerVersDroite();
}

void personnage::deplaceHautGauche()
{
    deplacerVersHaut();
    deplacerVersGauche();
}

void personnage::deplaceBasDroit()
{
  deplacerVersBas();
  deplacerVersDroite();

}

void personnage::deplaceBasGauche()
{
    deplacerVersBas();
    deplacerVersGauche();
}
 void personnage::deplacerVersDroite()
 {
     d_caseLogee=new position{d_caseLogee->numLigne(),d_caseLogee->numColonne()+1};

 }

 void personnage::deplacerVersGauche()
 {
   d_caseLogee=new position{d_caseLogee->numLigne(),d_caseLogee->numColonne()-1};

}

position*personnage::caseLogee()const
{
    return d_caseLogee;
}



void personnage::affiche(std::ostream&ost)const{

     ost<<"["<<d_nom<<",";
    d_caseLogee->afficherPosition(ost);
     ost<<","<<d_dureeVie<<"]";
}

std::ostream&operator<<(std::ostream&ost,personnage&pers)
{
    pers.sauver(ost);
    return ost;
}



