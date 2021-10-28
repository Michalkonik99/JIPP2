#include <iostream>

using namespace std;

struct samochod{
    string brand;
    string model;
    int year;
    string color;
    int price;
};

int get_brands_number(samochod cars[], int arr_len){
    int sum = 0;
    for(int i = 0; i < arr_len; i++){
        for(int j = 1; j < arr_len; j+= 1 + i)
            if(i != j && cars[i].brand == cars[j].brand)
                sum += 1;
    }

    return sum;
}

int get_newest_car(samochod cars[], int arr_len){
    int id = 0;

    for(int i = 0; i < arr_len; i++){
        if(cars[id].year < cars[i].year)
            id = i;
    }

    return id;
}

int main(){
    int arr_len = 4;
    samochod cars[] = {
            {"toyota", "prius", 2020, "grey", 10000},
            {"opel", "astra", 2001, "blue", 15000},
            {"ferrari", "enzo", 2021, "red", 600000},
            {"renault", "clio", 2015, "white", 23000}
    };

    for(int i = 0; i < arr_len; i++)
        cout << cars[i].brand << " | " << cars[i].model << " | " << cars[i].year << " | " << cars[i].color << " | " << cars[i].price << endl;

    int num_of_brands = get_brands_number(cars, arr_len);
    cout << "Number of brands is equal to " << num_of_brands << endl;

    int newest_car_id = get_newest_car(cars, arr_len);
    cout << "The newest car is " << cars[newest_car_id].brand << " " << cars[newest_car_id].model << endl;
}
