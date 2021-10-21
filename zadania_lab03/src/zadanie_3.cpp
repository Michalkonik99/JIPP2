#include <iostream>
#include <cmath>
#include "../include/zadania.h"

void ex31(){
    float a, b;
    float result;

    cout << "Podaj dwie liczby naturalne: ";
    cin >> a >> b;

    try{
        if(floor(a) != a || floor(b) != b || a <= 0 || b <= 0)
            throw "Podane liiczby nie sa naturalne";

        result = a / b;
        if(floor(result) != result)
            throw "Wynik nie jest liczba naturalna.";

        cout << "Wynik: " << result;
    }
    catch(const char* msg) {
        cout << msg << endl;
    }
}

void ex32(){
    string text;
    int number;
    cout << "Podaj liczbe do skonwertowania: ";
    getline(cin, text);
    getline(cin, text);

    try{
        number = stoi(text);
        cout << "Podana liczba jako int: " << number << endl;
    }
    catch(const invalid_argument &err){
        cout << "Wprowadzono tekst zamiast liczby" << endl;
    }
    catch(const out_of_range &err){
        cout << "Podana liczba jest z poza zakresu" << endl;
    }
}

void task03(){
    int exercise = 0;

    cout << "Wybierz cwiczenie z zadania 3. (1-2): ";
    cin >> exercise;

    switch(exercise){
        case 1:
            ex31();
            break;
        case 2:
            ex32();
            break;
        default:
            cout << "Brak zadania o podanym numerze." << endl;
            break;
    }
}