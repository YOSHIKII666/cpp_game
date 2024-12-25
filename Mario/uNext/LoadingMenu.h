//
// Created by 王少泽 on 2024/12/25.
//

#ifndef LOADINGMENU_H
#define LOADINGMENU_H

#include "Menu.h"

class LoadingMenu:public Menu {
private:
    unsigned int iTime;
public:
    LoadingMenu(void);
    ~LoadingMenu(void);

    void Update();
    void Draw(SDL_Renderer *rR);

    void updateTime();
    bool loadingType; //true=loading false=game over
};



#endif //LOADINGMENU_H
