//
// Created by 王少泽 on 2024/12/24.
//

#ifndef MUSIC_H
#define MUSIC_H

#include "SDL_mixer.h"
#include <string>
#include <vector>

class Music {
private:
    std::vector<Mix_Music*> vMusic;
    std::vector<Mix_Chunk*> vChunk;

    int iVolume;
public:
    Music(void);
    ~Music(void);

    bool musicStopped;
    enum eMusic { //场景音乐的枚举类
        mNOTHING,
        mOVERWORLD,
        mOVERWORLDFAST,
        mUNDERWORLD,
        mUNDERWORLDFAST,
        mUNDERWATER,
        mUNDERWATERFAST,
        mCASTLE,
        mCASTLEFAST,
        mLOWTIME,
        mSTAR,
        mSTARFAST,
        mSCORERING,
    };

    eMusic currentMusic;

    enum eChunk {   //游戏角色音效的枚举类
        cCOIN,
        cBLOCKBREAK,
        cBLOCKHIT,
        cBOOM,
        cBOWSERFALL,
        cBRIDGEBREAK,
        cBULLETBILL,
        cDEATH,
        cFIRE,
        cFIREBALL,
        cGAMEOVER,
        cINTERMISSION,
        cJUMP,
        cJUMPBIG,
        cLEVELEND,
        cLOWTIME,
        cMUSHROOMAPPER,
        cMUSHROOMMEAT,
        cONEUP,
        cPASUE,
        cPIPE,
        cRAINBOOM,
        cSHOT,
        cSHRINK,
        cSTOMP,
        cSWIM,
        cVINE,
        cCASTLEEND,
        cPRINCESSMUSIC,
    };


    void changeMusic(bool musicByLevel,bool forceChange);

    void playMusic();
    void playMusic(eMusic musicID);
    void StopMusic();
    void PauseMusic();

    void PlayChunk(eChunk chunkID);

    Mix_Music* loadMusic(std::string fileName);
    Mix_Chunk* loadChunk(std::string fileName);

    int getVolume();
    void setVolume(int iVolume);
};



#endif //MUSIC_H
