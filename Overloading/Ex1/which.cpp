#include <iostream>

using namespace std;

int max(int a, int b) {

	cout << "int function called" << endl;
	if(a>b) {
		return a;
	} else {
		return b;
	}

}

short max(short a, short b) {

	cout << "short function called" << endl;
	if(a>b) {
		return a;
	} else {
		return b;
	}

}

int main() {

	unsigned char a=5, b=6, result;
	result = max(a,b);
	cout << "The result is: " << result << endl;
	return 0;

}
