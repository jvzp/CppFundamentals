#include <iostream>
#include <exception>
#include <typeinfo>

using namespace std;

template<class T, class S>
T ptr_cast(S ptr) {

	T result = dynamic_cast<T>(ptr);
	if(result == NULL) {
		throw bad_cast(); 
	} else {
		return result;
	}

}

class Car { 

public:
	Car();
	virtual ~Car() {}
};

Car::Car () { }

class Audi : public Car { 

public:
	Audi();

};

Audi::Audi() { }

class Bmw { 

public:
	Bmw();

};

Bmw::Bmw() { }

int main() {

	Audi * a = new Audi();
	Car * c;
	c = a;
	try {
		a = ptr_cast<Audi*>(c);
	} catch(exception &e) {
		cout << e.what() << endl;		
	}

	delete a;
	return 0;

}
