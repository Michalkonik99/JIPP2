#ifndef JIPP2_MATRIXLIB_H
#define JIPP2_MATRIXLIB_H

#include <iostream>
using namespace std;

int** create_matrix_int(int, int);
double** create_matrix_double(int, int);
int** addMatrix(int**, int**, int, int);
double** addMatrix(double**, double**, int, int);
int** subtractMatrix(int**, int**, int, int);
double** subtractMatrix(double**, double**, int, int);
int** multiplyMatrix(int**, int**, int, int, int);
double** multiplyMatrix(double**, double**, int, int, int);

#endif //JIPP2_MATRIXLIB_H
