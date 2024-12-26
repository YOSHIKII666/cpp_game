//
// Created by 王少泽 on 2024/12/26.
//

#ifndef PLAYER_H
#define PLAYER_H

#include "Sprite.h"
#include "Vector2.h"
#include<vector>
#include <string>


//定义马里奥的各种角色属性
class Player {
private:
    std::vector<Sprite*> sMario;
    int iSpriteID;
    unsigned int iMoveAnimationTime;

    CIMG* tMarioLVLUP;

    float fXPos,fYPos;
    int iNumOfLives;

    bool unKillAble;
    bool starEffect;

    int inLevelDownAnimation;
    int inLevelDownAnimationFrameID;

    unsigned int iScore;
    unsigned int iCoins;

    int unKillAbleTimeFrameID;
    int unKillAbleFrameID;

    int iComboPoints,iFrameID;

    int powerLVL;
    bool inLevelAnimation;
    bool inLevelAnimationType;
    int inLevelAnimationFrameID;

    bool moveDirection;
    bool bMove;
    bool changeMoveDirection;
    bool newMoveDirection;

    static const int maxMove=4;
    int currentMaxMove;
    int moveSpeed;
    unsigned int iTimepassed;

    bool bSquat;//判断角色是否蹲下

    int onPlatformID;

    //跳跃，移动
    int jumpState;
    float startJumpSpeed;
    float currentJumpSpeed;
    float jumpDistance;
    float currentJumpDistance;

    float currentFallingSpeed;
    bool springJump; //借助弹簧跳跃的情况

    //跳跃，泡泡
    unsigned int nextBubbleTime;
    int nextFallFrameID;

    const static int iSmallX=24;
    const static int iSmallY=32;

    const static int iBigX=32;
    const static int iBigY=64;

    int nextFireBallFrameID;


    void movePlayer();
    bool checkCollisionBot(int nX,int nY);//是否和机器人发生碰撞
    bool checkCollisionCenter(int nX,int nY);

    Vector2* getBlockLB(float nX,float nY);//返回一个二维坐标系
    Vector2* getBlockRB(float nX,float nY);

    Vector2* getBlockLC(float nX,float nY);//返回一个二维坐标系
    Vector2* getBlockRC(float nX,float nY);

    Vector2* getBlockLT(float nX,float nY);//返回一个二维坐标系
    Vector2* getBlockRT(float nX,float nY);

public:
    //角色的各种行为（方法定义）
    Player(SDL_Renderer* rR,float fXPos,float fYPos);
    ~Player(void);

    void Draw(SDL_Renderer* rR);
    void Update();

    void updateXPos(int iN);
    void updateYPos(int iN);

    void powerUPAnimation();

    //移动
    void moveAnimation();
    void swimingAnimation();

    void startmove();
    void resetMove();
    void stopMove();
    void setMoveDirection(bool moveDirection);
    bool getChangeMoveDirection();
    bool setChangeMoveDirection();

    void startRun();
    void resetRun();
    void createFireBall();

    //跳跃
    void jump();
    void startJump(int iH);
    void resetJump();

    void setMarioSpriteID(int iID);
    int getMarioSpriteID();

    int getHitBoxX();
    int getHitBoxY();


    //setter getter
    bool getInLevelAnimation();
    void setInLevelAnimation(bool inLevelAnimation);

    int getXPos();
    void setXPos(float fXPos);
    int getYPos();
    void setYPos(float fYPos);

    int getPowerLVL();
    void setPowerLVL(int powerLVL);
    void resetPowerLVL();

    bool getUnkillAble();

    int getNumOfLives();
    void setNumOfLives(int iNumOfLives);

    bool getStarEffect();
    void setStarEffect(bool starEffect);

    int getMoveSpeed();
    bool getMove();
    bool getMoveDirection();
    void setNextFallFrameID(int nextFallFrameID);
    void setCurrentJumpSpeed(float currentJumpSpeed);
    void setMoveSpeed(int moveSpeed);

    int getJumpState();

    bool getSquat();
    void setSquat(bool bSquat);

    CIMG* getMarioLVLUP();
    Sprite* getMarioSprite();

    void addCoin();

    unsigned int getScore();
    void setScore(unsigned int iScore);
    void addComboPoints();
    int getComboPoints();
    unsigned int getCoins();
    void setCoins(unsigned int iCoins);

    void setSpringJump(bool springJump);
};



#endif //PLAYER_H
