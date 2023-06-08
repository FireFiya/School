#include "Staff.h"
int main() {
	Staff staff1("Kirito", Birthday(2002, 3, 2), Salary(10, 20)), staff2("Asuna", Birthday(2003, 5, 4), Salary(8, 30)), staff3("Alice", Birthday(2000, 10, 8), Salary(3, 4));
	string name;
	int year, day, hours;
	cin >> name >> year >> day >> hours;
	staff1.setName(name);
	staff1.setSa(Salary(hours, staff1.getSa().getWorkDay()));
	staff2.setBr(Birthday(year, staff2.getBr().getMonth(), staff2.getBr().getDay()));
	staff3.setBr(Birthday(staff3.getBr().getYear(), staff3.getBr().getMonth(), day));
	staff3.setSa(Salary(hours, staff3.getSa().getWorkDay()));
	staff1.print();
	staff2.print();
	staff3.print();
	cout << "Staff: " << Staff::getTime();
}