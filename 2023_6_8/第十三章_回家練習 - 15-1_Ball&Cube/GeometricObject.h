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
private:
	string color;
};
#endif