//
// Created by Лаэтин  Андрей on 09.04.2022.
//

#include "MainButtons.h"

Play::Play(std::string &name, Rect &rct, TTF_Font* font, SDL_Renderer *render)
:Button(name, rct, font, render){}
Play::~Play() = default;
void Play::action(short &curr_menu, SDL_Renderer *rend) {
    std::cout<<"it's play"<<std::endl;
}

Settings::Settings(std::string &name, Rect &rct, TTF_Font* font, SDL_Renderer *render)
        :Button(name, rct, font, render){}
Settings::~Settings() = default;
void Settings::action(short &curr_menu, SDL_Renderer *rend) {
    curr_menu = 1;
}

Exit::Exit(std::string &name, Rect &rct, TTF_Font* font, SDL_Renderer *render)
        :Button(name, rct, font, render){}


void Exit::action(short &curr_menu, SDL_Renderer *rend) {
    curr_menu = 2;
}
Exit::~Exit() = default;
