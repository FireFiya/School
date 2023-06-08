#include "Staff.h"
Staff::Staff() {
	setName("NONE");
	setBr(Birthday(0, 0, 0));
	setSa(Salary(0, 0));
}
Staff::Staff(string name, Birthday br, Salary sa) {
	setName(name);
	setBr(br);
	setSa(sa);
}
void Staff::setName(string name) {
	this->name = name;
}
string Staff::getName()const {
	return name;
}
void Staff::setBr(Birthday br) {
	this->br = br;
}
Birthday Staff::getBr()const {
	return br;
}
void Staff::setSa(Salary sa) {
	this->sa = sa;
}
Salary Staff::getSa()const {
	return sa;
}
void Staff::print(ostream& x)const {
	x.
}