//
// Created by Лаэтин  Андрей on 09.04.2022.
//

#ifndef CPP_LAB3_POPBUTTONS_H
#define CPP_LAB3_POPBUTTONS_H

#include "Button.h"

class Pop_1: public Button{
public:
    Pop_1(std::string &name, Rect &rct, TTF_Font* Sans, SDL_Renderer *render);
    ~Pop_1();

    void action(short &curr_menu, SDL_Renderer *rend) override;
};

class Pop_2: public Button{
public:
    Pop_2(std::string &name, Rect &rct, TTF_Font* Sans, SDL_Renderer *render);
    ~Pop_2();

    void action(short &curr_menu, SDL_Renderer *rend) override;
};

class Pop_3: public Button{
public:
    Pop_3(std::string &name, Rect &rct, TTF_Font* Sans, SDL_Renderer *render);
    ~Pop_3();

    void action(short &curr_menu, SDL_Renderer *rend) override;
};

class Back: public Button{
public:
    Back(std::string &name, Rect &rct, TTF_Font* Sans, SDL_Renderer *render);
    ~Back();

    void action(short &curr_menu, SDL_Renderer *rend) override;
};

#endif //CPP_LAB3_POPBUTTONS_H
