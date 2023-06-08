#include "BMI.h"
#include<string>
std::string BMI::getname(std::string newname) {
	name = newname;
	return name;
}
void BMI::getweight(double newweight) {
	weight = newweight;
}
void BMI::getheight(double newheight) {
	height = newheight;
}
double BMI::getBMI() {
	BMI = weight / (height * height);
	return BMI;
}