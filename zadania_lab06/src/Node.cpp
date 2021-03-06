#include "Node.h"

using namespace std;

Node::Node() {
    x = 0;
    y = 0;
}

Node::Node(double x, double y): x(x), y(y) {}

double Node::get_x() const {
    return x;
}

double Node::get_y() const {
    return y;
}

void Node::display() {
    cout << "x: " << x << "\ty: " << y << endl;
}

void Node::updateValue(double x, double y) {
    this->x = x;
    this->y = y;
}

double pointsDistance(Node a, Node b){
    double x = b.x - a.x;
    double y = b.y - a.y;
    return sqrt(x * x + y * y);
}