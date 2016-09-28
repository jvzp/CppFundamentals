#include "Triangle.hpp"

Triangle::Triangle(double length, double height):
	surface(length*height/2),
	type(3),
	length(length),
	height(height)		
{

}

Triangle::~Triangle() {

}

double Triangle::getSurfaceArea() {
	return this->surface;
}

int Triangle::getType() {
	return this->type;
}