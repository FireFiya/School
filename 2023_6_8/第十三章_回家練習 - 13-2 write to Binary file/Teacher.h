#ifndef T_H
#define T_H
#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>
using namespace std;
class Teacher {
public:
	Teacher();
	Teacher(string, int, double);
	void setName(string);
	void setAge(int);
	void setScore(double);
	string getName()const;
	int getAge()const;
	double getScore()const;
	void print()const;
private:
	string name;
	int age;
	double score;
};
#endif