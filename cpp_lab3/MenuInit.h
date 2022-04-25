//
// Created by Лаэтин  Андрей on 14.04.2022.
//

#ifndef CPP_LAB3_MENUINIT_H
#define CPP_LAB3_MENUINIT_H

#include "includeLibs.h"
#include "Menu.h"
#include "Button.h"
#include "Rectan.h"
#include "MainButtons.h"
#include "PopButtons.h"
#include "DialogButtons.h"

class MenuInit {
public:
    static  std::vector<Menu> menuInit(std::vector<std::vector<std::string>> &mainBut,
                                      std::vector<std::vector<std::string>> &popBut, std::vector<std::string> &dial,
                                      TTF_Font* font, SDL_Renderer *render);
};


#endif //CPP_LAB3_MENUINIT_H
