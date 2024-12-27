//
// Created by 王少泽 on 2024/12/27.
//

#ifndef MINION_H
#define MINION_H
#include <SDL_render.h>
#include "header.h"
#include "CFG.h"
#include "IMG.h"

//游戏中小怪物的单独实现类
class Minion {
public:
    Minion(void);
    ~Minion(void);

    int minionState;

    bool killOtherUnits;

    int iBlockID;
    float fXPos,fYPos;
    int iHitBoxX,iHitBoxY;
    bool minionSpawned;
    bool collisionOnlyWithPlayer;

    int deadTime;

    bool onAnotherMinion;

    bool moveDirection;
    int moveSpeed;

    int jumpState;

    float startJumpSpeed;
    float currentJumpSpeed;
    float jumpDistance;
    float currentJumpDistance;
    float currentFallingSpeed;

    virtual void Update();
    virtual void Draw(SDL_Renderer* rR,CIMG* iIMG);

    virtual void updateYPos(int iN);
    virtual void updateXPos();

    virtual bool updateMinion();
    virtual void minionPhysics();

    virtual void collisionEffect();

    virtual void minionDeathAnimation();

    void physicsState1();
    void physicsState2();

    // ----- COLLISON

    virtual void collisionWithPlayer(bool TOP);
    virtual void points(int iPoints);

    virtual void collisionWithAnotherUnit(); // -- PLAYERFIREBALL

    virtual void lockMinion();

    // ----- get & set -----
    int getBloockID();
    void setBlockID(int iBlockID);
    int getMinionState();

    virtual void setMinionState(int minionState);
    virtual bool getPowerUP();

    int getXPos();
    int getYPos();
    void setYPos(int iYPos);
};



#endif //MINION_H
