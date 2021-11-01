#ifndef HOMEWORK_LAB04_ZADANIE_01_H
#define HOMEWORK_LAB04_ZADANIE_01_H

#include <iostream>
using namespace std;

struct samochod{
    string brand;
    string model;
    int year;
    string color;
    int price;
};

int get_brands_number(samochod [], int);
int get_newest_car(samochod [], int);

#endif //HOMEWORK_LAB04_ZADANIE_01_H
