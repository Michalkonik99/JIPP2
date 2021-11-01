#include "Point.h"
#include <math.h>

Point::Point(int axis_x, int axis_y){
    this->axis_x = axis_x;
    this->axis_y = axis_y;
}

double Point::calculate_distance(Point final_point) {
    double abs_x = final_point.axis_x - this->axis_x;
    double abs_y = final_point.axis_y - this->axis_y;
    double result = abs_x * abs_x + abs_y * abs_y;

    return sqrt(result);
}