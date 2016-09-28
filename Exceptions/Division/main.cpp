#include <iostream>
#include <exception>

using namespace std;

class DivisionByZeroException : public std::exception {

public:
	virtual const char * what() const throw();

};

const char * DivisionByZeroException::what() const throw() {

	return "DivisionByZeroException";

}

double division(double a, double b) {

	if( b == 0 ) {
		throw DivisionByZeroException();
	} else {
		return a/b;
	}

}

int main() {

	try {
		double result = division(12,0);
		cout << "Result is: " << result << endl;
	} catch(exception &e) {
		cout << "Exception: " << e.what() << endl;
	}

	try {
		double result1 = division(12,3);
		cout << "Result is: " << result1 << endl;
	} catch(exception &e) {
		cout << "Exception: " << e.what() << endl;
	}

	return 0;

}
