#include "Matrix.hpp"



zich::Matrix& zich::Matrix::operator+(const Matrix& other){
    return *this;
}
zich::Matrix& zich::Matrix::operator+=(const Matrix& other){
    return *this;
}
zich::Matrix& zich::Matrix::operator+(){
    return *this;
}

zich::Matrix& zich::Matrix::operator-(const Matrix& other){
    return *this;
}
zich::Matrix& zich::Matrix::operator-=(const Matrix& other){
    return *this;
}
zich::Matrix& zich::Matrix::operator-(){
    return *this;
}

bool zich::Matrix::operator==(Matrix& mat){
    return true;
}
bool zich::Matrix::operator<(Matrix& mat){
    return true;
}

bool zich::Matrix::operator>(Matrix& mat){
    return true;
}
bool zich::Matrix::operator<=(Matrix& mat){
    return true;
}
bool zich::Matrix::operator>=(Matrix& mat){
    return true;
}
bool zich::Matrix::operator!=(Matrix& mat){
    return true;
}

zich::Matrix& zich::operator*(double a, Matrix& mat){
    return mat;
}
zich::Matrix& zich::operator*(Matrix& mat, double a){
    return mat;
}
zich::Matrix& zich::operator*=(Matrix& mat, double a){
    return mat;
}
zich::Matrix& zich::operator*(Matrix& a, const Matrix& b){
    return a;
}
zich::Matrix& zich::operator*=(Matrix& a, const Matrix& b){
    return a;
}

zich::Matrix& zich::Matrix::operator++(){
    return *this;
}
zich::Matrix& zich::Matrix::operator++(int a){
    return *this;
}
zich::Matrix& zich::Matrix::operator--(){
    return *this;
}
zich::Matrix& zich::Matrix::operator--(int a){
    return *this;
}

std::ostream& zich::operator<<(std::ostream& os, const Matrix& mat){
    return os;
}

std::istream& zich::operator>>(std::istream& is, const Matrix& mat){
    return is;
}
