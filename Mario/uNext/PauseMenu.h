//
// Created by 王少泽 on 2024/12/25.
//

#ifndef PAUSEMENU_H
#define PAUSEMENU_H

#include "Menu.h"

class PauseMenu :Menu {
private:
    SDL_Rect rPause;
public:
    PauseMenu(void);
    ~PauseMenu(void);

    void Update();
    void Draw(SDL_Renderer *rR);

    void enter();
    void escape();

    void updateActicateButton(int iDir);
};



#endif //PAUSEMENU_H
