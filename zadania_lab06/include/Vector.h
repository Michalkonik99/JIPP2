#ifndef HOMEWORK_LAB06_VECTOR_H
#define HOMEWORK_LAB06_VECTOR_H

#include <iostream>
#include <math.h>

class Vector{
private:
    double x, y;

public:
    Vector(): x(0), y(0) {}

    Vector(double x, double y) : x(x), y(y) {}

    double get_x();

    double get_y();

    void print_data();

    double length();

    Vector operator!();

    Vector operator+(const Vector &) const;

    Vector &operator+=(const Vector &);

    Vector operator-(const Vector &) const;

    double operator*(const Vector &);

    Vector operator*(const double);

    friend Vector operator*(const double scalar, Vector &v);

    bool operator==(const Vector &);

};

#endif //HOMEWORK_LAB06_VECTOR_H
