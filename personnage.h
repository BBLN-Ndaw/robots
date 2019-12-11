#ifndef PERSONNAGE_H
#define PERSONNAGE_H
#include<iostream>
#include"position.h"
//#include"terrain.h"
class personnage{
public:
    personnage(const std::string&nom,position*pos);
    personnage();
    virtual~personnage();
    virtual void sauver(std::ostream&ost)const=0;
    void affiche(std::ostream&ost)const;
    void deplacerVersGauche();
    void deplacerVersDroite();
    void deplacerVersHaut();
    void deplacerVersBas();
    void deplaceHautDroite();
    void deplaceHautGauche();
    void deplaceBasDroit();
    void deplaceBasGauche();
    virtual void deplacer(int direction)=0;
    std::string nom()const;
    //c'est seul le jour qui a un score
    position*caseLogee()const;

private:
    std::string d_nom;
     position*d_caseLogee;
 protected:
    int d_dureeVie;
};

std::ostream&operator<<(std::ostream&ost,personnage&pers);
















#endif // PERSONNAGE_H
