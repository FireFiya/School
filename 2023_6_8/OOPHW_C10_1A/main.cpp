#include "Student.h"
void printAve(Student stuArray[], int students) {
	double mathtotal = 0, englishtotal = 0, computertotal = 0;
	for (int i = 0; i < students; i++) {
		stuArray[i].printStudent();
		cout << endl;
		mathtotal += stuArray[i].getCourse().getMath();
		englishtotal += stuArray[i].getCourse().getEnglish();
		computertotal += stuArray[i].getCourse().getComputer();
	}
	cout << "mathAverage:" << mathtotal / students << endl << "englishAverage:" << englishtotal / students << endl << "computerAverage:" << computertotal / students << endl;
}
int main() {
	Student stuArray[5];
	int students, math, english, computer;
	string name, ID;
	cin >> students;
	for (int i = 0; i < students;i++) {
		cin >> name >> ID >> math >> english >> computer;
		stuArray[i] = Student(name, ID, Course(math, english, computer));
	}
	printAve(stuArray,students);
}