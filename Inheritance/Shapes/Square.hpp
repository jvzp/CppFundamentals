#ifndef _SQUARE_H_
#define _SQUARE_H_

#include "IShape.hpp"

using namespace std;

class Square : public IShape {

public:
	Square(double length, double height);

	virtual ~Square();

	virtual double getSurfaceArea();

	virtual int getType();

private:
	double surface;
	int type;
	double length;
	double height;

};

#endif