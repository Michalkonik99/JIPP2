#include <iostream>
#include <iomanip>
#include "../matrixLib/matrixLib.h"

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

void fill_matrix(int** matrix, int rows, int cols, char arr_id = 'A'){
    cout << endl << "Wpisz liczby do tablicy: " << endl;
    for(int i = 0; i < rows; ++i){
        for(int j = 0; j < cols; ++j) {
            cin >> matrix[i][j];
        }
    }
}

void fill_matrix(double** matrix, int rows, int cols){
    for(int i = 0; i < rows; ++i){
        for(int j = 0; j < cols; ++j) {
            cin >> matrix[i][j];
        }
    }
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

bool is_matrix_square(int rows, int cols){
    if(rows != cols)
        return false;

    return true;
}

void matrix_int_calculations(int operation_id, int argc, char* argv[]){
    int rows_a, cols_a, rows_b, cols_b;

    cout << "Podaj wymiary macierzy A" << endl;
    get_matrix_dimensions(rows_a, cols_a);

    if(operation_id == 2){
        cout << "Podaj wymiary macierzy B" << endl;
        get_matrix_dimensions(rows_b, cols_b);

        if(cols_a != rows_b){
            cout << "Nie mozna pomnozyc macierzy o podanych rozmiarach" << endl;
            exit(-2);
        }
    }
    else{
        rows_b = rows_a;
        cols_b = cols_a;
    }

    int** matrix_a = create_matrix_int(rows_a, cols_a);
    cout << "Wypelnij macierz A" << endl;
    fill_matrix(matrix_a, rows_a, cols_a);

    int** matrix_b = create_matrix_int(rows_b, cols_b);
    if(operation_id < 3) {
        cout << "Wypelnij macierz B" << endl;
        fill_matrix(matrix_b, rows_b, cols_b);
    }

    print_matrix(matrix_a, rows_a, cols_a);
    int** matrix_c = NULL;

    switch(operation_id){
        case 0:
            print_matrix(matrix_b, rows_b, cols_b);
            matrix_c = addMatrix(matrix_a, matrix_b, rows_a, cols_a);
            print_matrix(matrix_c, rows_a, cols_a);
            break;
        case 1:
            print_matrix(matrix_b, rows_b, cols_b);
            matrix_c = subtractMatrix(matrix_a, matrix_b, rows_a, cols_a);
            print_matrix(matrix_c, rows_a, cols_a);
            break;
        case 2:
            print_matrix(matrix_b, rows_b, cols_b);
            matrix_c = multiplyMatrix(matrix_a, matrix_b, rows_a, cols_a, cols_b);
            print_matrix(matrix_c, rows_a, cols_b);
            break;
        case 3:
            int scalar;
            scalar = 0;
            cout << "Podaj wartosc skalaru: ";
            cin >> scalar;

            matrix_c = multiplyByScalar(matrix_a, rows_a, cols_a, scalar);
            print_matrix(matrix_c, rows_a, cols_a);
            break;
        case 4:
            matrix_c = transpozeMatrix(matrix_a, rows_a, cols_a);
            print_matrix(matrix_c, cols_a, rows_a);
            break;
        case 5:
            if(!is_matrix_square(rows_a, cols_a)){
                cout << "Podanej macierzy nie mozna spotegowac." << endl;
                exit(-2);
            }

            if(argc < 3){
                cout << endl << endl << "HELP" << endl << endl;
                exit(-2);
            }

            unsigned int power;
            power = stoi(argv[2]);

            matrix_c = powerMatrix(matrix_a, rows_a, cols_a, power);
            print_matrix(matrix_c, rows_a, cols_a);
            break;
        case 6:
            if(!is_matrix_square(rows_a, cols_a)){
                cout << "Nie mozna wyliczyc wyznacznika podanej macierzy." << endl;
                exit(-2);
            }

            int determinant;
            determinant = determinantMatrix(matrix_a, rows_a, cols_a);
            cout << "Wyznacznik macierzy: " << determinant << endl;

            break;
        case 7:
            if(!is_matrix_square(rows_a, cols_a)){
                cout << "Podana macierz nie jest diagonalna." << endl;
                exit(-2);
            }

            bool is_diagonal;
            is_diagonal = matrixIsDiagonal(matrix_a, rows_a, cols_a);

            if(is_diagonal)
                cout << "Macierz jest diagonalna." << endl;
            else
                cout << "Macierz nie jest diagonalna" << endl;

            break;
        case 8:
            break;
        case 9:
            break;
        case 10:
            sortRowsInMatrix(matrix_a, rows_a, cols_a);
            print_matrix(matrix_a, rows_a, cols_a);
            break;
    }

    delete_matrix(matrix_a, rows_a);
    delete_matrix(matrix_b, rows_b);
    if(matrix_c)
        delete_matrix(matrix_c, rows_a);
}

void matrix_double_calculations(int operation_id){
    return;
}

int check_if_operation_exists(string operation){
    int operations_length = sizeof(operations) / sizeof(string);
    cout << "LENGTH: " << operations_length << endl;
    for(int i = 0; i < operations_length; i++)
        if(operation == operations[i])
            return i;

    return -1;
}

int main(int argc, char* argv[]){
    srand(time(NULL));
    int operation_id;

    if(argc > 1){
        string operation = argv[1];
        operation_id = check_if_operation_exists(operation);
        if(operation_id == -1) {
            cout << endl << endl << "HELP" << endl << endl;
            exit(-1);
        }
    }

    int matrix_type = -1;

    while(matrix_type == -1){
        cout << "Wybierz rodzaj macierzy: " << endl;
        cout << "1. Macierz integer" << endl << "2. Macierz double" << endl;
        cin >> matrix_type;

        switch(matrix_type){
            case 1:
                matrix_int_calculations(operation_id, argc, argv);
                break;
            case 2:
                matrix_double_calculations(operation_id);
                break;
            default:
                cout << "Wybierz liczbe 1 lub 2." << endl;
                matrix_type = -1;
                break;
        }
    }

    return 0;
}