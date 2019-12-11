#include"debris.h"

debris::debris(const position&p,int niveauDanger):d_positionDebris{p},d_niveauDanger{niveauDanger} {}
bool debris::estDansDanger(personnage*p)const
{
    return (p->caseLogee()->numLigne()==d_positionDebris.numLigne()&&p->caseLogee()->numColonne()==d_positionDebris.numColonne() );

}
