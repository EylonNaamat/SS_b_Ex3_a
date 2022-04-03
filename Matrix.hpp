#include <vector>
#include <iostream>
#include <stdexcept>

namespace zich{
    class Matrix{
        private:
            std::vector<std::vector<double>> mat;
            int row;
            int col;

        public:
            // constructor destructor
            Matrix(){}
            Matrix(std::vector<double> mat, int row, int col){};
            ~Matrix(){};

            Matrix& operator+(const Matrix& other); // binary plus
            Matrix& operator+=(const Matrix& other); // binary addition
            Matrix& operator+(); // unary plus

            Matrix& operator-(const Matrix& other); // binary minus
            Matrix& operator-=(const Matrix& other); // binary substraction
            Matrix& operator-(); // unary minus

            // comparing operators
            bool operator==(Matrix& mat);
            bool operator<(Matrix& mat);
            bool operator>(Matrix& mat);
            bool operator<=(Matrix& mat);
            bool operator>=(Matrix& mat);
            bool operator!=(Matrix& mat);

            // multiplying operators
            friend Matrix& operator*(double a, Matrix& mat);
            friend Matrix& operator*(Matrix& mat, double a);
            friend Matrix& operator*=(Matrix& mat, double a);
            Matrix& operator*(Matrix& a);
            Matrix& operator*=(Matrix& a);

            // postfix and prefix addition and subtraction
            Matrix& operator++(); // prefix operator i.e ++mat
            Matrix& operator++(int a); // suffix operator i.e mat++
            Matrix& operator--(); // prefix operator i.e --mat
            Matrix& operator--(int a); // suffix operator i.e mat--

            // input output operators
            friend std::ostream& operator<<(std::ostream& os, const Matrix& mat);
            friend std::istream& operator>>(std::istream& is, const Matrix& mat);
    };

}