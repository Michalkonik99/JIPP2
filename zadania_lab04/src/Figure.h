//
// Created by michal on 11/1/21.
//

#ifndef HOMEWORK_LAB04_FIGURE_H
#define HOMEWORK_LAB04_FIGURE_H

#include <iostream>
#include "Point.h"
#include "main.h"

class Figure {
public:
    int vertex_number;
    Point* vertexes;
    Figure(int);
    ~Figure();
    void set_vertexes();
    void get_vertexes();
};


#endif //HOMEWORK_LAB04_FIGURE_H
