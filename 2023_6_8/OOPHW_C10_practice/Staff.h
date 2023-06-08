#ifndef St_H
#define St_H
#include "Birthday.h"
#include "Salary.h"
class Staff{
public:
	Staff(string,Birthday,Salary);
	void setName(string);
	string getName()const;
	void setBr(Birthday);
	Birthday getBr()const;
	void setSa(Salary);
	Salary getSa()const;
	static int getTime();
	void print()const;
private:
	string name;
	Birthday birthday;
	Salary salary;
	static int time;
};
#endif