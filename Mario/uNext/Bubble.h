//
// Created by 王少泽 on 2024/12/27.
//

#ifndef BUBBLE_H
#define BUBBLE_H
#include <SDL_render.h>
#include "IMG.h"


class Bubble {
private:
  int iXPos,iYPos;

  bool bDestoy;
  int iBlockID;

public:
  Bubble(int iXPos,int iYPos);
  ~Bubble(void);

  void Update();
  void Draw(SDL_Renderer* rR,CIMG* iIMG);

  int getBlockID();
  bool getDestroy();
};



#endif //BUBBLE_H
