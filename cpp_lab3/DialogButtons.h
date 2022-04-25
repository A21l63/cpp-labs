//
// Created by Лаэтин  Андрей on 12.04.2022.
//

#ifndef CPP_LAB3_DIALOGBUTTONS_H
#define CPP_LAB3_DIALOGBUTTONS_H

#include "Button.h"

class Positive: public Button{
public:
    Positive(std::string &name, Rect &rct, TTF_Font* Sans, SDL_Renderer *render);
    ~Positive();

    void action(short &curr_menu, SDL_Renderer *rend) override;
};

class Negative: public Button{
public:
    Negative(std::string &name, Rect &rct, TTF_Font* Sans, SDL_Renderer *render);
    ~Negative();

    void action(short &curr_menu, SDL_Renderer *rend) override;
};

#endif //CPP_LAB3_DIALOGBUTTONS_H
