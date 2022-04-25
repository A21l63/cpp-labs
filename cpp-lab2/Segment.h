//
// Created by Лаэтин  Андрей on 06.04.2022.
//

#ifndef CPP_LAB2_SEGMENT_H
#define CPP_LAB2_SEGMENT_H
#include "Point.h"
#include <SDL2/SDL.h>

class Segment {
private:
    Point p1, p2;
    const float delta = 1.0;  //Скорость изменения длины

public:
    Segment (short direction, float x, float y, float h, float w);
    Segment ();
    ~Segment();

    void cutX(); //Функция укорачивания отрезка по x
    void cutY(); //Функция укорачивания отрезка по y

    float lenX(); //Длина по x
    float lenY(); //Длина по y

    void draw(SDL_Renderer *renderer);
};


#endif //CPP_LAB2_SEGMENT_H
