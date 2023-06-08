#include "Ball.h"
Ball::Ball(double radius) {
	this->radius = radius;
}
void Ball::setRadius(double radius) {
	this->radius = radius;
}
double Ball::getRadius()const {
	return radius;
}
double Ball::getVolume() {
	return 4 * 1.0 / 3 * M_PI * pow(radius, 3);
}
double Ball::getArea() {
	return 4 * 1.0 * M_PI * pow(radius, 2);
}