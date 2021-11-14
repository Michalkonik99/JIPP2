#include "Vehicle.h"
#include <string.h>

double Vehicle::newest_software_version = 3.12;

Vehicle::Vehicle(int Register_Number, string Name, int Number_Of_Seats, string Brand, string Type, string* Passengers){
    register_number = Register_Number;
    name = Name;
    number_of_seats = Number_Of_Seats;
    passengers = new string[number_of_seats];
    brand = Brand;
    type = Type;

    for(int i = 0; i < number_of_seats; ++i)
        passengers[i] = "puste";
}

Vehicle::Vehicle(Vehicle &vehicle){
    register_number = vehicle.register_number;
    name = vehicle.name;
    number_of_seats = vehicle.number_of_seats;
    passengers = new string[number_of_seats];
    brand = vehicle.brand;
    type = vehicle.type;

    for(int i = 0; i < number_of_seats; ++i)
        passengers[i] = vehicle.passengers[i];
}

Vehicle::~Vehicle() {
    delete [] passengers;
}

void Vehicle::print_data(){
    cout << "Nr rejestracyjny: " << register_number << endl;
    cout << "Nazwa: " << name << endl;
    cout << "Ilosc miejsc: " << number_of_seats << endl;
    cout << "Pasazerowie: " << endl;
    for(int i = 0; i < number_of_seats; ++i)
        cout << i + 1 << ". " << passengers[i] << endl;
    cout << "Marka: " << brand << endl;
    cout << "Typ: " << type << endl;
}

string Vehicle::get_name(){
    return name;
}

int Vehicle::get_register_number() {
    return register_number;
}

string Vehicle::get_brand() {
    return brand;
}

string Vehicle::get_type(){
    return type;
}

void Vehicle::set_name(string Name){
    name = Name;
}

void Vehicle::set_register_number(int RegisterNumber) {
    register_number = RegisterNumber;
}

void Vehicle::change_passenger_data(int Seat, string PassengerData) {
    passengers[Seat] = PassengerData;
}

void Vehicle::print_software_version() {
    cout << "Zainstalowana wersja oprogramowania: " << installed_software_version << endl;
}

void Vehicle::update_software() {
    installed_software_version = newest_software_version;
}

void Vehicle::release_new_software_version(double released_version) {
    newest_software_version = released_version;
    cout << "Najnowsze oprogramowanie: " << newest_software_version << endl;
}