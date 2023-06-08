#include "Student.h"
int Student::numOfStu = 0;
Student::Student() {
	this->name = "ERROR";
	this->ID = "ERROR";
	numOfStu++;
}
Student::Student(string name, string ID, Course course) {
	this->name = name;
	this->ID = ID;
	this->course = course;
	numOfStu++;
}
void Student::setName(string name) {
	this->name = name;
}
string Student::getName()const {
	return name;
}
void Student::setID(string ID) {
	this->ID = ID;
}
string Student::getID()const {
	return ID;
}
void Student::setCourse(Course course) {
	this->course = course;
}
Course Student::getCourse()const {
	return course;
}
int Student::getNumOfStu() {
	return numOfStu;
}
void Student::printStudent()const {
	cout << getName() << getID();
	course.printScore();
}