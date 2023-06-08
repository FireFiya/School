#include "Staff.h"
int main() {
	fstream io;
	io.open("a.txt", ios::out);
	io << "Eden 2002 3 2 10 20\n";
	io << "Asuna 1995 5 4 8 30\n";
	io << "Alice 2000 10 10 9 12";
	io.close();

	Staff s[3];

	for (int i = 0; i < 3; ++i)
		s[i].print(cout);
}