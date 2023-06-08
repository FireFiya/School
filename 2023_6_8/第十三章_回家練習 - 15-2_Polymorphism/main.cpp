#include "GeometricObject.h"
#include "Cube.h"
#include "Ball.h"
void display(GeometricObject& x) {
	cout << "area:" << x.getArea() << ", volume:" << x.getVolume() << ", color:" << x.getColor() << endl;
}
int main() {
	double radius, length;
	string Bcolor, Ccolor;
	cin >> radius >> Bcolor >> length >> Ccolor;
	Ball ball(radius);
	Cube cube(length);
	ball.setColor(Bcolor);
	cube.setColor(Ccolor);
	cout << setprecision(1) << fixed << "Ball" << endl << "radius:" << ball.getRadius() << ", ";
	display(ball);
	cout << setprecision(1) << fixed << "Cube" << endl << "length:" << cube.getLength() << ", ";
	display(cube);
}