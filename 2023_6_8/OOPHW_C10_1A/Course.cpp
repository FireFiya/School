#include "Course.h"
Course::Course() {
	this->math = 0;
	this->english = 0;
	this->computer = 0;
}
Course::Course(int math, int english, int computer) {
	this->math = math;
	this->english = english;
	this->computer = computer;
}
void Course::setMath(int math) {
	this->math = math;
}
void Course::setEnglish(int english) {
	this->english = english;
}
void Course::setComputer(int computer) {
	this->computer = computer;
}
int Course::getMath()const {
	return math;
}
int Course::getEnglish()const {
	return english;
}
int Course::getComputer()const {
	return computer;
}
int Course::getSum()const {
	return math + english + computer;
}
double Course::getAverage()const {
	return (math + english + computer) *1.0 / 3;
}
void Course::printScore()const {
	cout << " " << getMath() << " " << getEnglish() << " " << getComputer() << " Sum:" << getSum() << " Average:" << setprecision(1) << fixed << getAverage();
}