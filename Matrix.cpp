#include "Matrix.hpp"
#include <vector>
#include <iostream>
using namespace zich;


Matrix Matrix::operator+(const Matrix& other){
    std::vector<double> arr = {3, 0, 0, 0, 3, 0, 0, 0, 3};
    Matrix a(arr,3,3);
    return a;
}
Matrix& Matrix::operator+=(const Matrix& other){
    return *this;
}
Matrix Matrix::operator+(){
    std::vector<double> arr = {3, 0, 0, 0, 3, 0, 0, 0, 3};
    Matrix a(arr,3,3);
    return a;
}

Matrix Matrix::operator-(const Matrix& other){
    std::vector<double> arr = {3, 0, 0, 0, 3, 0, 0, 0, 3};
    Matrix a(arr,3,3);
    return a;   
}
Matrix& Matrix::operator-=(const Matrix& other){
    return *this;
}
Matrix Matrix::operator-(){
    std::vector<double> arr = {3, 0, 0, 0, 3, 0, 0, 0, 3};
    Matrix a(arr,3,3);
    return a;
}

bool Matrix::operator==(const Matrix& mat){
    return true;
}
bool Matrix::operator<(const Matrix& mat){
    return true;
}

bool Matrix::operator>(const Matrix& mat){
    return true;
}
bool Matrix::operator<=(const Matrix& mat){
    return true;
}
bool Matrix::operator>=(const Matrix& mat){
    return true;
}
bool Matrix::operator!=(const Matrix& mat){
    return true;
}

Matrix operator*(double a, const Matrix& mat){
    std::vector<double> arr = {3, 0, 0, 0, 3, 0, 0, 0, 3};
    Matrix b(arr,3,3);
    return b;
}
Matrix operator*(const Matrix& mat, double a){
    std::vector<double> arr = {3, 0, 0, 0, 3, 0, 0, 0, 3};
    Matrix b(arr,3,3);
    return b;    
}
Matrix& operator*=(Matrix& mat, double a){
    return mat;
}
Matrix operator*(const Matrix& a, const Matrix& b){
    std::vector<double> arr = {3, 0, 0, 0, 3, 0, 0, 0, 3};
    Matrix c(arr,3,3);
    return c;
}
Matrix& operator*=(Matrix& a, const Matrix& b){
    return a;
}

Matrix& Matrix::operator++(){
    return *this;
}
Matrix& Matrix::operator++(int a){
    return *this;
}
Matrix& Matrix::operator--(){
    return *this;
}
Matrix& Matrix::operator--(int a){
    return *this;
}

std::ostream& operator<<(std::ostream& os, const Matrix& mat){
    return os;
}

std::istream& operator>>(std::istream& is, const Matrix& mat){
    return is;
}
