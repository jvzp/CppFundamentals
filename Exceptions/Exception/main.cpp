#include <iostream>
#include <exception>

using namespace std;

class MyException : public std::exception { 

public:
	virtual const char * what() const throw();

};

const char * MyException::what() const throw() { 

	return "Amai seg, mijn eerste exception...";

}

int main() {

	try {
		throw MyException();
	} catch(exception &e) {
		cout << "Exception message: " << e.what() << endl;
	}
	return 0;

}
