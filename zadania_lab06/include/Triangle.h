#ifndef HOMEWORK_LAB06_TRIANGLE_H
#define HOMEWORK_LAB06_TRIANGLE_H

#include <iostream>
#include "Node.h"

class Triangle{
private:
    Node node_a, node_b, node_c;
    std::string name;

public:
    Triangle(Node, Node, Node, std::string);

    void display();

    friend std::ostream & operator <<(std::ostream &,  const Triangle &);

    double distance(int, int);
};

//void showTriangleData(Triangle);

void showTriangleData(Triangle &);

void showTriangleData(Triangle*);

#endif //HOMEWORK_LAB06_TRIANGLE_H
