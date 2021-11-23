#include <iostream>
#include "Figure.h"
#include "Circle.h"
#include "Rectangle.h"

using namespace std;

int main(){
    Circle circle = Circle("okrag", "bialy", 3.75);
    cout << "Pole okregu: " << circle.getArea() << endl;
    cout << "Obwod okregu: " << circle.getCircumference() << endl;

    //----------------- POLIMORFIZM -----------------

    Figure *figure_circle = new Circle("okrag - figura", "czerwony", 3);
    cout << "Pole okregu (polimorfizm): " << figure_circle->getArea() << endl;

    Figure *figure_rectangle = new Rectangle("prostokat - figura", "czarny", 4, 5);
    cout << "Pole prostokata (polimorfizm): " << figure_rectangle->getArea() << endl;

    return 0;
}