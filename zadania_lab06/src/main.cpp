#include <iostream>
#include "Node.h"
#include "Vector.h"
#include "Triangle.h"

using namespace std;

int main(){
    Node a = Node(5, 4);
    Node b = Node(6, 5);

    double result = pointsDistance(a, b);
    cout << "Odleglosc: " << result << endl;

    Vector v1, v2(3,-5);

    cout << "Dodawanie wektorow: " << endl;
    Vector v3 = v1 + v2;
//    cout << "Wynik dodawania wektorow: " << v3.get_x() << " " << v3.get_y() << endl;
    v3.print_data();

    cout << "Odejmowanie wektorow: " << endl;
    v3 = v1 - v2;
    v3.print_data();

    cout << "Mnozenie wektorow: " << endl;
    result =  v1 * v2;
    cout << result << endl;

    cout << "Mnozenie przez skalar: " << endl;
    v3 = v2 * 2;
    v3.print_data();

    cout << "Mnozenie przez skalar 2: " << endl;
    v3 = 2 * v2;
    v3.print_data();

    cout << "Wektor przeciwny: " << endl;
    v3 = !v2;
    v3.print_data();

    if(v1 == v2)
        cout << "Takie same" << endl;
    else
        cout << "Rozne" << endl;

    cout << "Przeciazenie << dla wektora nr 2: " << endl;
    cout << v2 << endl;

    //--------------------------- TRIANGLE ---------------------------

    Node c, d(5,8), e(1, 16);
    Triangle triangle(c, d, e, "First Triangle");

    triangle.display();
    cout << triangle << endl;

    cout << "Distance between first and second point is " << triangle.distance(0, 1) << endl;

    showTriangleData(triangle);
//    showTriangleData(triangle);
    showTriangleData(&triangle);

    return 0;
}