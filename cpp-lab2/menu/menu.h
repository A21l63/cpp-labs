//
// Created by Лаэтин  Андрей on 06.04.2022.
//

#ifndef CPP_LAB2_MENU_H
#define CPP_LAB2_MENU_H

#include <SDL2/SDL.h>
#include <vector>
#include <iostream>
#include "buttons.h"

class menu {

public:
    menu();
    virtual void menu_proc(SDL_Renderer &rend){};
};

class mainMenu: public menu{
    Resume res;
    Settings set;
    Exit ext;
public:
    void menu_proc(SDL_Renderer &rend);
};

class sec_menu: public menu{
    Colours red, green, yellow;
public:
    void menu_proc(SDL_Renderer &rend);
};

class dialogue: public menu{};


#endif //CPP_LAB2_MENU_H
