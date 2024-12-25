//
// Created by 王少泽 on 2024/12/25.
//

#ifndef MENUMANGER_H
#define MENUMANGER_H

#include "IMG.h"
#include "MainMenu.h"
#include "LoadingMenu.h"
#include "AboutMenu.h"
#include "Console.h"
#include "OptionsMenu.h"
#include "PauseMenu.h"


class MenuManger {
private:
    CIMG* activeOption;

    MainMenu* oMainMenu;
    LoadingMenu*  oLoadingMenu;
    AboutMenu* oAboutMenu;
    OptionsMenu* oOptionsMenu;
    PauseMenu* oPauseMenu;

public:
    MenuManger(void);
    ~MenuManger(void);

    //游戏状态
    enum gameState{
        eMainMenu,
        eGameLoading,
        eGame,
        eAbout,
        eOptions,
        ePause,
    };

    gameState currentGameState;

    void Update();
    void Draw(SDL_Renderer* rR);

    void setBackgroundColor(SDL_Renderer* rR);

    void enter();
    void escape();
    void setKey(int keyID);
    void keyPressed(int iDir);

    void resetActiveOptionID(gameState ID);

    int getViewID();
    void setViewID(gameState viewID);

    CIMG* getActiveOption();
    void setActiveOption(SDL_Renderer* rR);

    LoadingMenu* getLoadingMenu();
    AboutMenu* getAboutMenu();

    //Console* getConsole();
    //LevelEditor* getLE();
    OptionsMenu* getOptions();
};



#endif //MENUMANGER_H
