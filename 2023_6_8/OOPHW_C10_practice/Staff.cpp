#include "Staff.h"
int Staff::time = 0;
Staff::Staff(string name, Birthday birthday, Salary salary) {
	this->name = name;
	this->birthday = birthday;
	this->salary = salary;
	time++;
}
void Staff::setName(string name) {
	this->name = name;
}
string Staff::getName()const {
	return name;
}
void Staff::setBr(Birthday birthday) {
	this->birthday = birthday;
}
Birthday Staff::getBr()const {
	return birthday;
}
void Staff::setSa(Salary salary) {
	this->salary = salary;
}
Salary Staff::getSa()const {
	return salary;
}
int Staff::getTime() {
	return time;
}
void Staff::print()const {
	cout << getName() << " ";
	getBr().print();
	cout << " ";
	getSa().print();
	cout << endl;
}