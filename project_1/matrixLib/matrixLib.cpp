#include "matrixLib.h"

int** create_matrix(int rows, int cols){
    int** matrix = new int*[rows];

    for(int i = 0; i < rows; ++i)
        matrix[i] = new int[cols];

    return matrix;
}

int** addMatrix(int** matrix_a, int** matrix_b, int rows, int cols){
    int** matrix_c = create_matrix(rows, cols);

    for(int i = 0; i < rows; ++i)
        for(int j = 0; j < cols; ++j)
            matrix_c[i][j] = matrix_a[i][j] + matrix_b[i][j];

    return matrix_c;
}

int** subtractMatrix(int** matrix_a, int** matrix_b, int rows, int cols){
    int** matrix_c = create_matrix(rows, cols);

    for(int i = 0; i < rows; ++i)
        for(int j = 0; j < cols; ++j)
            matrix_c[i][j] = matrix_a[i][j] - matrix_b[i][j];

        return matrix_c;
}