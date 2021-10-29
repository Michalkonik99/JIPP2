#ifndef JIPP2_MATRIXLIB_H
#define JIPP2_MATRIXLIB_H

#include <iostream>
#include <math.h>
using namespace std;

int** create_matrix_int(int, int);
double** create_matrix_double(int, int);
void delete_matrix(int**, int);
void delete_matrix(double**, int);
int** addMatrix(int**, int**, int, int);
double** addMatrix(double**, double**, int, int);
int** subtractMatrix(int**, int**, int, int);
double** subtractMatrix(double**, double**, int, int);
int** multiplyMatrix(int**, int**, int, int, int);
double** multiplyMatrix(double**, double**, int, int, int);
int** multiplyByScalar(int**, int, int, int);

int** transpozeMatrix(int**, int, int);

int** powerMatrix(int**, int, int, unsigned int);

bool matrixIsDiagonal(int**, int, int);

void swap(int&, int&);

void sortRow(int*, int);

void sortRowsInMatrix(int**, int, int);

int determinantMatrix(int**, int, int);

#endif //JIPP2_MATRIXLIB_H
