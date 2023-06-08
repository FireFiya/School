#include "Teacher.h"
Teacher::Teacher() {
	setName("none");
	setAge(0);
	setScore(0);
}
Teacher::Teacher(string name, int age, double score) {
	setName(name);
	setAge(age);
	setScore(score);
}
void Teacher::setName(string name) {
	this->name = name;
}
void Teacher::setAge(int age) {
	this->age = age;
}
void Teacher::setScore(double score) {
	this->score = score;
}
string Teacher::getName()const {
	return name;
}
int Teacher::getAge()const {
	return age;
}
double Teacher::getScore()const {
	return score;
}
void Teacher::print()const {
	cout << setprecision(1) << fixed << "Name:" << getName() << " " << "Age:" << getAge() << " " << "Score:" << getScore() << endl;
}