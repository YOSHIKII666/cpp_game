//
// Created by 王少泽 on 2024/12/24.
//

#include "MusicManger.h"

MusicManger::MusicManger(void) {

}

MusicManger::~MusicManger(void) {

}


void MusicManger::playMusic() {
    vMusic.push_back(Mix_LoadMUS("files/sounds/overworld.wav"));
    vMusic.push_back(Mix_LoadMUS("files/sounds/overworld.wav"));
    Mix_VolumeMusic(100);
    //Mix_OpenAudio 是 SDL_mixer 库中的函数，用于初始化音频系统。参数 44100 表示音频采样率（单位是赫兹），MIX_DEFAULT_FORMAT 表示使用默认的音频格式，2 表示声道数（这里是立体声），2048 表示音频缓冲区大小。
    Mix_OpenAudio(44100,MIX_DEFAULT_FORMAT,2,2048);
    Mix_PlayMusic(vMusic[0],-1);
}

Mix_Music* MusicManger::loadMusic(std::string fileName) {
    fileName = "files/sounds/" + fileName + ".wav";
    return Mix_LoadMUS("files/sounds/overworld.wav");
}