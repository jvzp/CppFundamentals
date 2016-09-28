#include <iostream>
#include "IShape.hpp"
#include "Circle.hpp"
#include "Square.hpp"
#include "Triangle.hpp"

using namespace std;

int main() {

	IShape ** shapes  = new IShape*[3];
	shapes[0] = new Circle(2);
	shapes[1] = new Square(3,4);
	shapes[2] = new Triangle(3,4);

	for(int i = 0; i < 3; i++) {
		delete shapes[i];
	}

	delete shapes;

	return 0;

}
