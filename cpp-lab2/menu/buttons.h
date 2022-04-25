//
// Created by Лаэтин  Андрей on 06.04.2022.
//

#ifndef CPP_LAB2_BUTTONS_H
#define CPP_LAB2_BUTTONS_H

#include <SDL2/SDL.h>
#include <vector>
#include <iostream>
#include <SDL_ttf.h>
#include "flying_bs.h"

class button {
public:
    button(int x, int y, int w, int h, std::string name);
    ~button();
    int getX();
    int getY();
    int getW();
    int getH();

    void setX(int x);
    void setY(int y);
    void setW(int w);
    void setH(int h);

    void check(SDL_Event *event);
    void drawButton();

private:
    int x, y, h, w;

    std::string name;
    virtual void action(){};
};

class Resume: public button{
    void action(bool &a);
};

class Settings: public button{
    void action(bool &a);
};

class Exit: public button{
    void action(bool &a);
};

class Colours: public button{
    void action(Rectn &rect, char colr);
};
#endif //CPP_LAB2_BUTTONS_H
