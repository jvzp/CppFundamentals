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

int main() {

	Complex number1 = {4,5};
	Complex number2 = {1,-2};
	
	Complex result = number1 + number2;
	assert(result.real == 5);
	assert(result.imag == 3);
	cout << "Test 1 succeeded!" << endl;

}
