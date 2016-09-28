#ifndef _TRIANGLE_H_
#define _TRIANGLE_H_

#include "IShape.hpp"

using namespace std;

class Triangle : public IShape {

public:
	Triangle(double length, double height);

	virtual ~Triangle();

	virtual double getSurfaceArea();

	virtual int getType();

private:
	double surface;
	int type;
	double length;
	double height;

};

#endif