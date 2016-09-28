#include <iostream>
#include "string.hpp"

using namespace std;

int main() {
	
	try {
		JString j(NULL);
	} catch(exception &e) {
		cout << "Exception: " << e.what() << endl;
	}

	try {
		JString k("Jonas");
	} catch(exception &e) {
		cout << "Exception: " << e.what() << endl;
	}

	return 0;

}
