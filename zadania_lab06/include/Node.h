#ifndef JIPP2_NODE_H
#define JIPP2_NODE_H

#include <math.h>
#include <iostream>

class Node {
private:
    double x, y;

public:
    Node();
    Node(double x, double y);

    double get_x() const;

    double get_y() const;

    void display();

    void updateValue(double x, double y);

    friend double pointsDistance(Node a, Node b);
};

#endif //JIPP2_NODE_H