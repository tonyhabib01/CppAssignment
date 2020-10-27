//#include <istream>
//#include <ostream>
#include <iostream>
#ifndef COMPLEX_H
#define COMPLEX_H

class Complex
{
public:
    Complex(double = 0.0, double = 0.0); // default constructor
    double getReal() const;  		// returns real part
    double getImaginary() const; 	// returns imaginary part
    void setReal(double);  		// sets real part
    void setImaginary(double); 		// sets imaginary part

    bool operator==(const Complex&) const;
    Complex& operator=(const Complex&);
    Complex& operator+=(const Complex&);
    Complex& operator-=(const Complex&);
    Complex& operator*=(const Complex&);
    friend std::istream& operator>>(std::istream&, Complex&);



private:
    double real;
    double imaginary;
}; // end class Complex

Complex operator+(const Complex&, const Complex&);
Complex operator-(const Complex&, const Complex&);
Complex operator*(const Complex&, const Complex&);

std::ostream& operator<<(std::ostream&, const Complex&);

#endif
