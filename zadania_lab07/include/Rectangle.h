#ifndef HOMEWORK_LAB07_RECTANGLE_H
#define HOMEWORK_LAB07_RECTANGLE_H

#include <iostream>
#include "Figure.h"

using namespace std;

class Rectangle : public Figure{
private:
    double a, b;

public:
    Rectangle(string, string, double, double);

    double getArea();
};

#endif //HOMEWORK_LAB07_RECTANGLE_H
