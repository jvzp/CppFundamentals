#include "complex.hpp"
#include <iostream>

using namespace std;

int main() {

	Complex<int> a(4,8);
	cout << "The number a is: " << a << endl;

	Complex<double> b(4.65,7.38);
	cout << "The number b is: " << b << endl;

}
