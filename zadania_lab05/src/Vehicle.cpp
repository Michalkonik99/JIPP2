#include "Vehicle.h"

Vehicle::Vehicle(int Register_Number, string Name, int Number_Of_Seats, char* Owner, string Brand, string Type){
    register_number = Register_Number;
    name = Name;
    number_of_seats = Number_Of_Seats;
    owner = new char[20];
    owner = Owner;
    brand = Brand;
    type = Type;
}

Vehicle::~Vehicle() {
    delete [] owner;
}

void Vehicle::print_data(){
    cout << register_number << endl;
    cout << name << endl;
    cout << number_of_seats << endl;
    cout << owner << endl;
    cout << brand << endl;
    cout << type << endl;
}