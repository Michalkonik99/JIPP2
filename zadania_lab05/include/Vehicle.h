#ifndef E1NOCOPYINGCONSTRUCTOR_VEHICLE_H
#define E1NOCOPYINGCONSTRUCTOR_VEHICLE_H

#include <iostream>
using namespace std;

class Vehicle{
private:
    int register_number;
    string name;
    int number_of_seats;
    string* passengers;
    string brand;
    string type;

    static double newest_software_version;
    double installed_software_version = 3.0;

public:
    Vehicle(int, string, int, string, string, string* = nullptr);
    Vehicle(Vehicle &);
    ~Vehicle();
    void print_data();
    string get_name();
    int get_register_number();
    string get_brand();
    string get_type();
    void set_name(string);
    void set_register_number(int);

    void change_passenger_data(int, string);
    void print_software_version();
    void update_software();
    static void release_new_software_version(double released_version);
};
#endif //E1NOCOPYINGCONSTRUCTOR_VEHICLE_H
