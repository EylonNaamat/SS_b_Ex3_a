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

            Matrix operator+(const Matrix& other); // binary plus
            Matrix& operator+=(const Matrix& other); // binary addition
            Matrix operator+(); // unary plus

            Matrix operator-(const Matrix& other); // binary minus
            Matrix& operator-=(const Matrix& other); // binary substraction
            Matrix operator-(); // unary minus 

            // comparing operators
            bool operator==(const Matrix& mat);
            bool operator<(const Matrix& mat);
            bool operator>(const Matrix& mat);
            bool operator<=(const Matrix& mat);
            bool operator>=(const Matrix& mat);
            bool operator!=(const Matrix& mat);

            // multiplaying operators
            friend Matrix operator*(double a, const Matrix& mat);
            friend Matrix operator*(const Matrix& mat, double a);
            friend Matrix& operator*=(Matrix& mat, double a);
            friend Matrix operator*(const Matrix& a, const Matrix& b);
            friend Matrix& operator*=(Matrix& a, const Matrix& b);

            // postfix and prefix addition and substraction
            Matrix& operator++(); // prefix operator i.e ++mat
            Matrix& operator++(int a); // suffix operator i.e mat++
            Matrix& operator--(); // prefix operator i.e --mat
            Matrix& operator--(int a); // suffix operator i.e mat--

            // input output operators
            friend std::ostream& operator<<(std::ostream& os, const Matrix& mat);
            friend std::istream& operator>>(std::istream& is, const Matrix& mat);

    };
}