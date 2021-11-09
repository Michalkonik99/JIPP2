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

    static double newest_software_version;
    double installed_software_version = 3.0;

public:
    Vehicle(int, string, int, char*, string, string);
    ~Vehicle();
    void print_data();
    void print_software_version();
    void update_software();
    static void release_new_software_version(double released_version);
};
#endif //E1NOCOPYINGCONSTRUCTOR_VEHICLE_H
