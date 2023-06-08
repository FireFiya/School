#ifndef R_H
#define R_H
class Rectangle {
public:
	Rectangle();
	Rectangle(double,double);
	void setWidth(double);
	double getWidth();
	void setHeight(double);
	double getHeight();
	double getArea();
private:
	double width;
	double height;
};
#endif