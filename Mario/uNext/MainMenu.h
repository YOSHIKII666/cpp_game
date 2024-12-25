//
// Created by 王少泽 on 2024/12/25.
//

#ifndef MAINMENU_H
#define MAINMENU_H

#include "Menu.h"

class MainMenu:public Menu {
private:
    bool selectWorld;
    int activeWorldID,activeSecondWorldID;

    SDL_Rect rSelectWorld;

public:
    MainMenu(void);
    ~MainMenu(void);

    void Update();
    void Draw(SDL_Renderer *rR);

    void enter();
    void escape();

    void updateActivateButton(int iDir);
};



#endif //MAINMENU_H
