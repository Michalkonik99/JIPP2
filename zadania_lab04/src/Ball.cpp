#include "Ball.h"
#include <math.h>

Ball::Ball(double radius){
    this-> radius = radius;
}

double Ball::volume(){
    return 4 * M_PI * radius * radius * radius / 3;
}

void Ball::set_radius(double radius){
    this->radius = radius;
}

double Ball::get_radius(){
    return radius;
}