#ifndef ST_H
#define ST_H
#include "Birthday.h"
#include "Salary.h"
class Staff {
public:
	Staff();
	Staff(string, Birthday, Salary);
	void setName(string);
	string getName()const;
	void setBr(Birthday);
	Birthday getBr()const;
	void setSa(Salary);
	Salary getSa()const;
	void print(ostream&)const;
private:
	string name;
	Birthday br;
	Salary sa;
};
#endif