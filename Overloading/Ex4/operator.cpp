#include <iostream>
#include <cassert>

using namespace std;

struct Complex {

	double real;
	double imag;

};

Complex operator+(const Complex& complex1, const Complex& complex2) {

	Complex result;
	result.real = (complex1.real + complex2.real);
	result.imag = (complex1.imag + complex2.imag);
	return result;

}

Complex operator-(const Complex& complex1, const Complex& complex2) {

	Complex result;
	result.real = complex1.real - complex2.real;
	result.imag = complex1.imag - complex2.imag;
	return result;

}

ostream& operator<<(ostream& x, const Complex& number) {


	if(number.imag < 0) {

		x << number.real << "" << number.imag << "j";

	} else {
		
		x << number.real << "+" << number.imag << "j";

	}
	
	return x;
}

int main() {

	Complex number1 = {4,5};
	Complex number2 = {1,-2};
	
	Complex result = number1 + number2;
	assert(result.real == 5);
	assert(result.imag == 3);
	cout << "Test 1 succeeded!" << endl;	
	cout << "The number is " << result << endl;

	Complex result2 = number1 - number2;
	assert(result2.real == 3);
	assert(result2.imag == 7);
	cout << "Test 2 succeeded!" << endl;
	cout << "The number is " << result2 << endl;

}
