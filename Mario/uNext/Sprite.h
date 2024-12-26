//
// Created by 王少泽 on 2024/12/25.
//

#ifndef SPRITE_H
#define SPRITE_H
#include "IMG.h"
#include <vector>


//精灵图，一张大图里面包含多个小图，避免重复渲染
class Sprite {
private:
  std::vector<CIMG*> tSprite;
  std::vector<unsigned int> iDelay;

  bool bRotate;

  int iCurrentFrame;
  int iStartFrame;
  int iEndFrame;

  unsigned long lTimePassed;

public:
  Sprite(void);
  Sprite(SDL_Renderer* rR,std::vector<std::string> tSprite,std::vector<unsigned int> iDelay,bool bRotate);
  ~Sprite();

  void Update();
  CIMG* getTexture();
  CIMG* getTexcure(int iID);
};



#endif //SPRITE_H
