#include <iostream>
#include <iomanip>
#include "../matrixLib/matrixLib.h"
#include "../matrixLib/matrixMethods/h"

using namespace std;

string operations[] = {
        "addMatrix",
        "subtractMatrix",
        "multiplyMatrix",
        "multiplyByScalar",
        "transpozeMatrix",
        "powerMatrix",
        "determinantMatrix",
        "matrixIsDiagonal",
        "swap",
        "sortRow",
        "sortRowsInMatrix"};

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

void delete_matrix(double** matrix, int rows){
    for(int i = 0; i < rows; ++i)
        delete [] matrix[i];

    delete [] matrix;
}

void fill_matrix_random(int** matrix, int rows, int cols){
    for(int i = 0; i < rows; ++i)
        for(int j = 0; j < cols; ++j)
            matrix[i][j] = rand() % 10;
}

void fill_matrix_random(double** matrix, int rows, int cols){
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

void print_matrix(double** matrix, int rows, int cols){
    cout << "--------------------" << endl;
    for(int i = 0; i < rows; ++i){
        for(int j = 0; j < cols; ++j)
            cout << setw(2) << matrix[i][j] << " ";
        cout << endl;
    }

    cout << "--------------------" << endl;
}

void matrix_int_calculations(int rows, int cols){
    int** matrix_a = create_matrix_int(rows, cols);
    int** matrix_b = create_matrix_int(rows, cols);

    fill_matrix_random(matrix_a, rows, cols);
    fill_matrix_random(matrix_b, rows, cols);
    print_matrix(matrix_a, rows, cols);
    print_matrix(matrix_b, rows, cols);

//    int** matrix_c = create_matrix(rows, cols);
    int** matrix_c;
//    matrix_c = addMatrix(matrix_a, matrix_b, rows, cols);
//    matrix_c = subtractMatrix(matrix_a, matrix_b, rows, cols);
    matrix_c = multiplyMatrix(matrix_a, matrix_b, rows, cols, cols);
    print_matrix(matrix_c, rows, cols);
    delete_matrix(matrix_c, rows);

    delete_matrix(matrix_a, rows);
    delete_matrix(matrix_b, rows);
}

void matrix_double_calculations(int rows, int cols){
    double** matrix_a = create_matrix_double(rows, cols);
    double** matrix_b = create_matrix_double(rows, cols);

    fill_matrix_random(matrix_a, rows, cols);
    fill_matrix_random(matrix_b, rows, cols);
    print_matrix(matrix_a, rows, cols);
    print_matrix(matrix_b, rows, cols);

//    int** matrix_c = create_matrix(rows, cols);
    double** matrix_c;
//    matrix_c = addMatrix(matrix_a, matrix_b, rows, cols);
//    matrix_c = subtractMatrix(matrix_a, matrix_b, rows, cols);
    matrix_c = multiplyMatrix(matrix_a, matrix_b, rows, cols, cols);
    print_matrix(matrix_c, rows, cols);
    delete_matrix(matrix_c, rows);

    delete_matrix(matrix_a, rows);
    delete_matrix(matrix_b, rows);
}

int main(int argc, char* argv[]){
    srand(time(NULL));

    if(argc > 1){
        string operation = argv[1];

        if(operation == operations[0]){

        }
        else if(operation  == operations[1]){

        }
        else if(operation == operations[2]){

        }
        else if(operation == operations[3]){

        }
        else if(operation  == operations[4]){

        }
        else if(operation == operations[5]){

        }
        else if(operation == operations[6]){

        }
        else if(operation  == operations[7]){

        }
        else if(operation == operations[8]){

        }
        else if(operation == operations[9]){

        }
        else if(operation == operations[10]){

        }
        else if(operation == operations[11]){

        }
    }

    int rows, cols;
    get_matrix_dimensions(rows, cols);

    int matrix_type = -1;

    while(matrix_type == -1){
        cout << "Wybierz rodzaj macierzy: " << endl;
        cout << "1. Macierz integer" << endl << "2. Macierz double" << endl;
        cin >> matrix_type;

        switch(matrix_type){
            case 1:
                matrix_int_calculations(rows, cols);
                break;
            case 2:
                matrix_double_calculations(rows, cols);
                break;
            default:
                cout << "Wybierz liczbe 1 lub 2." << endl;
                matrix_type = -1;
                break;
        }
    }

    return 0;
}