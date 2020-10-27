#include "Complex.h"

Complex::Complex(double re, double im) {
	real = re;
	imaginary = im;
}

double Complex::getImaginary() const {
	return imaginary;
}

double Complex::getReal() const {
	return real;
}

void Complex::setImaginary(double im) {
	imaginary = im;
}

void Complex::setReal(double re) {
	real = re;
}

bool Complex::operator==(const Complex& rhs) const {
	if (real == rhs.getReal() && imaginary == rhs.getImaginary())
		return true;
	else
		return false;
}

Complex& Complex::operator=(const Complex& rhs) {
	real = rhs.getReal();
	imaginary = rhs.getImaginary();

	return *this;
}


Complex& Complex::operator+=(const Complex& rhs) {

	real += rhs.getReal();
	imaginary += rhs.getImaginary();

	return *this;
}

Complex& Complex::operator-=(const Complex& rhs) {
	real -= rhs.getReal();
	imaginary -= rhs.getImaginary();

	return *this;
}

Complex& Complex::operator*=(const Complex& rhs) {
	real *= rhs.getReal();
	imaginary *= rhs.getImaginary();

	return *this;
}

Complex operator+(const Complex& lhs, const Complex& rhs) {
	return Complex(lhs.getReal() + rhs.getReal(), lhs.getImaginary() + rhs.getImaginary());
}

Complex operator-(const Complex& lhs, const Complex& rhs) {
	return Complex(lhs.getReal() - rhs.getReal(), lhs.getImaginary() - rhs.getImaginary());
}

Complex operator*(const Complex& lhs, const Complex& rhs) {
	return Complex(lhs.getReal() * rhs.getReal(), lhs.getImaginary() * rhs.getImaginary());
}

std::ostream& operator<<(std::ostream& output, const Complex& cm) {
	output << cm.getReal() << " + " << cm.getImaginary() << "i" << std::endl;
	return output;
}
std::istream& operator>>(std::istream& input, Complex& cm) {
	input >> cm.real >> cm.imaginary;
	return input;
}







