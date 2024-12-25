//
// Created by 王少泽 on 2024/12/25.
//

#include "Text.h"
#include "CFG.h"


Text::Text(void) {
    rCrop.x=0;
    rCrop.y=0;
    rCrop.w=8;
    rCrop.h=8;

    rRect.x=0;
    rRect.y=0;
    rRect.w=16;
    rRect.h=16;
    this->fontSize=16;
    this->extraLeft=0;
    this->nextExtraLeft=0;
}

Text::~Text(void) {
    delete FONT;
}

void Text::Draw(SDL_Renderer* rR,std::string sText,int X,int Y,int fontSize) {
    this->fontSize=fontSize;
    this->extraLeft=0;
    this->nextExtraLeft=0;
    for(unsigned int i=0;i<sText.size();i++) {
        rCrop.x=getPos(sText.at(i));  //字符显示在屏幕上的中心点
        rRect.x=X+fontSize*i-extraLeft;
        rRect.y=Y;
        rRect.w=fontSize;
        rRect.h=fontSize;
        FONT->Draw(rR,rCrop,rRect); //crop绘制到rect上
        extraLeft+=nextExtraLeft;
        nextExtraLeft=0;
    }
}

void Text::Draw(SDL_Renderer *rR, std::string sText, int X, int Y, int fontSize, int iR, int iG, int iB) {
    this->fontSize=fontSize;
    this->extraLeft=0;
    this->nextExtraLeft=0;

    for(unsigned int i=0;i<sText.size();i++) {
        SDL_SetTextureColorMod(FONT->getIMG(),iR,iG,iB);//给一个Texture对象渲染上色
        rCrop.x=getPos(sText.at(i));
        rRect.x=X+i*fontSize-extraLeft;
        rRect.y=Y;
        rRect.w=fontSize;
        rRect.y=fontSize;
        FONT->Draw(rR,rCrop,rRect);
        extraLeft+=nextExtraLeft;
        nextExtraLeft=0;
        SDL_SetTextureColorMod(FONT->getIMG(),255,255,255);
    }
}

void Text::DrawWS(SDL_Renderer* rR, std::string sText, int X, int Y,int iR, int iG, int iB, int fontSize) {
    this->fontSize = fontSize;
    this->extraLeft = 0;
    this->nextExtraLeft = 0;

    for(unsigned int i = 0; i < sText.size(); i++) {
        SDL_SetTextureColorMod(FONT->getIMG(), 0, 0, 0); //绘制阴影
        rCrop.x = getPos(sText.at(i));

        rRect.x = X + fontSize * i - extraLeft - 1; //-1，实现阴影效果
        rRect.y = Y + 1;        //+1，实现阴影效果
        rRect.w = fontSize;
        rRect.h = fontSize;
        FONT->Draw(rR, rCrop, rRect);
        SDL_SetTextureColorMod(FONT->getIMG(), 255, 255, 255); //绘制文本主体
        rRect.x = X + fontSize * i - extraLeft + 1; //阴影
        rRect.y = Y - 1; //阴影
        FONT->Draw(rR, rCrop, rRect);
        extraLeft += nextExtraLeft;
        nextExtraLeft = 0;
    }
}

void Text::Draw(SDL_Renderer *rR, std::string sText, int X, int Y, int iWidth, int iHeight) {
        for(unsigned int i=0;i<sText.size();i++) {
            rCrop.x=getPos(sText.at(i));
            rRect.x=i*iWidth+X-extraLeft;
            rRect.y=Y;
            rRect.w=iWidth;
            rRect.h=iHeight;
            FONT->Draw(rR,rCrop,rRect);
        }
}

//绘制在中心
void Text::DrawCenterX(SDL_Renderer *rR, std::string sText, int X, int Y, int fontSize, int iR, int iG, int iB) {
    int X=CCFG::GAME_WIDTH/2-getTextWidth(sText,fontSize)/2;
    Draw(rR,sText,X,Y,fontSize,iR,iG,iB);
}



//通过输入字符的编码返回一个位置
int Text::getPos(int iChar) {
    if(iChar>=43 && iChar<91) { //一些常见符号和大写字母
        checkExtra(iChar);
        return (iChar-43)*rCrop.w+rCrop.w;
    }

    if(iChar >= 118 && iChar < 123) { // v w x y z
        return (iChar - 70) * rCrop.w + rCrop.w;
    }

    return 0;
}

void Text::checkExtra(int iChar) {
    switch (iChar) {
        case 44: case 46: case 58: case 59: //，. : ;
            nextExtraLeft+=4*fontSize/rRect.w;
        break;
    }
}

//计算纯文本的宽度（不算, . : ;这四个符号）
int Text::getTextWidth(std::string sText, int fontSize) {
    int iOutput=sText.size()*fontSize;
    nextExtraLeft=0;

    for(unsigned int i=0;i<sText.size();i++) {
        checkExtra(sText.at(i));
    }

    iOutput-=nextExtraLeft;
    return iOutput;
}

void Text::setFont(SDL_Renderer *rR, std::string fileName) {
    FONT=new CIMG(fileName,rR);
}

