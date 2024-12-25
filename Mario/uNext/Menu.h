//
// Created by 王少泽 on 2024/12/25.
//

#ifndef MENU_H
#define MENU_H

#include <SDL_render.h>

#include "Menu.h"
#include "MenuOption.h"
#include<vector>


class Menu {
public:
  Menu(void);
  ~Menu(void);

  std::vector<MenuOption*> lMO;

  int activeMenuOption;
  int numOfMenuOptions;

  virtual void update();
  virtual void Draw(SDL_Renderer* rR);

  //0,1,2,3  上右下左
  virtual void updateActivateButton(int iDir);
};



#endif //MENU_H
