//
// Created by 王少泽 on 2024/12/24.
//

#include "MenuOption.h"
/* ******************************************** */

MenuOption::MenuOption(std::string sText, int iXPos, int iYPos) {
    this->sText = sText;
    this->iXPos = iXPos;
    this->iYPos = iYPos;
}


MenuOption::~MenuOption(void) {

}

/* ******************************************** */

std::string MenuOption::getText() {
    return sText;
}

void MenuOption::setText(std::string sText) {
    this->sText = sText;
}

int MenuOption::getXPos() {
    return iXPos;
}

int MenuOption::getYPos() {
    return iYPos;
}