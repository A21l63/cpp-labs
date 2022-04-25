//
// Created by Лаэтин  Андрей on 13.04.2022.
//

#include "Rectan.h"

Rect::Rect(int x, int y, int w, int h){
    this->x = x;
    this->y = y;
    this->w = w;
    this->h = h;
};
Rect::~Rect() = default;

int &Rect::getX(){
    return x;
}
int &Rect::getY(){
    return y;
};
int &Rect::getW(){
    return w;
};
int &Rect::getH(){
    return h;
};

void Rect::changeY(int y){
    this->y = y;
}

void Rect::changeH(int h){
    this->h = h;
}
