//
// Created by 王少泽 on 2024/12/27.
//

#ifndef PIPE_H
#define PIPE_H



class Pipe {
private:

  int iType;

  int iLX,iLY;

  int newPlayerPosX,newPlayerPosY;

  int newCurrentLevel;
  int newLevelType;
  int newMoveMap;
  bool newUnderWater;

  int iDelay;

  int iSpeed;

public:
  Pipe(int iType, int iLX, int iLY, int iRX, int iRY, int newPlayerPosX, int newPlayerPosY, int newCurrentLevel, int newLevelType, bool newMoveMap, int iDelay, int iSpeed, bool underWater);
  ~Pipe(void);

  void checkUse();
  void setEvent();
};



#endif //PIPE_H
