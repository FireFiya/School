#ifndef B_H
#define B_H
#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class Birthday {
public:
	Birthday();
	Birthday(int, int, int);
	void setYear(int);
	int getYear()const;
	void setMonth(int);
	int getMonth()const;
	void setDay(int);
	int getDay()const;
	void print(ostream&)const;
private:
	int year;
	int month;
	int day;
};
#endif