#include <iostream>
#include "complex.hpp"

	
/*
 * Default constructor
 */
Complex::Complex(): real(), imag() { }


/*
 * Constructor by ref
 */
Complex::Complex(const Complex& c): real(c.getReal()), imag(c.getImag()) { }


/*
 * Constructor
 */
Complex::Complex(double real, double imag): real(real), imag(imag) { }


/*
 * Get the real part of an imaginary number
 */
double Complex::getReal() const {

	return this->real;

}


/*
 * Get the imaginary part of an imaginary number
 */
double Complex::getImag() const {

	return this->imag;

}


/*
 * Set the real part
 */
void Complex::setReal(double real) {

	this->real = real;

}


/*
 * Set the imaginary part
 */
void Complex::setImag(double imag) {

	this->imag = imag;

}


/*
 * Overloading the + operator
 */
Complex Complex::operator+(const Complex& complex1) {

	Complex result;
	result.setReal((this->getReal() + complex1.getReal()));
	result.setImag((this->getImag() + complex1.getImag()));
	return result;

}


/*
 * Overloading the - operator
 */
Complex Complex::operator-(const Complex& complex1) {

	Complex result;
	result.setReal(this->getReal() - complex1.getReal());
	result.setImag(this->getImag() - complex1.getImag());
	return result;

}


/*
 * Overloading the << operator
 */
ostream& operator<<(ostream& x, const Complex& complex1) {

	if(complex1.getImag() < 0) {
		x << complex1.getReal() << "" << complex1.getImag() << "j";
	} else {
		x << complex1.getReal() << "+" << complex1.getImag() << "j";
	}	
	return x;

}