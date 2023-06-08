#include "Score.h"
Score::Score(string name, int math, int chinese) {
	this->name = name;
	this->math = math;
	this->chinese = chinese;
}
void Score::setName(string name) {
	this->name = name;
}
void Score::setMath(int math) {
	this->math = math;
}
void Score::setChinese(int) {
	this->chinese = chinese;
}
string Score::getName()const {
	return name;
}
int Score::getMath()const {
	return math;
}
int Score::getChinese()const {
	return chinese;
}
int Score::getAverage()const {
	return (math + chinese) / 2;
}
void Score::print()const {
	cout << getName() << " " << getMath() << " " << getChinese() << getAverage() << endl;
}