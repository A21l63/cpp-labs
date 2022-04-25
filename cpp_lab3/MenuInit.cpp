//
// Created by Лаэтин  Андрей on 14.04.2022.
//

#include "MenuInit.h"

std::vector<Menu> MenuInit::menuInit(std::vector<std::vector<std::string>> &mainBut,
                                    std::vector<std::vector<std::string>> &popBut, std::vector<std::string> &dial,
                                    TTF_Font* font, SDL_Renderer *render) {
    std::vector<Menu> stMenu;
    std::vector<std::shared_ptr<Button>> butVect;

    int num = (int) mainBut.size();
    int hght = (int) HEIGHT/(3*num);

    Rect rct = Rect((int) WIDTH*0.375, 2*hght , (int) WIDTH*0.25, hght);

    if(!mainBut.empty()){
        for(auto elem: mainBut){
            if (elem[0] == "PLAY"){
                auto pl =  std::shared_ptr<Button>(new Play(elem[1], rct , font, render));
                butVect.push_back(pl);
            }
            else if (elem[0] == "SETTINGS"){
                auto set =  std::shared_ptr<Button>(new Settings(elem[1], rct , font, render));
                butVect.push_back(set);
            }
            else{
                auto ex =  std::shared_ptr<Button>(new Exit(elem[1], rct , font, render));
                butVect.push_back(ex);
            }
            rct.changeY(rct.getY() + 2*hght);
        }
    }

    Menu main = Menu(butVect);
    stMenu.push_back(main);
    butVect.clear();

    num = (int) popBut.size();
    hght = (int) HEIGHT/(3*num);
    rct.changeH(hght);
    rct.changeY(2*hght);
    if(!popBut.empty()){
        for(auto elem: popBut){
            if (elem[0] == "POP1"){
                auto pop1 =  std::shared_ptr<Button>(new Pop_1(elem[1], rct , font, render));
                butVect.push_back(pop1);
            }
            else if (elem[0] == "POP2"){
                auto pop2 =  std::shared_ptr<Button>(new Pop_2(elem[1], rct , font, render));
                butVect.push_back(pop2);
            }
            else if (elem[0] == "POP3"){
                auto pop3 =  std::shared_ptr<Button>(new Pop_3(elem[1], rct , font, render));
                butVect.push_back(pop3);
            }
            else{
                auto back =  std::shared_ptr<Button>(new Back(elem[1], rct , font, render));
                butVect.push_back(back);
            }
            rct.changeY(rct.getY() + 2*hght);
        }
    }

    rct.changeY(0);
    Menu pop = Menu(butVect);
    stMenu.push_back(pop);

    butVect.clear();
    num = 2;
    hght = (int) HEIGHT/(3*num);
    rct.changeH(hght);
    rct.changeY(hght);

    if(!dial.empty()){
        std::basic_string pst = "YES";
        std::basic_string ngt = "NO";
        auto pos =  std::shared_ptr<Button>(new Positive(pst, rct , font, render));
        butVect.push_back(pos);
        rct.changeY(rct.getY() + 2*hght);
        auto neg = std::shared_ptr<Button>(new Negative(ngt, rct, font, render));
        butVect.push_back(neg);
    }
    Menu dlg = Menu(butVect);
    stMenu.push_back(dlg);

    return stMenu;
}