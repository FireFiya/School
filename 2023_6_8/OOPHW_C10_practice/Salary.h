#ifndef Sa_H
#define Sa_H
#include<iostream>
#include<string>
using namespace std;
class Salary{
public:
	Salary();
	Salary(int, int);
	void setHours(int);
	int getHours()const;
	void setWorkDay(int);
	int getWorkDay()const;
	int getMonthlySalary()const;
	void print()const;
private:
	int hours;
	int workDay;
};
#endif