//
// Created by 王少泽 on 2024/12/25.
//

#include "Menu.h"
#include "CFG.h"

Menu::Menu(void) {
    this->activeMenuOption=0;
}

Menu::~Menu(void) {

}


void Menu::update() {

}

void Menu::Draw(SDL_Renderer *rR) {
    for(unsigned int i=0;i<lMO.size();i++) {
        CCFG::getText()->Draw(rR,lMO[i]->getText(),lMO[i]->getXPos(),lMO[i]->getYPos());
    }
    CCFG::getMM()->getActiveOption()->Draw(rR,lMO[activeMenuOption]->getXPos()-32,lMO[activeMenuOption]->getYPos());
}

void Menu::updateActivateButton(int iDir) {
    switch(iDir) {
        case 0://向上滚动菜单
            if (activeMenuOption - 1 < 0) {
                activeMenuOption = numOfMenuOptions - 1;//实现循环
            } else {
                --activeMenuOption;
            }
        break;
        case 2://向下滚动菜单
            if (activeMenuOption + 1 >= numOfMenuOptions) { //实现循环
                activeMenuOption = 0;
            } else {
                ++activeMenuOption;
            }
        break;
        default:
            break;
    }
}









