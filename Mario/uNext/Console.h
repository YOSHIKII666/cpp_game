//
// Created by 王少泽 on 2024/12/25.
//

#ifndef CONSOLE_H
#define CONSOLE_H

#include"header.h"
#include <vector>

class Console {
private:
    SDL_Rect rRect;

    std::vector<std::string> vPrint;

    unsigned int Max;

public:
    Console(void);
    ~Console(void);

    void Draw(SDL_Renderer* rR);
    void Print(int);
    void Print(std::string sPrint);
};



#endif //CONSOLE_H
