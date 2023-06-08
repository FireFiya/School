#ifndef R_H
#define R_H
class Rectangle {
public:
    double getArea();
    double getPerimeter();
    void setWidth(double);
    void setHeight(double);
private:
    double width, height;
};
#endif