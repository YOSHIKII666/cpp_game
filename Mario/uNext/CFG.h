//
// Created by 王少泽 on 2024/12/25.
//

#ifndef CFG_H
#define CFG_H

#include "Text.h"
#include "MenuManger.h"
#include "Music.h"


//游戏的配置文件
class CCFG {
private:
    static MenuManger* oMM;
    static Text* oText;
    static CIMG* tSMBLOGO;
    static Music* oMusic;

public:
    CCFG(void);
    ~CCFG(void);

    static int GAME_WIDTH,GAME_HEIGHT;
    //追踪按键状态的
    static bool keySpace;
    static int keyIDA, keyIDS, keyIDD, keyIDSpace, keyIDShift;

    static std::string getKeyString(int keyID);

    static CIMG* getSMBLOGO();

    static Text* getText();

    static MenuManger* getMM();
    static Music* getMusic();

    static bool canMoveBackward;
};



#endif //CFG_H
