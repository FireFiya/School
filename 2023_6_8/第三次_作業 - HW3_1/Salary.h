#ifndef SA_H
#define SA_H
#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class Salary {
public:
	Salary();
	Salary(int, int);
	void setHours(int);
	int getHours()const;
	void setWorkDay(int);
	int getWorkDay()const;
	int getMonthlySalary()const;
	void print(ostream&)const;
private:
	int hours;
	int workDays;
};
#endif