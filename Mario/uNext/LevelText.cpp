//
// Created by 王少泽 on 2024/12/26.
//

#include "LevelText.h"

LevelText::LevelText(int iXPos, int iYPos, std::string sText) {
    this->iXpos=iXpos;
    this->iYpos=iYpos;
    this->sText=sText;
}

LevelText::~LevelText() {

}

int LevelText::getXPos() {
    return iXpos;
}

int LevelText::getYpos() {
    return iYpos;
}

std::string LevelText::getText() {
    return sText;
}


void LevelText::setText(std::string sText) {
    this->sText=sText;
}




