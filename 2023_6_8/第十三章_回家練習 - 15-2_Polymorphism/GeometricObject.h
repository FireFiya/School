#ifndef G_H
#define G_H
#define _USE_MATH_DEFINES
#include<iostream>
#include<iomanip>
#include<string>
#include<cmath>
using namespace std;
class GeometricObject {
public:
	void setColor(string);
	string getColor()const;
	virtual double getArea() = 0;
	virtual double getVolume() = 0;
private:
	string color;
};
#endif