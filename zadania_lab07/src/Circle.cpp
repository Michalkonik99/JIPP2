#include "Circle.h"
#include <math.h>

Circle::Circle(string Name, string Color, double Radius) : Figure(Name, Color) {
    radius = Radius;
}

double Circle::getArea() {
    return M_PI * radius * radius;
}

double Circle::getCircumference(){
    return 2 * M_PI * radius;
}