#ifndef HOMEWORK_LAB04_BALL_H
#define HOMEWORK_LAB04_BALL_H

class Ball{
private:
    double radius;

public:
    Ball(double);
    double volume();
    void set_radius(double);
    double get_radius();
};

#endif //HOMEWORK_LAB04_BALL_H
