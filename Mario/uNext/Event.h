//
// Created by 王少泽 on 2024/12/27.
//

#ifndef EVENT_H
#define EVENT_H
#include <SDL_render.h>
#include <vector>


class Event {
private:
    bool bState;
    unsigned int stepID;

public:
    Event(void);
    ~Event(void);

    enum animationType {
        eTOP,
        eRIGHT,
        eRIGHTEND,
        eBOT,
        eLEFT,
        eBOTRIGHTEND,
        eENDBOT1,
        eENDBOT2,
        eENDPOINTS,
        eDEATHNOTHING,
        eDEATHTOP,
        eDEATHBOT,
        eNOTHING,
        ePLAYPIPERIGHT,
        ePLAYPIPETOP,
        eLOADINGMENU,
        eGAMEOVER,
        eBOSSEND1,
        eBOSSEND2,
        eBOSSEND3,
        eBOSSEND4,
        eBOTRIGHTBOSS,
        eBOSSTEXT1,
        eBOSSTEXT2,
        eENDGAMEBOSSTEXT1,
        eENDGAMEBOSSTEXT2,
        eMARIOSPRITE1,
        eVINE1,
        eVINE2,
        eVINESPAWN,
    };

    std::vector<animationType> vOLDDir;
    std::vector<int> vOLDLength;

    std::vector<animationType> vNEWDir;
    std::vector<int> vNEWLength;

    std::vector<int> reDrawX;
    std::vector<int> reDrawY;

    enum eventType {
        eNormal,
        eEnd,
        eBossEnd,
    };

    eventType eventTypeID;

    void Normal();
    void end();

    int iSpeed;

    void resetData();

    int newLevelType;
    int newMapXPos;
    int newPlayerXPos;
    int newPlayerYPos;
    bool newMoveMap;

    unsigned int iTime;
    int iDelay;

    int newCurrentLeve;
    bool inEvent;
    bool newUnderWater;

    bool endGame;

    void Draw(SDL_Renderer* rR);
    void Animation();
    void newLevel();

    void resertRedraw();
};

#endif //EVENT_H
