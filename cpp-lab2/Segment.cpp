//
// Created by Лаэтин  Андрей on 06.04.2022.
//

#include "Segment.h"
#include <cmath>

Segment::Segment(short direction, float x, float y, float h, float w) {
    p1 = Point(x, y);
    p2 = Point();
    if (direction == 0) {
        p2.setX(x);
        p2.setY(y + h);;
    } else if (direction == 1) {
        p1.setY(y + h);
        p2.setX(x + w);
        p2.setY(y + h);
    } else if (direction == 2) {
        p1.setX(x + w);
        p2.setX(x + w);
        p2.setY(y + h);
    } else if (direction == 3) {
        p2.setX(x + w);
        p2.setY(y);
    }
}


Segment::Segment() {
    p1 = Point();
    p2 = Point();
}

Segment::~Segment() = default;

float Segment::lenX() {
    return std::abs(p1.getX() - p2.getX());
}

float Segment::lenY() {
    return std::abs(p1.getY() - p2.getY());
}


void Segment::draw(SDL_Renderer *renderer) {
    SDL_RenderDrawLine(renderer, p1.getX(), p1.getY(),
                       p2.getX(), p2.getY());
}

void Segment::cutX() {
    p1.setX(p1.getX() + delta);
    p2.setX(p2.getX() - delta);
}

void Segment::cutY() {
    p1.setY(p1.getY() + delta);
    p2.setY(p2.getY() - delta);
}

