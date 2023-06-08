#ifndef B_H
#define B_H
#include "GeometricObject.h"
class Ball: public GeometricObject {
public:
	Ball(double);
	void setRadius(double);
	double getRadius()const;
	double getVolume()const;
	double getArea()const;
private:
	double radius;
};
#endif