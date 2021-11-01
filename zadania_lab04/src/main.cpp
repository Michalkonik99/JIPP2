#include "zadanie_01.h"
#include "Cuboid.h"
#include "Ball.h"
#include "QuadraticFunction.h"
#include <Student.h>

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
    int task = 0;

    while(!task){
        cout << "Podaj nr cwiczenia z zadania 2 (1-4): ";
        cin >> task;

        if(!check_input_correctness()) continue;

        if(task == 1) {
            int a, b, h;
            while (1) {
                cout << "Podaj wartosci bokow podstawy (a, b) oraz wysokosci (h): " << endl;
                cin >> a >> b >> h;

                if (check_input_correctness()) break;
            }
            Cuboid cuboid = Cuboid(a, b, h);

            cout << "Bok a: " << cuboid.get_value_a() << endl;
            cout << "Bok b: " << cuboid.get_value_b() << endl;
            cout << "Wysokosc h: " << cuboid.get_value_h() << endl;

            int surface_area = cuboid.surface_area();
            cout << "Pole powierzchni: " << surface_area << endl;
        }
        else if(task == 2) {
            double radius;
            while (1) {
                cout << "Podaj promien kuli: ";
                cin >> radius;

                if (check_input_correctness()) break;
            }

            Ball ball = Ball(radius);
            double volume = ball.volume();
            cout << "Promien kuli: " << ball.get_radius() << endl;
            cout << "Objetosc kuli: " << volume << endl;
        }
        else if(task == 3){
            int a, b, c;

            while(1){
                cout << "Podaj wspolczynniki funkcji kwadratowej (a, b, c): " << endl;
                cin >> a >> b >> c;

                if(check_input_correctness()) break;
            }

            QuadraticFunction function = QuadraticFunction(a, b, c);
            function.print();

            break;
        }
        else if(task == 4){
            string name, last_name;
            int album_number, questions, correct_answers;

            cout << "Podaj imie i nazwisko studenta: " << endl;
            cin >> name >> last_name;

            while(1){
                cout << "Podaj nr albumu, ilosc pytan oraz ilosc poprawnych odpowiedzi studenta: " << endl;
                cin >> album_number >> questions >> correct_answers;

                if(check_input_correctness()) break;
            }

            Student student = Student(name, last_name, album_number, questions, correct_answers);
            double answers_ratio = student.correct_answers_ratio();
            cout << "Procent poprawnych odpowiedzi: " << answers_ratio << endl;
        }
        else{
            task = 0;
            cout << "Brak cwiczenia o podanym numerze." << endl;
            continue;
        }
    }
}

int main(){
    int homework_task = 0;

    while(!homework_task) {
        cout << "Podaj nr zadania (1-3): " << endl;
        cin >> homework_task;

        if(!check_input_correctness()) continue;

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
