#ifndef TERRAIN_H
#define TERRAIN_H
#include"joueur.h"
#include"robot.h"
#include"debris.h"
#include "time.h"
#include <iostream>
#include <fstream>
#include <vector>
#include<iostream>

class terrain
{
    public:
    // terrain();
     terrain(int nbligne, int nbcolonne,int nbRobtExpert,int nbvieuxRobt,int nbDebris);

     int nbColonne()const;
     int nbLigne()const;
     //std::vector<std::vector<int>>& grille()const;

     void lireTerrain(const std::string&nomFichier);
     void sauverTerrain(const std::string&nomFichier);
     void changerTailleGrille(int nbligne, int nbcolonne);
     void changerNb(int nbdebris,int nbRobot1G,int nbRobot2G);
    //c'est au joueur de changer sa position void changerPosJoueur(int numcol, int numligne);
     void InitialisationGrille(int nbdebris, int nbRobot1G, int nbRobot2G);
   //idem  void ChangerJoueur(joueur&j);
     bool terrainOk();
     bool JoueurAPerdu();
      /* pour verifier si la position es t dans le terrain*/
     bool estDansTerrain(int ligne,int col)const;
     void afficheGrille(); // fonction test
     void afficherPositionJoueur(); //fonction test


     void deplacerpersonnage();//cette methode va se charger de deplacer les joueur et robot en meme temps
                               //car on va appeler icic la methode virtuelle deplacer(int direction)








    private :
    //int d_nbdebris;
      int d_nbligne;
     int d_nbcolonne;
     std::vector<std::vector<int>> d_grille; // 0 = vide, 1 = joueur, 2 = robot1G, 3 = robot2G, 4 = debris
      joueur d_joueur;
    //int d_nbrobotFirstG;
     //int d_nbrobotSecondG;
       //mettre a la place un vecteurde robot*/

     //std::vector<robot*> d_robot1G;
     std::vector<robot*>d_robot;
     std::vector<debris> d_debris;
    // std::vector<robot*> d_robot2G;




};

#endif // TERRAIN_H
