#include "matrixLib.h"

int** create_matrix_int(int rows, int cols){
    int** matrix = new int*[rows];

    for(int i = 0; i < rows; ++i)
        matrix[i] = new int[cols];

    return matrix;
}

void delete_matrix(int** matrix, int rows){
    for(int i = 0; i < rows; ++i)
        delete [] matrix[i];

    delete [] matrix;
}

double** create_matrix_double(int rows, int cols){
    double** matrix = new double*[rows];

    for(int i = 0; i < rows; ++i)
        matrix[i] = new double[cols];

    return matrix;
}

void delete_matrix(double** matrix, int rows){
    for(int i = 0; i < rows; ++i)
        delete [] matrix[i];

    delete [] matrix;
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

double** multiplyByScalar(double** matrix_a, int rows, int cols, double scalar){
    double** matrix_c = create_matrix_double(rows, cols);

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

double** transpozeMatrix(double** matrix_a, int rows, int cols){
    double** matrix_c = create_matrix_double(cols, rows);

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

double** powerMatrix(double** matrix_a, int rows, int cols, unsigned int power){
    double** matrix_c = create_matrix_double(cols, rows);

    for(int i = 0; i < rows; ++i)
        for(int j = 0; j < cols; ++j)
            matrix_c[i][j] = matrix_a[i][j];

    for(int i = 1; i < power; ++i)
        matrix_c = multiplyMatrix(matrix_c, matrix_a, rows, cols, cols);

    return matrix_c;
}

int** submatrix(int** matrix_a, int degree, int deleted_row, int deleted_col){
    int** matrix_c = create_matrix_int(degree - 1, degree - 1);

    int row_c = 0;
    for(int i = 0; i < degree; ++i){
        int col_c = 0;
        if(i == deleted_row)
            continue;

        for(int j = 0; j < degree; ++j){
            if(j == deleted_col)
                continue;

            matrix_c[row_c][col_c] = matrix_a[i][j];
            col_c++;
        }
        row_c++;
    }

    return matrix_c;
}

double** submatrix(double** matrix_a, int degree, int deleted_row, int deleted_col){
    double** matrix_c = create_matrix_double(degree - 1, degree - 1);

    int row_c = 0;
    for(int i = 0; i < degree; ++i){
        int col_c = 0;
        if(i == deleted_row)
            continue;

        for(int j = 0; j < degree; ++j){
            if(j == deleted_col)
                continue;

            matrix_c[row_c][col_c] = matrix_a[i][j];
            col_c++;
        }
        row_c++;
    }

    return matrix_c;
}

int determinantMatrix(int** matrix, int rows, int cols){
    int det = 0;

    if(rows == 2)
        return matrix[0][0] * matrix[1][1] - matrix[1][0] * matrix[0][1];

    for(int i = 0; i < rows; ++i) {
        int** matrix_c = submatrix(matrix, rows, 0, i);
        det += pow(-1, i) * matrix[0][i] * determinantMatrix(matrix_c, rows - 1, cols - 1);
        delete_matrix(matrix_c, rows - 1);
    }

    return det;
}

double determinantMatrix(double** matrix, int rows, int cols){
    double det = 0;

    if(rows == 2)
        return matrix[0][0] * matrix[1][1] - matrix[1][0] * matrix[0][1];

    for(int i = 0; i < rows; ++i) {
        double** matrix_c = submatrix(matrix, rows, 0, i);
        det += pow(-1, i) * matrix[0][i] * determinantMatrix(matrix_c, rows - 1, cols - 1);
        delete_matrix(matrix_c, rows - 1);
    }

    return det;
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

bool matrixIsDiagonal(double** matrix, int rows, int cols){
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

void sortRow(double* arr, int cols){
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

void sortRowsInMatrix(double** matrix, int rows, int cols){
    for(int i = 0; i < rows; ++i)
        sortRow(matrix[i], cols);
}