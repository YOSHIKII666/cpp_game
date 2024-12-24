//
// Created by 王少泽 on 2024/12/24.
//

#include "IMG.h"

CIMG::CIMG() {

}

CIMG::CIMG(std::string fileName, SDL_Renderer *rR) {
    setIMG(fileName,rR);
}

void CIMG::Draw(SDL_Renderer *rR, int iXOffset, int iYOffset) {
    rRect.x=iXOffset;
    rRect.y=iYOffset;
    //render,texture,src,dest,src为null表示渲染一个整体，将img渲染到Rect上
    SDL_RenderCopy(rR,tIMG,NULL,&rRect);
}

void CIMG::Draw(SDL_Renderer *rR, int iXOffset, int iYOffset, bool bRoate) {
    rRect.x=iXOffset;
    rRect.y=iYOffset;

    if(!bRoate) {
        SDL_RenderCopy(rR,tIMG,NULL,&rRect);
    }else {
        //将 tIMG 纹理的全部内容，复制到由 rRect 定义的目标矩形区域上。在复制过程中，纹理会绕目标矩形的中心旋转 180 度，并进行垂直翻转。
        SDL_RenderCopyEx(rR,tIMG,NULL,&rRect,180.0,NULL,SDL_FLIP_VERTICAL);
    }
}

void CIMG::DrawVert(SDL_Renderer *rR, int iXOffset, int iYOffset) {
    rRect.x=iXOffset;
    rRect.y=iYOffset;
    SDL_RenderCopyEx(rR,tIMG,NULL,&rRect,180.0,NULL,SDL_FLIP_VERTICAL);
}

void CIMG::Draw(SDL_Renderer *rR, SDL_Rect rCrop, SDL_Rect rRect) {
    SDL_RenderCopy(rR,tIMG,&rCrop,&rRect);
}

void CIMG::setIMG(std::string fileName, SDL_Renderer *rR) {
    fileName = "files/images/" + fileName + ".bmp";
    SDL_Surface* loadedSurface=SDL_LoadBMP(fileName.c_str());
    //加载BMP并将其转换为SDL_Texture,并设置颜色和矩形大小
    SDL_SetColorKey(loadedSurface,SDL_TRUE,SDL_MapRGB(loadedSurface->format,255,0,255));

    tIMG=SDL_CreateTextureFromSurface(rR,loadedSurface);
    int iWidth,iHeight;
    SDL_QueryTexture(tIMG,NULL,NULL,&iWidth,&iHeight);//查询纹理的尺寸

    rRect.x=0;
    rRect.y=0;
    rRect.w=iWidth;
    rRect.h=iHeight;
    SDL_FreeSurface(loadedSurface);//释放surface对象
}







