#include "Rectangle.h"

Rectangle::Rectangle(string Name, string Color, double A, double B) : Figure(Name, Color){
    a = A;
    b = B;
}

double Rectangle::getArea() {
    return a * b;
}
