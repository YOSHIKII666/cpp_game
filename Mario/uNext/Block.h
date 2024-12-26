//
// Created by 王少泽 on 2024/12/26.
//

#ifndef BLOCK_H
#define BLOCK_H

#include "IMG.h"
#include "Sprite.h"


class Block {
private:
    Sprite* sSprite;
    int iBlockID;

    bool bCollision; //是否发生碰撞
    bool bDeath; //这个block是否被Mario顶掉
    bool bUse; //道具是否被使用
    bool bVisible;  //是否可见

public:
    Block(void);
    Block(int iBlockID,Sprite* sSprite,bool bCollision,bool bDeath,bool bUse,bool bVisiable);
    ~Block(void);

    void Draw(SDL_Renderer* rR,int iOffsetX,int iOffsetY);

    int getBlockID();
    void setBlockID(int iID);

    Sprite* getSprite();
    bool getCollision();
    bool getDeath();
    bool getUse();
    bool getVisible();
};

#endif //BLOCK_H
