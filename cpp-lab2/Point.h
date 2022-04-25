//
// Created by Лаэтин  Андрей on 06.04.2022.
//

#ifndef CPP_LAB2_POINT_H
#define CPP_LAB2_POINT_H

class Point{
private:
    float x, y; // Координаты

public:
    Point ();
    Point (float x, float y);
    ~Point();

    float  getX() const;
    float  getY() const;

    void setX(float d);
    void setY(float d);
};

#endif //CPP_LAB2_POINT_H
