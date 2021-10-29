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

bool check_input_correctness(){
    if(cin.fail()){
        cout << "Podano litere zamist liczby" << endl;
        cin.clear();
        cin.ignore();

        return false;
    }
    return true;
}

void get_matrix_dimensions(int& rows, int& cols){
    while(1){
        cout << "Podaj liczbe wierszy: ";
        cin >> rows;

        if(check_input_correctness())
            break;
    }
    while(1) {
        cout << "Podaj liczbe kolumn: ";
        cin >> cols;
        if(check_input_correctness())
            break;
    }
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

            if(!check_input_correctness())
                j--;
        }
    }
}

void fill_matrix(double** matrix, int rows, int cols){
    for(int i = 0; i < rows; ++i){
        for(int j = 0; j < cols; ++j) {
            cin >> matrix[i][j];

            if(!check_input_correctness())
                j--;
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
            cout << setw(5) << matrix[i][j] << " ";
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

    cout << endl << endl <<"--------------- " << operations[operation_id] << " ---------------" << endl << endl;
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

            while(1) {
                cout << "Podaj wartosc skalaru: ";
                cin >> scalar;

                if(check_input_correctness())
                    break;
            }

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
            int row_x, col_x, row_y, col_y;

            while(1) {
                while (1) {
                    cout << "Podaj wspolrzedne pierwszej liczby: ";
                    cin >> row_x >> col_x;

                    if (check_input_correctness())
                        break;
                }

                while (1) {
                    cout << "Podaj wspolrzedne drugiej liczby: ";
                    cin >> row_y >> col_y;

                    if (check_input_correctness())
                        break;
                }

                if (row_x < 0 || col_x < 0 || row_y < 0 || col_y < 0 || row_x >= rows_a || col_x >= cols_a ||
                    row_y >= rows_a || col_y >= cols_a) {
                    cout << "Podano niewlasciwe indeksy." << endl;
                    continue;
                }

                break;
            }

            swap(matrix_a[row_x][col_x], matrix_a[row_y][col_y]);
            print_matrix(matrix_a, rows_a, cols_a);
            break;
        case 9:
            int row_id;

            while(1) {
                while (1) {
                    cout << "Podaj numer wiersza do posortowania: ";
                    cin >> row_id;

                    if (check_input_correctness())
                        break;
                }

                if (row_id < 0 || row_id >= rows_a) {
                    cout << "Podany numer wiersza jest niepoprawny" << endl;
                    continue;
                }

                break;
            }
            sortRow(matrix_a[row_id], cols_a);
            print_matrix(matrix_a, rows_a, cols_a);

            break;
        case 10:
            sortRowsInMatrix(matrix_a, rows_a, cols_a);
            print_matrix(matrix_a, rows_a, cols_a);
            break;
        default:
            break;
    }

    delete_matrix(matrix_a, rows_a);
    delete_matrix(matrix_b, rows_b);
    if(matrix_c)
        delete_matrix(matrix_c, rows_a);
}

void matrix_double_calculations(int operation_id, int argc, char* argv[]){
    int rows_a, cols_a, rows_b, cols_b;

    cout << endl << endl <<"--------------- " << operations[operation_id] << " ---------------" << endl << endl;
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

    double** matrix_a = create_matrix_double(rows_a, cols_a);
    cout << "Wypelnij macierz A" << endl;
    fill_matrix(matrix_a, rows_a, cols_a);

    double** matrix_b = create_matrix_double(rows_b, cols_b);
    if(operation_id < 3) {
        cout << "Wypelnij macierz B" << endl;
        fill_matrix(matrix_b, rows_b, cols_b);
    }

    print_matrix(matrix_a, rows_a, cols_a);
    double** matrix_c = NULL;

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
            double scalar;
            scalar = 0;

            while(1) {
                cout << "Podaj wartosc skalaru: ";
                cin >> scalar;

                if(check_input_correctness())
                    break;
            }

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

            double determinant;
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
            int row_x, col_x, row_y, col_y;

            while(1) {
                while (1) {
                    cout << "Podaj wspolrzedne pierwszej liczby: ";
                    cin >> row_x >> col_x;

                    if (check_input_correctness())
                        break;
                }

                while (1) {
                    cout << "Podaj wspolrzedne drugiej liczby: ";
                    cin >> row_y >> col_y;

                    if (check_input_correctness())
                        break;
                }

                if (row_x < 0 || col_x < 0 || row_y < 0 || col_y < 0 || row_x >= rows_a || col_x >= cols_a ||
                    row_y >= rows_a || col_y >= cols_a) {
                    cout << "Podano niewlasciwe indeksy." << endl;
                    continue;
                }

                break;
            }

            swap(matrix_a[row_x][col_x], matrix_a[row_y][col_y]);
            print_matrix(matrix_a, rows_a, cols_a);
            break;
        case 9:
            int row_id;

            while(1) {
                while (1) {
                    cout << "Podaj numer wiersza do posortowania: ";
                    cin >> row_id;

                    if (check_input_correctness())
                        break;
                }

                if (row_id < 0 || row_id >= rows_a) {
                    cout << "Podany numer wiersza jest niepoprawny" << endl;
                    continue;
                }

                break;
            }
            sortRow(matrix_a[row_id], cols_a);
            print_matrix(matrix_a, rows_a, cols_a);

            break;
        case 10:
            sortRowsInMatrix(matrix_a, rows_a, cols_a);
            print_matrix(matrix_a, rows_a, cols_a);
            break;
        default:
            break;
    }

    delete_matrix(matrix_a, rows_a);
    delete_matrix(matrix_b, rows_b);
    if(matrix_c)
        delete_matrix(matrix_c, rows_a);
}

int check_if_operation_exists(string operation){
    int operations_length = sizeof(operations) / sizeof(string);
//    cout << "LENGTH: " << operations_length << endl;
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

//        try{
//            cin >> matrix_type;
//            if(cin.fail())
//                throw("Podano litere zamiast liczby");
//        }
//        catch(const char* error) {
//            cout << error << endl;
//            cin.clear();
//            cin.ignore();
//        }
        cin >> matrix_type;
        check_input_correctness();

        switch(matrix_type){
            case 1:
                matrix_int_calculations(operation_id, argc, argv);
                break;
            case 2:
                matrix_double_calculations(operation_id, argc, argv);
                break;
            default:
                cout << "Wybierz liczbe 1 lub 2." << endl;
                matrix_type = -1;
                break;
        }
    }

    return 0;
}