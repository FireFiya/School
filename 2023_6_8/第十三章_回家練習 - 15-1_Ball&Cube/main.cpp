#include "GeometricObject.h"
#include "Cube.h"
#include "Ball.h"
int main() {
	double radius, length;
	string Bcolor, Ccolor;
	cin >> radius >> Bcolor >> length >> Ccolor;
	Ball ball(radius);
	Cube cube(length);
	ball.setColor(Bcolor);
	cube.setColor(Ccolor);
	cout << setprecision(1) << fixed << "Ball" << endl << "radius:" << ball.getRadius() << " ,area:" << ball.getArea() << " ,volume:" << ball.getVolume() << " ,color:" << ball.getColor() << endl;
	cout << "Cube" << endl << "length:" << cube.getLength() << " ,area:" << cube.getArea() << " ,volume:" << cube.getVolume() << " ,color:" << cube.getColor() << endl;
}