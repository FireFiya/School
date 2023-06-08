#include "Rectangle.h"
Rectangle::Rectangle() {
	height = 1;
	width = 1;
}
Rectangle::Rectangle(double firstHeight,double firstWidth) {
	height = firstHeight;
	width = firstWidth;
}
void Rectangle::setWidth(double newWidth) {
	width = newWidth;
}
double Rectangle::getWidth() {
	return width;
}
void Rectangle::setHeight(double newHeight) {
	height = newHeight;
}
double Rectangle::getHeight() {
	return height;
}
double Rectangle::getArea() {
	return width * height;
}