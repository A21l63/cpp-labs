//
// Created by Лаэтин  Андрей on 09.04.2022.
//

#ifndef CPP_LAB3_BUTTON_H
#define CPP_LAB3_BUTTON_H
#include "includeLibs.h"
#include "Rectan.h"
class Button {
protected:
    SDL_Texture *texture_inactive;
    SDL_Texture *texture_active;
    SDL_Rect rect;
    std::string name;

public:
    //Button();
    Button(std::string &name, Rect &rct, TTF_Font* font, SDL_Renderer *render);
    //Button (const Button & object);
    ~Button();


    void isSelected(int &x, int &y, SDL_Renderer *render, SDL_Event &event, short &a);

    void drawInact(SDL_Renderer *renderer);
    void drawAct(SDL_Renderer *renderer);

    virtual void action(short &a, SDL_Renderer *rend);
};




#endif //CPP_LAB3_BUTTON_H
