#ifndef _COMPLEX_H_
#define _COMPLEX_H_

#include <iostream>

using namespace std;

template<class T> class Complex {

public:

	/*
	 * Default constructor
	 */
	Complex();

	/*
	 * Constructor by ref
	 */
	Complex(const Complex<T>& c);

	/*
	 * Constructor
	 */
	Complex(T real, T imag);

	/*
	 * Get the real part of an imaginary number
	 */
	T getReal() const;

	/*
	 * Get the imaginary part of an imaginary number
	 */
	T getImag() const;

	/*
	 * Set the real part
	 */
	void setReal(T real);

	/*
	 * Set the imaginary part
	 */
	void setImag(T imag);

	/*
	 * Overloading the + operator
	 */
	Complex<T> operator+(const Complex<T>& complex1);

	/*
	 * Overloading the - operator
	 */
	Complex<T> operator-(const Complex<T>& complex1);

private:
	T real;
	T imag;

};

template<class T>
ostream& operator<<(ostream& x, const Complex<T>& complex1);

/*
 * Default constructor
 */
template<class T>
Complex<T>::Complex(): real(), imag() { }


/*
 * Constructor by ref
 */
template<class T>
Complex<T>::Complex(const Complex& c): real(c.getReal()), imag(c.getImag()) { }


/*
 * Constructor
 */
template<class T>
Complex<T>::Complex(T real, T imag): real(real), imag(imag) { }


/*
 * Get the real part of an imaginary number
 */
template<class T>
T Complex<T>::getReal() const {

	return this->real;

}


/*
 * Get the imaginary part of an imaginary number
 */
template<class T>
T Complex<T>::getImag() const {

	return this->imag;

}


/*
 * Set the real part
 */
template<class T>
void Complex<T>::setReal(T real) {

	this->real = real;

}


/*
 * Set the imaginary part
 */
template<class T>
void Complex<T>::setImag(T imag) {

	this->imag = imag;

}


/*
 * Overloading the + operator
 */
template<class T>
Complex<T> Complex<T>::operator+(const Complex<T>& complex1) {

	Complex result;
	result.setReal((this->getReal() + complex1.getReal()));
	result.setImag((this->getImag() + complex1.getImag()));
	return result;

}


/*
 * Overloading the - operator
 */
template<class T>
Complex<T> Complex<T>::operator-(const Complex<T>& complex1) {

	Complex result;
	result.setReal(this->getReal() - complex1.getReal());
	result.setImag(this->getImag() - complex1.getImag());
	return result;

}


/*
 * Overloading the << operator
 */
template<class T>
ostream& operator<<(ostream& x, const Complex<T>& complex1) {

	if(complex1.getImag() < 0) {
		x << complex1.getReal() << "" << complex1.getImag() << "j";
	} else {
		x << complex1.getReal() << "+" << complex1.getImag() << "j";
	}	
	return x;

}

#endif