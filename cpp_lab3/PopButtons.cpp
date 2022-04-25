//
// Created by Лаэтин  Андрей on 09.04.2022.
//

#include "PopButtons.h"
Pop_1::Pop_1(std::string &name, Rect &rct, TTF_Font* font, SDL_Renderer *render)
:Button(name, rct, font, render){}

Pop_1::~Pop_1() = default;

void Pop_1::action(short &curr_menu, SDL_Renderer *rend) {
    SDL_SetRenderDrawColor(rend, 250, 0, 0, 0);
}

Pop_2::Pop_2(std::string &name, Rect &rct, TTF_Font* font, SDL_Renderer *render)
:Button(name, rct, font, render){}

Pop_2::~Pop_2() = default;

void Pop_2::action(short &curr_menu, SDL_Renderer *rend) {
    SDL_SetRenderDrawColor(rend,0,250,0,0);
}

Pop_3::Pop_3(std::string &name, Rect &rct, TTF_Font* font, SDL_Renderer *render)
:Button(name, rct, font, render){}

Pop_3::~Pop_3() = default;

void Pop_3::action(short &curr_menu, SDL_Renderer *rend) {
    SDL_SetRenderDrawColor(rend,0,0,250,0);
}

Back::Back(std::string &name, Rect &rct, TTF_Font* font, SDL_Renderer *render)
        :Button(name, rct, font, render){}

Back::~Back() = default;

void Back::action(short &curr_menu, SDL_Renderer *rend) {
    curr_menu = 0;
}