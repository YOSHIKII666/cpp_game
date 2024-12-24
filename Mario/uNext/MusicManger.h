//
// Created by 王少泽 on 2024/12/24.
//

#pragma once

#ifndef MUSICMANAGER_H
#define MUSICMANAGER_H


#include "SDL.h"
#include "SDL_mixer.h"
#include <string>
#include <vector>
#include "MusicManger.h"


class MusicManger {
private:
  std::vector<Mix_Music*> vMusic;//vector中存储长时间的音效
  std::vector<Mix_Chunk*> vChunk;//vector中存储短时的音效

public:
  MusicManger(void);
  ~MusicManger(void);

  Mix_Music* loadMusic(std::string fileName);

  void playMusic();
};
#endif