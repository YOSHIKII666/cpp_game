//
// Created by 王少泽 on 2024/12/27.
//

#ifndef GOOMBAS_H
#define GOOMBAS_H

#include "Minion.h"
//棕色蘑菇那个敌人，继承小怪类
class Goombas : public Minion {
public:
    Goombas(int iX,int iY,int iBlockID,bool moveDirection);
    ~Goombas(void);

    void Update();
    void Draw(SDL_Renderer* rR,CIMG* iIMG);

    void collisionWithPlayer(bool TOP);

    void setMinionState(int minionState);
};



#endif //GOOMBAS_H
