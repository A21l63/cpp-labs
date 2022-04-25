//
// Created by Лаэтин  Андрей on 06.04.2022.
//

#include "Point.h"

Point::Point(float x, float y) {
    this->x = x;
    this->y = y;
}
Point::Point() {
    x = 0;
    y = 0;
}

Point::~Point() = default;

void Point::setX(float d) {
    x = d;
}
void Point::setY(float d) {
    y = d;
}

float Point::getX() const{
    return x;
}

float Point::getY() const{
    return y;
}