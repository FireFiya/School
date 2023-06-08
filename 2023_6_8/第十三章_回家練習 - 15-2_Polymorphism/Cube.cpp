#include "Cube.h"
Cube::Cube(double length) {
	this->length = length;
}
void Cube::setLength(double length) {
	this->length = length;
}
double Cube::getLength()const {
	return length;
}
double Cube::getVolume() {
	return length * length * length;
}
double Cube::getArea() {
	return length * length * 6;
}