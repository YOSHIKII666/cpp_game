//
// Created by 王少泽 on 2024/12/26.
//

#include "Vector2.h"

Vector2::Vector2(void) {

}

Vector2::Vector2(int X, int Y) {
    this->X=X;
    this->Y=Y;
}

Vector2::~Vector2() {

}


int Vector2::getX() {
    return X;
}

void Vector2::setX(int X) {
    this->X=X;
}


int Vector2::getY() {
    return Y;
}


void Vector2::setY(int Y) {
    this->Y=Y;
}



