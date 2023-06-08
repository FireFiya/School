#include "Birthday.h"
Birthday::Birthday() {
	setYear(0);
	setMonth(0);
	setDay(0);
}
Birthday::Birthday(int year, int month, int day) {
	setYear(year);
	setMonth(month);
	setDay(day);
}
void Birthday::setYear(int year) {
	this->year = year;
}
int Birthday::getYear()const {
	return year;
}
void Birthday::setMonth(int month) {
	this->month = month;
}
int Birthday::getMonth()const {
	return month;
}
void Birthday::setDay(int day) {
	this->day = day;
}
int Birthday::getDay()const {
	return day;
}
void Birthday::print(ostream& x)const {
	
}