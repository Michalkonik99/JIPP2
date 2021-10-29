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

void help(){
    cout << endl << endl << "+++++++++++++++ DOKUMENTACJA PROJEKTU +++++++++++++++" << endl << endl;

    cout << "Uruchomienie programu (linux): " << endl;
    cout << "./matrixApp [nazwa_funkcji] [dodatkowe_parametry]*" << endl;
    cout << endl << "* wykorzystywany tylko dla funkcji powerMatrix" << endl;

    cout << endl << "Ogolne dzialanie programu: " << endl;
    cout << "Zostaniesz poproszony(a) o wybor typu tablicy: \n1. int \n2. double" << endl;
    cout << "Nalezy podac liczbe 1 lub 2 i zatwierdzic enterem." << endl;
    cout << endl << "Nastepnie nalezy podac wymiary macierzy (w przypadku mnozenia podajemy osobno wymiary dla dwoch macierzy) poprzez wpisanie liczb dodatnich i zatwierdzenie enterm." << endl;
    cout << "Dla niektorych funkcji nalezy podac dodatkowe informacje, jest to zawarte ponizej." << endl;
    cout << "Nastepnie program wykonuje obliczenia i zwraca wynik, wyswietla macierz (lub macierze) poczatkowa oraz wynik: macierz lub liczbe." << endl;
    cout << endl << "Wprowadzanie danych do macierzy: " << endl;
    cout << "Po wybraniu typu macierzy (int / double) program poprosi o wpisanie danych do macierzy. Nalezy wpisywac liczby takiego typu jaki zostal wybrany wczesniej." << endl;
    cout << "Liczby mozna wpisywac do macierzy pojedynczo, wierszami, wszystkie w jednej lini (dla 2 ostatnich metod liczby oddzielami spacjami) i zatwierdzamy enterem." << endl;
    cout << "Program poprosi o wpisanie dokladnie tylu liczb ile wynika z podanych wymiarow" << endl;
    cout << "Liczby sa zapisywane w macierzy sekwencyjnie." << endl;

    cout << endl << "Funkcje zawarte w projekcie sa wykonywane dla tablic int lub double. Dostepne funkcje:  " << endl;

    cout << endl <<"1. Dodawanie macierzy: " << endl;
    cout << "./matrixApp [addMatrix]" << endl;
    cout << "Program wykonuje sie wedlug algorytmu ogolnego. Podany rozmiar macierzy jest rozmiarem dwoch macierzy, ktore beda do siebie dodawane." << endl;


    cout << endl << "2. Odejmowanie macierzy: " << endl;
    cout << "./matrixApp [subtractMatrix]" << endl << endl;
    cout << "Program wykonuje sie wedlug algorytmu ogolnego. Podany rozmiar macierzy jest rozmiarem dwoch macierzy." << endl;


    cout << endl << "3. Mnozenie macierzy: " << endl;
    cout << "./matrixApp [multiplyMatrix]" << endl;
    cout << "W tym dzialaniu program dodatkowo pyta o wymiary drugiej tablicy (nie musza byc takie same)" << endl;
    cout << "Aby mnozenie macierzy jest mozliwe tylko wtedy, gdy pierwsza macierz ma tyle kolumn co druga wierszy." << endl;


    cout << endl << "4. Mnozenie macierzy przez skalar: " << endl;
    cout << "./matrixApp [multiplyByScalar]" << endl;
    cout << "Program wykona zapytanie o podanie liczby (skalaru) przez ktory przemnozona zostanie macierz. Skalar ma taki sam typ jaki zostal wybrany dla macierzy" << endl;


    cout << endl << "5. Transponowanie macierzy: " << endl;
    cout << "./matrixApp [transpozeMatrix]" << endl;
    cout << "Podawana jest tylko jedna macierz, ktora nastepnie zostaje transponowana wraz z wyswietleniem wyniku." << endl;


    cout << endl << "6. Potegowanie macierzy: " << endl;
    cout << "./matrixApp [powerMatrix] [stopien_potegi]" << endl;
    cout << "Jako stopien potegi nalezy podac liczbe nieujemna." << endl;
    cout << "Aby potegowanie macierzy bylo mozliwe musi byc to macierz kwadratowa." << endl;


    cout << endl << "7. Wyznacznik macierzy: " << endl;
    cout << "./matrixApp [determinantMatrix]" << endl;
    cout << "Aby mozliwe bylo policzenie wyznacznika macierzy nalezy podac macierz kwadratowa." << endl;
    cout << "Liczenie wyznacznika za pomoca meotdy Laplace'a." << endl;


    cout << endl << "8. Sprawdzenie czy macierz jest diagonalna: " << endl;
    cout << "./matrixApp [matrixIsDiagonal]" << endl;
    cout << "Program sprawdza czy macierz jest diagonalna (tzn. ze wspolczynniki lezace poza glowna przekatna sa rowne 0." << endl;


    cout << endl << "9. Zamiana dwoch wartosci miejscami: " << endl;
    cout << "./matrixApp [swap]" << endl;
    cout << "Po podaniu wspolczynnikow macierzy, nalezy podac wspolrzedne elementow macierzy, ktore chcemy zamienic miejscami: " << endl;
    cout << "Wspolrzedne zostaja podane najpierw dla pierwszej liczby, zatwierdzamy entrem i podajemy wspolrzedne drugiej liczby i zatwierdzamy enterm." << endl;
    cout << "Pierwsza podana liczba oznacza wiersz macierzy a druga jej kolumne: [wiersz] [kolumna]" << endl;


    cout << endl << "10. Sortowanie wiersza macierzy: " << endl;
    cout << "./matrixApp [sortRow]" << endl;
    cout << "Po podaniu wspolrzednych macierzy, program zapyta o wiersz, ktory ma byc posortowany. Podajemy liczbe i zatwierdszamy enterem." << endl;


    cout << endl << "11. Sortowanie kazdego wierszu macierzy: " << endl;
    cout << "./matrixApp [sortRowsInMatrix]" << endl;
    cout << "Po wpisaniu danych macierzy, zostanie ona posortowana i wyswietlona ponownie." << endl;


    cout << endl << "12. Wyswietlanie dokumentacji programu:  " << endl;
    cout << "./matrixApp [help]" << endl;
    cout << "To dzialanie odnosi sie do wyswietlania tego oto tekstu. Zostanie on rowniez wyswietlony, gdy do programu nie zostana przekazane zadne parametry." << endl;
}