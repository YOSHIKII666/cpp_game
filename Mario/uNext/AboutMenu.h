//
// Created by 王少泽 on 2024/12/25.
//

#ifndef ABOUTMENU_H
#define ABOUTMENU_H

#include "Menu.h"

class AboutMenu:public Menu {
private:
    unsigned int Time;
    int cR,cG,cB,nR,nG,nB;
    int colorStepID,iColorID;

    bool moveDirection;//true=right,false=left;

    int iNumOfUnits;
public:
    AboutMenu(void);
    ~AboutMenu(void);

    void Update();
    void Draw(SDL_Renderer *rR);

    void enter();
    void launch();
    void reset();

    void nextColor();
    int getColorStep(int iOld,int iNew);

    void setBackgtoundColor(SDL_Renderer* rR);
    void updateTime();
};



#endif //ABOUTMENU_H
