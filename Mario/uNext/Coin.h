//
// Created by 王少泽 on 2024/12/27.
//

#ifndef COIN_H
#define COIN_H
#include <SDL_render.h>


class Coin {
  private:
    int iXPos,iYPos;
    int iLEFT;

    int iSpriteID;
    int iStepID;

    bool bTOP;

    bool bDelete;

public:
    Coin(int iXPos,int iYPos);
    ~Coin(void);

    void Update();
    void Draw(SDL_Renderer* rR);

    int getXPos();
    int getYPos();
    bool getDelete();

};



#endif //COIN_H
