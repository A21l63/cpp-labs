//
// Created by Лаэтин  Андрей on 09.04.2022.
//

#include "Button.h"
//Button::Button() = default;
Button::Button(std::string &name, Rect &rct, TTF_Font* font, SDL_Renderer *render) {
    this->name = name;
    rect.x =  rct.getX();
    rect.y =  rct.getY();
    rect.w =  rct.getW();
    rect.h =  rct.getH();
    SDL_Color col_1 = {0,0,0};
    SDL_Color col_2 = {109,101,82};
    SDL_Surface *surface_inactive = TTF_RenderText_Solid(font, name.c_str(), col_1);
    SDL_Surface *surface_active = TTF_RenderText_Solid(font, name.c_str(), col_2);
    texture_inactive = SDL_CreateTextureFromSurface(render, surface_inactive);
    texture_active = SDL_CreateTextureFromSurface(render, surface_active);
}

//Button::Button(const Button &object) = default;

Button::~Button() = default;

void Button::action(short &a, SDL_Renderer *rend) {}

void Button::isSelected(int &x, int &y, SDL_Renderer *render, SDL_Event &event, short &a) {
    SDL_GetMouseState(&x, &y);
    if ((x >= rect.x) && (x <= rect.x + rect.w) && (y >= rect.y) && (y <= rect.y + rect.h)) {
        drawAct(render);
        if (event.type == SDL_MOUSEBUTTONDOWN)
        {
            action(a, render);
            SDL_RenderFillRect(render, &rect);
        }
    }
    else
    {
        drawInact(render);
    }
}

void Button::drawInact(SDL_Renderer *render) {
    SDL_RenderCopy(render, texture_inactive, NULL, &rect);
}

void Button::drawAct(SDL_Renderer *render) {
    SDL_RenderCopy(render, texture_active, NULL, &rect);
    //std::cout<<name<<std::endl;
}
