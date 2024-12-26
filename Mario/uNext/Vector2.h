//
// Created by 王少泽 on 2024/12/26.
//

#ifndef VECTOR2_H
#define VECTOR2_H



class Vector2 {
private:
    int X,Y;
public:
    Vector2(void);
    Vector2(int X,int Y);
    ~Vector2(void);

    int getX();
    void setX(int X);
    int getY();
    void setY(int Y);
};



#endif //VECTOR2_H
