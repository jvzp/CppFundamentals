#ifndef _ISHAPE_H_
#define _ISHAPE_H_

using namespace std;

class IShape {

public:
	virtual double getSurfaceArea()=0;

	virtual int getType()=0;

	virtual ~IShape() {}

};

#endif