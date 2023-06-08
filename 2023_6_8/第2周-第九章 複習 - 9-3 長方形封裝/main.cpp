#include<iostream>
#include<iomanip>
#include "Rectangle.h"
using namespace std;

int main() {
	Rectangle a, b;
	double a1, a2, b1, b2;
	cin >> a1>>a2>>b1>>b2;
	a.setHeight(a1);
	a.setWidth(a2);
	b.setHeight(b1);
	b.setWidth(b2);
	cout << setprecision(2)<< fixed <<a.getArea() << " " << a.getPerimeter() << endl << b.getArea() << " " << b.getPerimeter() << endl;
	b.setHeight(5.0);
	b.setWidth(2.5);
	cout << b.getArea() << " " << b.getPerimeter() << endl;

	return 0;
}