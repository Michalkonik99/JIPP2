#include <Vector.h>

using namespace std;

double Vector::get_x(){
    return x;
}

double Vector::get_y(){
    return y;
}

void Vector::print_data(){
    cout << "X: " << x << endl << "Y: " << y << endl;
}

double Vector::length(){
    return sqrt(x * x + y * y);
}

Vector Vector::operator!() {
    return Vector{-x, -y};
}

Vector Vector::operator+(const Vector &rhs) const{
    return {x + rhs.x, y + rhs.y};
}

Vector& Vector::operator+=(const Vector &rhs) {
    this->x = this->x + rhs.x;
    this->y = this->y + rhs.y;
    return *this;
}

Vector Vector::operator-(const Vector &rhs) const {
    return {x - rhs.x, y - rhs.y};
}

double Vector::operator*(const Vector &rhs) {
    return x * rhs.x + y * rhs.y;
}

Vector Vector::operator*(const double scalar){
    return {scalar * x, scalar * y};
}

Vector operator*(const double scalar, Vector &v){
    return Vector{scalar * v.x, scalar * v.y};
}

bool Vector::operator==(const Vector &rhs){
    if(x == rhs.x && y == rhs.y)
        return true;

    return false;
}