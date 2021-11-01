#ifndef HOMEWORK_LAB04_CUBOID_H
#define HOMEWORK_LAB04_CUBOID_H


class Cuboid {
private:
    int a;
    int b;
    int h;

public:
    Cuboid(int a, int b, int h);
    int surface_area();
    void set_value_a(int value_a);
    int get_value_a();
    void set_value_b(int value_b);
    int get_value_b();
    void set_value_h(int value_h);
    int get_value_h();
};


#endif //HOMEWORK_LAB04_CUBOID_H
