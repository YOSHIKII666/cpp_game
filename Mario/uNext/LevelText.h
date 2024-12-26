//
// Created by 王少泽 on 2024/12/26.
//

#ifndef LEVELTEXT_H
#define LEVELTEXT_H

#include<string>

//各个关卡的文本提示
class LevelText {
private:
    int iXpos,iYpos;

    std::string sText;
public:
    LevelText(int iXPos,int iYPos,std::string sText);
    ~LevelText(void);

    int getXPos();
    int getYpos();
    std::string getText();
    void setText(std::string sText);
};



#endif //LEVELTEXT_H
