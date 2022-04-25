//
// Created by Лаэтин  Андрей on 13.04.2022.
//

#ifndef CPP_LAB3_RECTAN_H
#define CPP_LAB3_RECTAN_H


class Rect {
private:
    int x, y , w ,h;

public:
    Rect(int x, int y, int w, int h);
    ~Rect();

    int &getX();
    int &getY();
    int &getW();
    int &getH();

    void changeY(int y);
    void changeH(int h);
};


#endif //CPP_LAB3_RECTAN_H
