#include "Birthday.h"
Birthday::Birthday() {
	this->year = 0;
	this-> month = 0;
	this->day = 0;
}
Birthday::Birthday(int year,int month,int day) {
	this->year = year;
	this->month = month;
	this->day = day;
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
	this->day = 0;
}
int Birthday::getDay()const {
	return day;
}
void Birthday::print()const {
	cout << getYear() << "/" << getMonth() << "/" << getDay();
}