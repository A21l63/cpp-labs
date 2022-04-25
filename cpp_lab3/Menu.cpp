//
// Created by Лаэтин  Андрей on 11.04.2022.
//
#include "Menu.h"


Menu::Menu(std::vector<std::shared_ptr<Button>> &buttons) {
    included = buttons;
}
Menu::~Menu() = default;

void Menu::draw(int &x, int &y, SDL_Renderer *render, SDL_Event &event, short &curr_menu) {
    for (auto elem: included) {
        elem->isSelected(x, y, render, event, curr_menu);
    }
}

menuPainter::menuPainter(std::vector<Menu> &vect){
    this->menu = vect;
    curr_menu = 0;
}
//SDL_MOUSEBUTTONDOWN
void menuPainter::paint(int &x, int &y, SDL_Renderer *render, SDL_Event &event){
    if (curr_menu == 0) {
        menu[0].draw(x, y, render,  event, curr_menu);
    }
    else if (curr_menu == 1) {
        menu[1].draw(x, y, render, event, curr_menu);
    }
    else if(curr_menu == 2){
        menu[2].draw(x, y, render, event, curr_menu);
    } else
    {
        std::cout<<"Bye"<<std::endl;
    }
}


short &menuPainter::getCurr() {
    return curr_menu;
}