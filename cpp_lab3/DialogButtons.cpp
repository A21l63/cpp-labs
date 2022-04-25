//
// Created by Лаэтин  Андрей on 12.04.2022.
//

#include "DialogButtons.h"

Positive::Positive(std::string &name, Rect &rct, TTF_Font* font, SDL_Renderer *render):Button(name, rct, font, render){};

Positive::~Positive() = default;

void Positive::action(short &curr_menu, SDL_Renderer *rend) {
    curr_menu = 3;
}

Negative::Negative(std::string &name, Rect &rct, TTF_Font* font, SDL_Renderer *render):Button(name, rct, font, render){};

Negative::~Negative() = default;

void Negative::action(short &curr_menu, SDL_Renderer *rend) {
    curr_menu = 0;
}