#include "Square.hpp"

Square::Square(double length, double height):
	surface(length*height),
	type(2),
	length(length),
	height(height)	
{

}

Square::~Square() {

}

double Square::getSurfaceArea() {
	return this->surface;
}

int Square::getType() {
	return this->type;
}