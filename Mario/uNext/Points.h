//
// Created by 王少泽 on 2024/12/24.
//

#ifndef POINTS_H
#define POINTS_H

#include "header.h"

class Points {
private:
    int iXpos,iYpos,iYLEFT;

    std::string sText;

    int iW,iH;

    bool bDelete;

public:
    Points(int iXpos,int iYpos,std::string sText);

    Points(int iXpos,int iYpos,std::string sText,int iW,int iH);

    ~Points(void);

    void Update();
    void Draw(SDL_Renderer* rR);
    bool getDelete();
};



#endif //POINTS_H
