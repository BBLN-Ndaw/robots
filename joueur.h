#ifndef JOUEUR_H
#define JOUEUR_H
#include<iostream>
#include"personnage.h"
class joueur : public personnage{
public:
    joueur();
    joueur(const  std::string&nomjoueur,position*p);
    virtual void deplacer(int direction) override;
    void lirejoueur(std::istream&ist);
    virtual void sauver(std::ostream&ost)const override;
   const int score()const;
private:
    int d_score;
};









#endif // JOUEUR_H
