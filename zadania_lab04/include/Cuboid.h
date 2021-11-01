#ifndef HOMEWORK_LAB04_CUBOID_H
#define HOMEWORK_LAB04_CUBOID_H


class Cuboid {
private:
    int a;
    int b;
    int h;

public:
    Cuboid(int, int, int);
    int surface_area();
    void set_value_a(int);
    int get_value_a();
    void set_value_b(int);
    int get_value_b();
    void set_value_h(int);
    int get_value_h();
};


#endif //HOMEWORK_LAB04_CUBOID_H
