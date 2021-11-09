#ifndef E1NOCOPYINGCONSTRUCTOR_VEHICLE_H
#define E1NOCOPYINGCONSTRUCTOR_VEHICLE_H

#include <iostream>
using namespace std;

class Vehicle{
private:
    int register_number;
    string name;
    int number_of_seats;
    char* owner;
    string brand;
    string type;

public:
    Vehicle(int, string, int, char*, string, string);
    ~Vehicle();
    void print_data();
};
#endif //E1NOCOPYINGCONSTRUCTOR_VEHICLE_H
