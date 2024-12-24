//
// Created by 王少泽 on 2024/12/24.
//

#ifndef MENUOPTION_H
#define MENUOPTION_H

#include <string>

class MenuOption {
private:
    std::string sText;
    int iXPos,iYPos;

public:
    MenuOption(std::string sText,int iXpos,int iYpos);
    ~MenuOption();

    std::string getText();
    void setText(std::string sText);

    int getXPos();
    int getYPos();
};



#endif //MENUOPTION_H
