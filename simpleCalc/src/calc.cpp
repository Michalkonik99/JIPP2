#include "../include/calc.h"
#include <iostream>
using namespace std;

int add(int x, int y){
    return x + y;
}

int subtract (int x, int y){
    return x - y;
}

int volume (int x, int y, int hb, int hp){
    int area = (x + y) / 2 * hb;
    return hp * area;
}

void help(){
    cout << endl << "Simple Calculator" << endl;
    cout << "./simpleCalc [nazwa dzialania]" << endl;

    cout << "Dzialania:" << endl;
    cout << endl << "add [x] [y]" << endl << "\tDodawanie dwoch liczb ([x] i [y]) calkowitych." << endl;
    cout << endl << "subtract [x] [y]" << endl << "\tOdejmowanie dwoch liczb ([x] i [y]) calkowitych." << endl;
    cout << endl << "volume [x] [y] [hb] [hp]" << endl << "\tObliczanie objetosci graniastoslupa o podstawie trapezu (o podstawach [x] i [y], wysokosci [hb]) i wyokosci graniastolupa [hp]" << endl;
    cout << endl << "help" << endl << "\tWyswietlanie dokumentacji" << endl;
}