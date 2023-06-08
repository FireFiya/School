#include<iostream>
#include "Rectangle.h"
using namespace std;
double sum(Rectangle rectArray[], int size) {
	double sum = 0;
	for (int i = 0; i < size;i++) {
		sum += rectArray[i].getArea();
	}
	return sum;
}
void printRectangleArray(Rectangle rectArray[], int size) {
	for (int i = 0; i < size;i++) {
		cout << rectArray[i].getHeight() << " " << rectArray[i].getWidth() << " " << rectArray[i].getArea() << endl;
	}
	cout << "Total: " << sum(rectArray, size);
}
int main() {
	const int size = 4;
	double height, width;
	Rectangle rectangleArray[size];
	for (int i = 0; i < size;i++) {
		cin >> height;
		cin >> width;
		rectangleArray[i].setHeight(height);
		rectangleArray[i].setWidth(width);
	}
	printRectangleArray(rectangleArray, size);
}