#include <iostream>
#include <iomanip>
#include "../matrixLib/matrixLib.h"

using namespace std;

void get_matrix_dimensions(int& rows, int& cols){
    cout << "Podaj liczbe wierszy: ";
    cin >> rows;
    cout << "Podaj liczbe kolumn: ";
    cin >> cols;
}

void delete_matrix(int** matrix, int rows){
    for(int i = 0; i < rows; ++i)
        delete [] matrix[i];

    delete [] matrix;
}

void fill_matrix_random(int** matrix, int rows, int cols){
    for(int i = 0; i < rows; ++i)
        for(int j = 0; j < cols; ++j)
            matrix[i][j] = rand() % 10;
}

void print_matrix(int** matrix, int rows, int cols){
    cout << "--------------------" << endl;
    for(int i = 0; i < rows; ++i){
        for(int j = 0; j < cols; ++j)
            cout << setw(2) << matrix[i][j] << " ";
        cout << endl;
    }

    cout << "--------------------" << endl;
}

int main(int argc, char* argv[]){
    srand(time(NULL));
    int rows, cols;
    get_matrix_dimensions(rows, cols);

    int** matrix_a = create_matrix(rows, cols);
    int** matrix_b = create_matrix(rows, cols);

    fill_matrix_random(matrix_a, rows, cols);
    fill_matrix_random(matrix_b, rows, cols);
    print_matrix(matrix_a, rows, cols);
    print_matrix(matrix_b, rows, cols);

//    int** matrix_c = create_matrix(rows, cols);
    int** matrix_c;
//    matrix_c = addMatrix(matrix_a, matrix_b, rows, cols);
    matrix_c = subtractMatrix(matrix_a, matrix_b, rows, cols);
    print_matrix(matrix_c, rows, cols);
    delete_matrix(matrix_c, rows);

    delete_matrix(matrix_a, rows);
    delete_matrix(matrix_b, rows);
    return 0;
}