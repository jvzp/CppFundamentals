#include <iostream>

using namespace std;

class TestClass {

public:
	TestClass(int id);
	~TestClass();
	int getID();
private:
	int id;

};


TestClass::TestClass(int id): id(id) { 
	cout << "Constructing Object with ID: " << this->id << endl;
}

TestClass::~TestClass() { 
	cout << "Destructing Object with ID: " << this->id << endl;
}

int TestClass::getID() {
	return this->id;
}

TestClass b(2);

/*
 * Main function
 */
int main() {
	
	TestClass a(1);
	TestClass * c = new TestClass(3);
	delete c;
	return 0;

}