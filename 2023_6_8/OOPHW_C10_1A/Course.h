#ifndef C_H
#define C_H
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class Course {
public:
	Course();
	Course(int, int, int);
	void setMath(int);
	void setEnglish(int);
	void setComputer(int);
	int getMath()const;
	int getEnglish()const;
	int getComputer()const;
	int getSum()const;
	double getAverage()const;
	void printScore()const;
private:
	int math;
	int english;
	int computer;
};
#endif