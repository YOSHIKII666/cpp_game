//
// Created by 王少泽 on 2024/12/26.
//

#ifndef MAPLEVEL_H
#define MAPLEVEL_H



class MapLevel {
private:
    int iBlockID;
    bool spwanMushroom;//这个block被顶后会不会出现蘑菇
    bool powerUP;//这个block被顶后是否会出现强力道具
    bool spawnStar;//block被顶后会不会出现星星
    int iNumOfUse; //记录block可以被触发的次数

    bool blockAnimation;//记录这个block是否要播放动画
    int iYPos;
    int bYDirection;//block移动的方向（升降台）

public:
    MapLevel(void);
    MapLevel(int iBlockID);
    ~MapLevel(void);

    void startBlockAnimation();

    int updateYPos();

    int getBlockID();
    void setBlockID(int iBlockID);

    int getYPos();

    int getNumOfUse();
    void setNumOfUse(int iNumOfUse);

    bool getSpawnMushroom();
    void setSpawnMushroom(bool spawnMushroom);
    bool getPowerUP();
    void setPowerUP(bool powerUP);
    bool getSpawnStar();
    void setSpawnStar(bool spawnStar);
};

#endif //MAPLEVEL_H
