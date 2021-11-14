#include <iostream>
#include "Point.h"
#include "Vehicle.h"

using namespace std;

class TestClass {
private:
    const int t = 0;

public:
    TestClass(const int t) : t(t) {
    }
};

void exercise_1(){
    Point p1("P1"), p2(5, 5, "P2");

    cout << "Initial values" << endl;
    p1.printData();
    p2.printData();

    cout << endl << "Create copy of point" << endl;
    Point p1c = p1, p2c = p2;
    //Update copied points names
    p1c.setName("P1c");
    p2c.setName("P2c");

    cout << "Values after copying" << endl;
    p1.printData();
    p2.printData();
    p1c.printData();
    p2c.printData();

    cout << endl << "Update P1 and P2 x and y (increase 10)" << endl;
    p1.setX(10);
    p1.setY(10);
    p2.setX(15);
    p2.setY(15);

    cout << "Values after update values" << endl;
    p1.printData();
    p2.printData();
    p1c.printData();
    p2c.printData();
}

void exercise_2(){
    cout << endl << "Creating object: " << endl;
    Vehicle vehicle(2, "nazwa", 4, "marka", "typ");
    vehicle.print_data();

    cout << endl << "Changing passenger data result: " << endl;
    vehicle.change_passenger_data(2, "zmiana_informacji");
    vehicle.print_data();

    cout << endl << "Getters result:  " << endl;
    string name = vehicle.get_name();
    int register_number = vehicle.get_register_number();
    string brand = vehicle.get_brand();
    string type = vehicle.get_type();
    cout << name << endl << register_number << endl << brand << endl << type << endl;

    cout << endl << "Setters result: " << endl;
    vehicle.set_name("NOWA NAZWA");
    vehicle.set_register_number(1234);
    vehicle.print_data();

    vehicle.print_software_version();
    cout << "Update software result: " << endl;
    vehicle.update_software();
    vehicle.print_software_version();
    Vehicle::release_new_software_version(4.1);
}

int main() {
//2 - stale wskazniki

//    int cVal = 314;
//    int *const p = &cVal;
//
//    *p = 628;
//
//    int cVal2 = 666;
//    p = &cVal2;

    int exercise = 0;
    cout << "Wybierz nr zadania (1 lub 2): ";
    cin >> exercise;

    switch(exercise){
        case 1:
            exercise_1();
            break;
        case 2:
            exercise_2();
            break;
        default:
            cout << "Niepoprawny nr zadania." << endl;
            break;
    }

    cout << "End program" << endl;

    return 0;
}