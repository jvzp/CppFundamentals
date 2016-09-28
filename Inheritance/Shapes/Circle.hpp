#ifndef _CIRCLE_H_
#define _CIRCLE_H_

#include "IShape.hpp"

using namespace std;

class Circle : public IShape {

public:
	Circle(double diameter);

	virtual ~Circle();

	virtual double getSurfaceArea();

	virtual int getType();

private:
	double surface;
	int type;
	double diameter;

};

#endif