#ifndef _COMPLEX_H_
#define _COMPLEX_H_

#include <iostream>

using namespace std;

class Complex {

public:

	/*
	 * Default constructor
	 */
	Complex();

	/*
	 * Constructor by ref
	 */
	Complex(const Complex& c);

	/*
	 * Constructor
	 */
	Complex(double real, double imag);

	/*
	 * Get the real part of an imaginary number
	 */
	double getReal() const;

	/*
	 * Get the imaginary part of an imaginary number
	 */
	double getImag() const;

	/*
	 * Set the real part
	 */
	void setReal(double real);

	/*
	 * Set the imaginary part
	 */
	void setImag(double imag);

	/*
	 * Overloading the + operator
	 */
	Complex operator+(const Complex& complex1);

	/*
	 * Overloading the - operator
	 */
	Complex operator-(const Complex& complex1);


private:
	double real;
	double imag;

};

ostream& operator<<(ostream& x, const Complex& complex1);

#endif