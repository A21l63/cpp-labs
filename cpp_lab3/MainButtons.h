//
// Created by Лаэтин  Андрей on 09.04.2022.
//

#ifndef CPP_LAB3_MAINBUTTONS_H
#define CPP_LAB3_MAINBUTTONS_H
#include "includeLibs.h"
#include "Button.h"
#include "Menu.h"


class Play: public Button{
public:
    Play(std::string &name, Rect &rct, TTF_Font* Sans, SDL_Renderer *render);
    ~Play();

    void action(short &curr_menu, SDL_Renderer *rend) override;
};

class Settings: public Button{
public:
    Settings(std::string &name, Rect &rct, TTF_Font* Sans, SDL_Renderer *render);
    ~Settings();

    void action(short &curr_menu, SDL_Renderer *rend) override;
};

class Exit: public Button{
public:
    Exit(std::string &name, Rect &rct, TTF_Font* Sans, SDL_Renderer *render);
    ~Exit();

    void action(short &curr_menu, SDL_Renderer *rend) override;
};

#endif //CPP_LAB3_MAINBUTTONS_H
