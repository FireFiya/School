#include "Teacher.h"
void printTeacher(Teacher teacher[], int size) {
	for (int i = 0; i < size; i++) {
		teacher[i].print();
	}
}
int main() {
	fstream binaryio;
	Teacher teacher[4];
	binaryio.open("C:\\Users\\mark2\\OneDrive\\桌面\\Programming\\C++\\第十三章_回家練習 - 13-2 write to Binary file\\Binary file\\Teacher.bin", ios::out | ios::binary);
	if (binaryio.fail()) {
		cout << "output file opening failed";
		exit(1);
	}
	for (int i = 0; i < 4; i++) {
		string name;
		int age;
		double score;
		cin >> name >> age >> score;
		teacher[i] = Teacher(name, age, score);
	}
	binaryio.write(reinterpret_cast<char*>(&teacher[0]), sizeof(Teacher));
	binaryio.write(reinterpret_cast<char*>(&teacher[1]), sizeof(Teacher));
	binaryio.write(reinterpret_cast<char*>(&teacher[2]), sizeof(Teacher));
	binaryio.write(reinterpret_cast<char*>(&teacher[3]), sizeof(Teacher));
	binaryio.close();
	binaryio.open("C:\\Users\\mark2\\OneDrive\\桌面\\Programming\\C++\\第十三章_回家練習 - 13-2 write to Binary file\\Binary file\\Teacher.bin", ios::in | ios::binary);
	Teacher teacherNew[4];
	binaryio.read(reinterpret_cast<char*>(&teacherNew[0]), sizeof(Teacher));
	binaryio.read(reinterpret_cast<char*>(&teacherNew[1]), sizeof(Teacher));
	binaryio.read(reinterpret_cast<char*>(&teacherNew[2]), sizeof(Teacher));
	binaryio.read(reinterpret_cast<char*>(&teacherNew[3]), sizeof(Teacher));
	printTeacher(teacherNew, 4);
	binaryio.close();
	return 0;
}