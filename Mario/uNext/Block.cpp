//
// Created by 王少泽 on 2024/12/26.
//

#include "Block.h"

Block::Block(void) {

}

Block::Block(int iBlockID, Sprite *sSprite, bool bCollision, bool bDeath, bool bUse, bool bVisiable) {
    this->iBlockID=iBlockID;
    this->bCollision=bCollision;
    this->bDeath=bDeath;
    this->bUse=bUse;
    this->bVisible=bVisiable;
    this->sSprite=sSprite;
}

Block::~Block(void) {
    delete sSprite;//析构函数是释放精灵图
}

void Block::Draw(SDL_Renderer *rR, int iOffsetX, int iOffsetY) {
    //从精灵图中取出当前帧绘制渲染
    sSprite->getTexture()->Draw(rR,iOffsetX,iOffsetY);
}

int Block::getBlockID() {
    return iBlockID;
}

void Block::setBlockID(int iBlockID) {
    this->iBlockID = iBlockID;
}

Sprite* Block::getSprite() {
    return sSprite;
}

bool Block::getCollision() {
    return bCollision;
}

bool Block::getDeath() {
    return bDeath;
}

bool Block::getUse() {
    return bUse;
}

bool Block::getVisible() {
    return bVisible;
}





