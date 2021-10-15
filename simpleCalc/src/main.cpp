#include <iostream>
#include "../include/calc.h"

using namespace std;

enum ERROR_CODE{
    ERR_PARAMS = 1,
    ERR_OPERATION
};

void show_error(int error){
    if(error == ERR_PARAMS)
        cout << endl << "ERROR: Niepoprawna liczba parametrow." << endl;
    else if (error == ERR_OPERATION)
        cout << endl << "ERROR: Niepoprawna operacja" << endl;

    help();
}

int main(int argc, char* argv[]){
    int x, y, hb, hp;
    string operation;

//    if (argc > 3){
//        operation = argv[1];
//        x = stoi(argv[2]);
//        y = stoi(argv[3]);
//
//        if ( argc == 6 && operation == "volume"){
//            hb = stoi(argv[4]);
//            hp = stoi(argv[5]);
//
//            cout << "Objetosc graniastoslupa: " << volume(x, y, hb, hp) << endl;
//        }
//        else if (operation == "add")
//            cout << "Wynik dodawania: " << add(x, y) << endl;
//        else if (operation == "subtract")
//            cout << "Wynik odejmowania: " << subtract(x, y) << endl;
//        else
//            help();
//    }
//    else
//        help();

    if (argc > 1){
        operation = argv[1];

        if (operation == "help")
            help();
        else if (argc == 4){
            x = stoi(argv[2]);
            y = stoi(argv[3]);

            if (operation == "add")
                cout << "Wynik dodawania: " << add(x, y) << endl;
            else if (operation == "subtract")
                cout << "Wynik odejmowania: " << subtract(x, y) << endl;
            else
                show_error(ERR_OPERATION);
        }
        else if (argc == 6){
            x = stoi(argv[2]);
            y = stoi(argv[3]);
            hb = stoi(argv[4]);
            hp = stoi(argv[5]);

            if(operation == "volume")
                cout << "Objetosc graniastoslupa: " << volume(x, y, hb, hp) << endl;
            else
                show_error(ERR_OPERATION);
        }
        else
            show_error(ERR_PARAMS);
    }
    else
        show_error(ERR_PARAMS);

    return 0;
}