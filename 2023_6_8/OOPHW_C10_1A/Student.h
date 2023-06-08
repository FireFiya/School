#ifndef S_H
#define S_H
#include "Course.h"
class Student{
public:
	Student();
	Student(string, string, Course);
	void setName(string);
	string getName()const;
	void setID(string);
	string getID()const;
	void setCourse(Course);
	Course getCourse()const;
	static int getNumOfStu();
	void printStudent()const;
private:
	string name;
	string ID;
	Course course;
	static int numOfStu;
};
#endif