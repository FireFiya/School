#include "Rectangle.h"
double Rectangle::getArea() {
	return width * height;
}
double Rectangle::getPerimeter() {
	return (width + height) * 2;
}
void Rectangle::setWidth(double newWidth) {
	width = newWidth;
}
void Rectangle::setHeight(double newHeight) {
	height = newHeight;
}