#include "Triangle.h"
#include <math.h>

using namespace std;

Triangle::Triangle(Node Node_A, Node Node_B, Node Node_C, string Name) {
    node_a = Node_A;
    node_b = Node_B;
    node_c = Node_C;
    name = Name;
}

void Triangle::display() {
    cout << "Nazwa: " << name << endl;
    cout << "Wierzcholek nr 1: (" << node_a.get_x() << ", " << node_a.get_y() << ")" << endl;
    cout << "Wierzcholek nr 2: (" << node_b.get_x() << ", " << node_b.get_y() << ")" << endl;
    cout << "Wierzcholek nr 3: (" << node_c.get_x() << ", " << node_c.get_y() << ")" << endl;
}

ostream & operator <<(ostream &s, const Triangle &triangle){
    return s << "(" << triangle.node_a.get_x() << ", " << triangle.node_a.get_y() << ")" << ", " << "(" << triangle.node_b.get_x() << ", " << triangle.node_b.get_y() << ")" << " " << "(" << triangle.node_c.get_x() << ", " << triangle.node_c.get_y() << ")" << endl;
}

double Triangle::distance(int first_point_id, int second_point_id){
    if(first_point_id < 0 || first_point_id > 2 || second_point_id < 0 || second_point_id > 2)
        return 0;

    Node* nodes[3] = {&node_a, &node_b, &node_c};
    Node first_node = *(nodes[first_point_id]);
    Node second_node = *(nodes[second_point_id]);

    double x = second_node.get_x() - first_node.get_x();
    double y = second_node.get_y() - first_node.get_x();
    double result = sqrt( x * x + y * y);

    return result;
}

//void showTriangleData(Triangle triangle){
//    triangle.display();
//}

void showTriangleData(Triangle &triangle){
    triangle.display();
}

void showTriangleData(Triangle* triangle){
    triangle->display();
}