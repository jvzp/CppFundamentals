#include "Circle.hpp"

Circle::Circle(double diameter):
	surface(diameter*diameter*3.1415),
	type(1),
	diameter(diameter)
{

}

Circle::~Circle() {

}

double Circle::getSurfaceArea() {
	return this->surface;
}

int Circle::getType() {
	return this->type;
}