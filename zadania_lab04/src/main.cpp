#include "zadanie_01.h"
#include "Cuboid.h"

bool check_input_correctness(){
    if(cin.fail()){
        cout << "Podano litere zamiast liczby." << endl;

        cin.clear();
        cin.ignore();

        return false;
    }

    return true;
}

void task_01(){
    samochod cars[] = {
            {"opel", "astra", 2001, "blue", 15000},
            {"opel", "insignia", 2010, "blue", 17500},
            {"opel", "insignia", 2010, "blue", 17500},
            {"opel", "insignia", 2010, "blue", 17500},
            {"ferrari", "enzo", 2021, "red", 600000},
            {"renault", "clio", 2015, "white", 23000},
            {"toyota", "prius", 2020, "grey", 10000},
    };
    int arr_len = sizeof(cars) / sizeof(cars[0]);

    for(int i = 0; i < arr_len; i++)
        cout << cars[i].brand << " | " << cars[i].model << " | " << cars[i].year << " | " << cars[i].color << " | " << cars[i].price << endl;

    int num_of_brands = get_brands_number(cars, arr_len);
    cout << "Number of brands is equal to " << num_of_brands << endl;

    int newest_car_id = get_newest_car(cars, arr_len);
    cout << "The newest car is " << cars[newest_car_id].brand << " " << cars[newest_car_id].model << endl;
}

void task_02(){
    Cuboid cuboid = Cuboid(3, 4, 5);

    cout << cuboid.get_value_a() << endl << cuboid.get_value_b() << cuboid.get_value_h() << endl;
}

int main(){
    int homework_task = 0;

    while(!homework_task) {
        cout << "Podaj nr zadania (1-3): " << endl;
        cin >> homework_task;

        if(!check_input_correctness())
            continue;

        switch (homework_task) {
            case 1:
                task_01();
                break;
            case 2:
                task_02();
                break;
            case 3:
                break;
            default:
                homework_task = 0;
                cout << "Nie istnieje takie zadanie. Sprobuj ponownie." << endl;
                break;
        }
    }

    return 0;
}
