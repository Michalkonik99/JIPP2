#include "matrixLib.h"

int** create_matrix_int(int rows, int cols){
    int** matrix = new int*[rows];

    for(int i = 0; i < rows; ++i)
        matrix[i] = new int[cols];

    return matrix;
}

double** create_matrix_double(int rows, int cols){
    double** matrix = new double*[rows];

    for(int i = 0; i < rows; ++i)
        matrix[i] = new double[cols];

    return matrix;
}

int** addMatrix(int** matrix_a, int** matrix_b, int rows, int cols){
    int** matrix_c = create_matrix_int(rows, cols);

    for(int i = 0; i < rows; ++i)
        for(int j = 0; j < cols; ++j)
            matrix_c[i][j] = matrix_a[i][j] + matrix_b[i][j];

    return matrix_c;
}

double** addMatrix(double** matrix_a, double** matrix_b, int rows, int cols){
    double** matrix_c = create_matrix_double(rows, cols);

    for(int i = 0; i < rows; ++i)
        for(int j = 0; j < cols; ++j)
            matrix_c[i][j] = matrix_a[i][j] + matrix_b[i][j];

    return matrix_c;
}

int** subtractMatrix(int** matrix_a, int** matrix_b, int rows, int cols){
    int** matrix_c = create_matrix_int(rows, cols);

    for(int i = 0; i < rows; ++i)
        for(int j = 0; j < cols; ++j)
            matrix_c[i][j] = matrix_a[i][j] - matrix_b[i][j];

        return matrix_c;
}

double** subtractMatrix(double** matrix_a, double** matrix_b, int rows, int cols){
    double** matrix_c = create_matrix_double(rows, cols);

    for(int i = 0; i < rows; ++i)
        for(int j = 0; j < cols; ++j)
            matrix_c[i][j] = matrix_a[i][j] - matrix_b[i][j];

    return matrix_c;
}

int** multiplyMatrix(int** matrix_a, int** matrix_b, int rows_a, int cols_a, int cols_b){
    int** matrix_c = create_matrix_int(rows_a, cols_b);

    for(int i = 0; i < rows_a; ++i)
        for(int k = 0; k < cols_a; ++k)
            for(int j = 0; j < cols_b; ++j)
                matrix_c[i][j] += matrix_a[i][k] * matrix_b[k][j];

    return matrix_c;
}

double** multiplyMatrix(double** matrix_a, double** matrix_b, int rows_a, int cols_a, int cols_b){
    double** matrix_c = create_matrix_double(rows_a, cols_b);

    for(int i = 0; i < cols_a; ++i)
        for(int k = 0; k < rows_a; ++k)
            for(int j = 0; j < cols_b; ++j)
                matrix_c[i][j] += matrix_a[i][k] * matrix_b[k][j];

    return matrix_c;
}

int** multiplyByScalar(int** matrix_a, int rows, int cols, int scalar){
    int** matrix_c = create_matrix_int(rows, cols);

    for(int i = 0; i < rows; ++i)
        for(int j = 0; j < cols; ++j)
            matrix_c[i][j] = scalar * matrix_a[i][j];

    return matrix_c;
}

int** transpozeMatrix(int** matrix_a, int rows, int cols){
    int** matrix_c = create_matrix_int(cols, rows);

    for(int i = 0; i < rows; ++i)
        for(int j = 0; j < cols; ++j)
            matrix_c[j][i] = matrix_a[i][j];

    return matrix_c;
}

int** powerMatrix(int** matrix_a, int rows, int cols, unsigned int power){
    int** matrix_c = create_matrix_int(cols, rows);

    for(int i = 0; i < rows; ++i)
        for(int j = 0; j < cols; ++j)
            matrix_c[i][j] = matrix_a[i][j];

    for(int i = 1; i < power; ++i)
        matrix_c = multiplyMatrix(matrix_c, matrix_a, rows, cols, cols);

    return matrix_c;
}

bool matrixIsDiagonal(int** matrix, int rows, int cols){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(i != j && matrix[i][j] != 0)
                return false;
        }
    }

    return true;
}

void swap(int& a, int& b){
    int tmp = a;
    a = b;
    b = tmp;
}

void sortRow(int* arr, int cols){
    for(int i = 0; i < cols - 1; ++i){
        for(int j = 0; j < cols - i - 1; ++j)
            if(arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
    }
}

void sortRowsInMatrix(int** matrix, int rows, int cols){
    for(int i = 0; i < rows; ++i)
        sortRow(matrix[i], cols);
}