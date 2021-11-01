#include "Cuboid.h"

Cuboid::Cuboid(a, b, c){
    this->a = a;
    this->b = b;
    this->c = c;
}

int Cuboid::surface_area(){
    int area = 2 * a * b;
    area += 2 * a * h;
    area += 2 * b * h;

    return area;
}

void Cuboid::set_value_a(int value_a){
    a = value_a;
}

int Cuboid::get_value_a(){
    return a;
}

void Cuboid::set_value_b(int value_b){
    b = value_b;
}

int Cuboid::get_value_b(){
    return b;
}

void Cuboid::set_value_h(int value_h){
    h = value_h;
}

int Cuboid::get_value_h(){
    return h;
}