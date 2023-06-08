#include "Salary.h"
Salary::Salary() {
	setHours(0);
	setWorkDay(0);
}
Salary::Salary(int hours, int workDays) {
	setHours(hours);
	setWorkDay(workDays);
}
void Salary::setHours(int hours) {
	this->hours = hours;
}
int Salary::getHours()const {
	return hours;
}
void Salary::setWorkDay(int workDays) {
	this->workDays = workDays;
}
int Salary::getWorkDay()const {
	return workDays;
}
int Salary::getMonthlySalary()const {
	return 168 * hours * workDays;
}
void Salary::print(ostream& x)const {
	
}