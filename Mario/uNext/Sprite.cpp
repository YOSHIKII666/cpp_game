//
// Created by 王少泽 on 2024/12/25.
//

#include "Sprite.h"

Sprite::Sprite(void) {

}


Sprite::Sprite(SDL_Renderer *rR, std::vector<std::string> sSprite, std::vector<unsigned int> iDelay, bool bRotate) {
    this->iDelay=iDelay;
    this->bRotate=bRotate;

    this->iCurrentFrame=0;
    this->iStartFrame=0;
    this->iEndFrame=sSprite.size()-1;

    for(int i=0;i<this->iEndFrame+1;i++) {
        this->tSprite.push_back(new CIMG(sSprite[i],rR));
    }
    this->lTimePassed=0;
}

Sprite::~Sprite() {
    //delete每一张图片
    for(std::vector<CIMG*>::iterator i=tSprite.begin();i!=tSprite.end();i++) {
        delete(*i);
    }
}

//SDL_GetTicks，用于获取自SDL初始化以来的毫秒数
void Sprite::Update() {
    //检查从上次更新帧到现在已经经过的时间是否超过了当前帧需要显示的时间延迟。
    //如果超过了，就说明需要更新到下一帧。
    if(SDL_GetTicks()-iDelay[iCurrentFrame]>lTimePassed) {
        lTimePassed=SDL_GetTicks();//记录这一帧保持的时间
        if(iCurrentFrame==iEndFrame) {
            iCurrentFrame=0;
        }else {
            ++iCurrentFrame;
        }
    }
}

CIMG *Sprite::getTexture() {
    return tSprite[iCurrentFrame];
}

