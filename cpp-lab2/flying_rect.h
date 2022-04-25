//
// Created by Лаэтин  Андрей on 05.04.2022.
//

#ifndef CPP_LAB2_FLYING_RECT_H
#define CPP_LAB2_FLYING_RECT_H

#include <SDL2/SDL.h>
#include <vector>
#include <iostream>
#include "Segment.h"
#include <deque>

const float WIDTH = 800.0;
const float HEIGHT = 640.0;

class Rectn {
private:
    const float velocity = 15.0; //Скорость прямоугольника

    short direction; //0 -вправо, 1 - вверх, 2 - влево, 3 - вниз;
    short check;//Проверка направления

    SDL_FRect rect; //Сам прямоугольник

    std::deque<Segment> queueSeg;

    //int colour[3]; //Пока что ненужная функциональность для меню

    void reverse(); //Обработка смены направления

    void CheckBound(); //Проверка на выход за границы

public:
    Rectn(float x, float y, float h, float w);
    ~Rectn();
    void cutSize(); //Уменьшение длины всех отрезков в vect
    void draw(SDL_Renderer *renderer);
    void moving(SDL_Event &e);
    short checkDir(short &check, short dir);

    //int getR(), getG(), getB(); //Пока что ненужная функциональность для меню
    //void difR(int r), difG(int g), difB(int b); //Она же
};

#endif //CPP_LAB2_FLYING_RECT_H