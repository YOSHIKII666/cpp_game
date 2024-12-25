//
// Created by 王少泽 on 2024/12/25.
//

#include "CFG.h"

CCFG::CCFG(void) {

}

CCFG::~CCFG(void) {
    delete oText;
    delete oMM;
    delete tSMBLOGO;
}


int CCFG::GAME_WIDTH=800;
int CCFG::GAME_HEIGHT=448;

Text* CCFG::oText=new Text();
CIMG* CCFG::tSMBLOGO=new CIMG();

MenuManger* CCFG::oMM=new MenuManger();
Music* CCFG::oMusic=new Music();

bool CCFG::keySpace=false;

int CCFG::keyIDA=0;
int CCFG::keyIDS=0;
int CCFG::keyIDD=0;
int CCFG::keyIDShift=0;
int CCFG::keyIDSpace=0;

bool CCFG::canMoveBackward=true;

Music* CCFG::getMusic() {
    return oMusic;
}

CIMG* CCFG::getSMBLOGO() {
    return tSMBLOGO;
}

MenuManger *CCFG::getMM() {
    return oMM;
}
Text *CCFG::getText() {
    return oText;
}

std::string CCFG::getKeyString(int keyID) {
    if(keyID>=97&&keyID<=122) {//ASCII编码,97为a,122为z
        return std::string(1,'0'+(keyID-32)-48); //转为大写字母
    }

    if(keyID>=48&&keyID<=57) {
        return std::string(1,'0'+(keyID-32)-48);//0--9转为数字
    }

    switch(keyID) {
        case SDLK_ESCAPE:
            return "ESCAPE";
        case SDLK_SPACE:
            return "SPACE";
        case SDLK_LSHIFT:
            return "LSHIFT";
        case SDLK_RSHIFT:
            return "RSHIFT";
        case SDLK_UP:
            return "UP";
        case SDLK_DOWN:
            return "DOWN";
        case SDLK_RIGHT:
            return "RIGHT";
        case SDLK_LEFT:
            return "LEFT";
        case SDLK_LCTRL:
            return "LCTRL";
        case SDLK_RCTRL:
            return "RCTRL";
    }

    return "NONE";
}




