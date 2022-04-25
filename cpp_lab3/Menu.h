//
// Created by Лаэтин  Андрей on 11.04.2022.
//

#ifndef CPP_LAB3_MENU_H
#define CPP_LAB3_MENU_H
#include "includeLibs.h"
#include "Button.h"

class Menu {
private:
    std::vector<std::shared_ptr<Button>> included;
public:
    explicit Menu(std::vector<std::shared_ptr<Button>> &buttons);
    ~Menu();

    void draw(int &x, int &y, SDL_Renderer *render, SDL_Event &event, short &a);
};

class menuPainter{
private:
    std::vector<Menu> menu;
    short curr_menu;    //какое меню сейчас отрисовываем
public:
    explicit menuPainter(std::vector<Menu> &vect);

    void paint(int &x, int &y, SDL_Renderer *render, SDL_Event &event);
    short& getCurr();
};
#endif //CPP_LAB3_MENU_H
