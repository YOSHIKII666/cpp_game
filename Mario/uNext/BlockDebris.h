//
// Created by 王少泽 on 2024/12/27.
//

#ifndef BLOCKDEBRIS_H
#define BLOCKDEBRIS_H

#include "header.h"
#include"Vector2.h"

//物体破坏后产生的碎片
class BlockDebris {
private:
    int debrisState;

    Vector2* vPositionL;
    Vector2* vPosistonR;
    Vector2* vPositionL2;
    Vector2* bPositionR2;

    int iFrameID;

    float fSpeedX,fSpeedY;

    bool bRotate;

public:
    BlockDebris(int iXPos,int iYPos);
    ~BlockDebris(void);

    void Update();
    void Draw(SDL_Renderer* rR);

    int getDebrisState();
};

#endif //BLOCKDEBRIS_H
