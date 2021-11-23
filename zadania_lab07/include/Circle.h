#ifndef HOMEWORK_LAB07_CIRCLE_H
#define HOMEWORK_LAB07_CIRCLE_H

#include "Figure.h"
using namespace std;

class Circle : public Figure{
private:
    double radius;
public:
    Circle(string, string, double);

    double getArea();

    double getCircumference();
};

#endif //HOMEWORK_LAB07_CIRCLE_H
