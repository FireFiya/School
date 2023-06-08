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
double Cube::getVolume()const {
	return length * length * length;
}
double Cube::getArea()const {
	return length * length * 6;
}