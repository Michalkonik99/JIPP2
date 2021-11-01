//
// Created by michal on 11/1/21.
//

#ifndef HOMEWORK_LAB04_POINT_H
#define HOMEWORK_LAB04_POINT_H


class Point {
public:
    Point(){};
    Point(int, int);
    double calculate_distance(Point);

    int axis_x, axis_y;
};


#endif //HOMEWORK_LAB04_POINT_H
