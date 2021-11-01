#include "QuadraticFunction.h"
#include <iostream>

QuadraticFunction::QuadraticFunction(int a, int b, int c) {
    this->a = a;
    this->b = b;
    this->c = c;
}

void QuadraticFunction::print(){
    std::cout << "f(x) = " <<  a << " * x^2 + " << b << " * x + " << c << std::endl;
}