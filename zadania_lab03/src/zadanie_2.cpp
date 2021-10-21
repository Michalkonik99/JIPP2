#include <iostream>
#include "../include/zadania.h"

void average(int* a, int* b, float* result){
    *result = (*(a) + *(b)) / 2.0;
}

void ex21(){
    int a, b;
    float result = 0;

    cout << "Podaj a: ";
    cin >> a;
    cout << "Podaj b: ";
    cin >> b;

    average(&a, &b, &result);

    cout << "Srednia = " << result << endl;
}

void fill_array(int* arr, int len){
    for(int i = 0; i < len; i++){
        cout << "Podaj " << i + 1 << " element tablicy: ";
        cin >> arr[i];
    }
}

void print_array(int* arr, int len){
    for(int i = 0; i < len; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void is_it_positive(int* element){
    if(*element > 0)
        cout << *element << endl;
}

void ex22(){
    int len;

    cout << "Podaj dlugosc tablicy: ";
    cin >> len;

    if(len <= 0){
        cout << "Dlugosc tablicy musi byc dodatnia." << endl;
        return;
    }

    int* arr = new int[len];
    fill_array(arr, len);
    print_array(arr, len);

    for(int i = 0; i < len; i++)
        is_it_positive(&(arr[i]));
}

void swap(int* x, int* y){
    int helper = *x;
    *x = *y;
    *y = helper;
}

void ex23(){
    int a, b, c, d;

    cout << "Podaj po spacji 4 liczb: ";
    cin >> a >> b >> c >> d;

    for(int i = 0; i < 4; i++) {
        if (a > b)
            swap(&a, &b);
        if (b > c)
            swap(&b, &c);
        if (c > d)
            swap(&c, &d);
    }

    cout << a << " " << b << " " << " " << c << " " << d << endl;
}

void change_value(int x, int* w){
    *w = x;
}

void ex24(){
    int x;
    int w = 0;

    cout << "Wartosc w poczatkowa: " << w << endl;
    cout << "Podaj x: ";
    cin >> x;

    change_value(x, &w);
    cout << "Wartosc w po zmianie: " << w << endl;
}

void task02(){
    int exercise = 0;

    cout << "Wybierz cwiczenie z zadania 2. (1-4): ";
    cin >> exercise;

    switch(exercise){
        case 1:
            ex21();
            break;
        case 2:
            ex22();
            break;
        case 3:
            ex23();
            break;
        case 4:
            ex24();
            break;
        default:
            cout << "Brak zadania o podanym numerze." << endl;
            break;
    }
}