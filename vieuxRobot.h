#ifndef VIEUXROBOT_H
#define VIEUXROBOT_H
#include<iostream>
#include"robot.h"
#include"joueur.h"
class position;
class vieuxRobot : public robot{
public:
    vieuxRobot();
    ~vieuxRobot();
    vieuxRobot(const std::string&nomRobot,position*p,joueur*jou);
    virtual void sauver(std::ostream&ost)const override;
    virtual void deplacer(int direction) override;





};
















#endif // VIEUXROBOT_H
