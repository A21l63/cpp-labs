//
// Created by Лаэтин  Андрей on 05.04.2022.
//

#include "flying_rect.h"

void Rectn::cutSize(){ // cutSize

    if (check%2 != direction%2) {
        queueSeg.clear();
        check = direction;
    }
    else{
        for (auto &segm: queueSeg) {
            if (direction == 1 || direction == 3) {
                if (segm.lenX() <= 5) {
                    queueSeg.pop_front();
                }
                segm.cutX();
            }
            if (direction == 0 || direction == 2) {
                if (segm.lenY() <= 5) //
                {
                    queueSeg.pop_front();
                }
                segm.cutY();
            }
        }
    }
}

void Rectn::reverse(){
    float rev = rect.h;
    rect.h = rect.w;
    rect.w = rev;
}

void Rectn::CheckBound(){
    if (rect.x < 0){
        rect.x = 0;
    }
    if (rect.x + rect.w > WIDTH){
        rect.x = WIDTH - rect.w;
    }
    if (rect.y < 0){
        rect.y = 0;
    }
    if (rect.y + rect.h > HEIGHT){
        rect.y = HEIGHT - rect.h;
    }
}

Rectn::Rectn(float x, float y, float h, float w){
    this->rect.x = x;
    this->rect.y = y;
    this->rect.h = h;
    this->rect.w = w;
    direction = 0;
    check = 0;
    /*this->colour[0] = 255;
    this->colour[1] = 0;
    this->colour[2] = 0;*/
}

Rectn::~Rectn() = default;

short Rectn::checkDir(short &check, short dir) {
    if (check%2 == dir%2)
        return 0;
    else
        return 1;
}

void Rectn::moving(SDL_Event &e) {
    if (e.key.keysym.sym == SDLK_LEFT){
        direction = 2;
        if (checkDir(check, direction))
        {
            reverse();
            check = direction;
        }
        rect.x -= velocity;
    }
    if (e.key.keysym.sym == SDLK_DOWN){
        direction = 3;
        if (checkDir(check, direction))
        {
            reverse();
            check = direction;
        }
        rect.y += velocity;
    }
    if (e.key.keysym.sym == SDLK_RIGHT){
        direction = 0;
        if (checkDir(check, direction))
        {
            reverse();
            check = direction;
        }
        rect.x += velocity;
    }
    if (e.key.keysym.sym == SDLK_UP){
        direction = 1;
        if (checkDir(check, direction))
        {
            reverse();
            check = direction;
        }
        rect.y -= velocity;
    }
    Segment seg = Segment(direction,  rect.x,  rect.y, rect.h, rect.w);
    queueSeg.push_back(seg);
    CheckBound();
}

void Rectn::draw(SDL_Renderer *renderer) {
    SDL_RenderFillRectF(renderer, &rect);

    for(Segment elem:  queueSeg) {
        elem.draw(renderer);
    }
}

/*
int Rectn::getR(){
    return this->colour[0];
};
int Rectn::getG(){
    return this->colour[1];
};
int Rectn::getB(){
    return this->colour[2];
};

void Rectn::difR(int r){
     this->colour[0] = r;
};
void Rectn::difG(int g){
    this->colour[1] = g;
};
void Rectn::difB(int b){
    this->colour[2] = b;
};
*/

