#ifndef C_H
#define C_H
#include "GeometricObject.h"
class Cube : public GeometricObject {
public:
	Cube(double);
	void setLength(double);
	double getLength()const;
	double getVolume()override;
	double getArea()override;
private:
	double length;
};
#endif