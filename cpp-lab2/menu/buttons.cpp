//
// Created by Лаэтин  Андрей on 06.04.2022.
//
/*
#include "buttons.h"

button::button(int x, int y, int w, int h, std::string str) {
    this->x = x;
    this->y = y;
    this->h = h;
    this->w = w;
}
button::~button(){
};

int button::getX(){
    return x;
};
int button::getY(){
    return y;
};
int button::getH(){
    return h;
};
int button::getW(){
    return w;
};

void button::setX(int x){
    this->x = x;
};
void button::setY(int y){
    this->y = y;
};
void button::setH(int h){
    this->h = h;
};
void button::setW(int w){
    this->w = w;
};

void button::check(SDL_Event* event)
{
    int x, y;
    SDL_GetMouseState(&x, &y);
    switch(event->type){
        case SDL_MOUSEBUTTONDOWN:
            if(x >= this->x && x <= this->x + w && y >= this->y && y <= this->y + h){
                //меняю цвет на более светлый
            }
            break;
        case SDL_MOUSEMOTION:
            if(!(x >= this->x && x <= this->x + w && y >= this->y && y <= this->y + h)){
            }
            else
                //меняю цвет обратно
            break;
        case SDL_MOUSEBUTTONUP: if(x >= this->x && x <= this->x + w && y >= this->y && y <= this->y + h){
            bool a;//не нужно
            action();//делаю дело
            //меняю цвет обратно
            //мб меняю флаг
        }break;
    }
}
void button::drawButton() {

}

void Resume::action(bool &a) {
    a = 0;//меняю флаг -> меню уходит
}
void Settings::action(bool &a) {
    a = 0;//меняю флаг -> меню уходит
    //b = 1; открываю следующее меню
}
void Exit::action(bool &a) {
    a = 0;//меняю флаг -> меню уходит
    //Вот здесь появляется диалоговое окно
}

/*
void Colours::action(Rectn &rect, char colr) {
    switch (colr) {
        case 'r':
            rect.difR(255);
            rect.difG(0);
            rect.difB(0);
        case 'y':
            rect.difR(255);
            rect.difG(255);
            rect.difB(0);
        case 'b':
            rect.difR(0);
            rect.difG(0);
            rect.difB(255);
    }
}
*/