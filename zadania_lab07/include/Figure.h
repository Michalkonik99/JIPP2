#ifndef HOMEWORK_LAB07_FIGURE_H
#define HOMEWORK_LAB07_FIGURE_H

#include <iostream>
using namespace std;

class Figure{
protected:
    string name;
    string color;

public:
    Figure(string, string);

    virtual double getArea() = 0;
};

#endif //HOMEWORK_LAB07_FIGURE_H
