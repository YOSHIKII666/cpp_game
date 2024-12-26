//
// Created by 王少泽 on 2024/12/27.
//

#ifndef PLATFORM_H
#define PLATFORM_H
#include <SDL_render.h>


class Platform {
private:

    int iType;

    int iXStart,iXEnd,iYStart,iYEnd;

    float fXPos,fYPos;

    //true = RIGHT| TOP  false= LEFT | BOTTOM
    bool direction;

    int iSize;

    bool ON;

    int seesawPlatformID;

public:
    Platform(int iSize,int iType,int iXStart,int iXEnd,int iYStart,int iYEnd,float fXPos,float fYPos,bool direction,int seesawPlatformID=0);
    ~Platform(void);

    void Update();
    void Draw(SDL_Renderer* rR);

    void moveY();
    void moveYReverse();

    int getXPos();
    int getYPos();
    int getSize();

    float getMoveX();
    float getMoveY();

    int getTypeID();
    void setTypeID(int iType);
    void turnON();

};



#endif //PLATFORM_H
