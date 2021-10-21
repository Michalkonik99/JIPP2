#include <iostream>
#include "../include/zadania.h"
#define ARR_LEN 10

using namespace std;

void print_array(int* arr){
    for(int i = 0; i < ARR_LEN; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int get_random_number(int a, int b){
    int rand_num = rand() % (b - a + 1) + a;

    return rand_num;
}

void ex11(){
    cout << "Zadanie 1" << endl << endl;
    srand(time(NULL));
    int a, b;

    cout << "Podaj a: ";
    cin >> a;
    cout << "Podaj b: ";
    cin >> b;

    int rand_num = get_random_number(a, b);
    cout << "Wylosowana liczba: " << rand_num << endl;
}

void fill_array_random(int* arr){
    for(int i = 0; i < ARR_LEN; i++)
        arr[i] = rand() % 100 + 1;
}

int get_max_value(int* arr){
    int max = arr[0];

    for(int i = 1; i < ARR_LEN; i++)
        if(arr[i] > max) max = arr[i];

    return max;
}

void ex12(){
    cout << "Zadanie 2" << endl << endl;
    srand(time(NULL));

    int* arr = new int[ARR_LEN];
    fill_array_random(arr);
    print_array(arr);

    int max = get_max_value(arr);
    cout << "Max Value: " << max << endl;

    delete [] arr;
}

void reverse_array(int* arr){
    int x, id;
    for(int i = 0; i < ARR_LEN / 2; ++i){
        id = ARR_LEN - 1 - i;
        x = arr[i];
        arr[i] = arr[id];
        arr[id] = x;
    }
}

void ex13(){
    cout << "Zadanie 3" << endl << endl;
    int arr[ARR_LEN]  = {1, 3, 2, 5, 4, 7, 6, 9, 8};

    print_array(arr);
    reverse_array(arr);
    print_array(arr);
}

void task01(){
    int exercise = 0;

    cout << "Wybierz cwiczenie z zadania 1. (1-3): ";
    cin >> exercise;

    switch(exercise){
        case 1:
            ex11();
            break;
        case 2:
            ex12();
            break;
        case 3:
            ex13();
            break;
        default:
            cout << "Brak zadania o podanym numerze." << endl;
            break;
    }
}