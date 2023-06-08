#ifndef C_H
#define C_H
#include "GeometricObject.h"
class Cube: public GeometricObject {
public:
	Cube(double);
	void setLength(double);
	double getLength()const;
	double getVolume()const;
	double getArea()const;
private:
	double length;
};
#endif