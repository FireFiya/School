#include "StuCard.h"
int main() {
	ifstream in;
	ofstream out;
	StuCard here[5];
	double arr0[3] = { 80.0, 70.0, 90.0 }, arr1[3] = { 85.0, 77.0, 95.0 }, arr2[3] = { 83.0, 75.0, 70.0 }, arr3[3] = { 73.0, 95.0, 67.0 }, arr4[3] = { 88.0, 79.0, 71.0 };
	in.open("C:\\Users\\mark2\\OneDrive\\桌面\\Programming\\C++\\第十三章_回家練習 - 13-1_循序檔\\Sequence file\\13-1.txt");
	out.open("C:\\Users\\mark2\\OneDrive\\桌面\\Programming\\C++\\第十三章_回家練習 - 13-1_循序檔\\Sequence file\\13-1.txt");
	if (in.fail()) {
		cout << "input file opening failed";
		exit(1);
	}
	if (out.fail()) {
		cout << "output file opening failed";
		exit(1);
	}
	here[0] = StuCard("Jerry", 1, arr0);
	here[1] = StuCard("John", 1, arr1);
	here[2] = StuCard("Mary", 0, arr2);
	here[3] = StuCard("Tom", 1, arr3);
	here[4] = StuCard("Claire", 0, arr4);
	for (int i = 0; i < 5; i++) {
		here[i].writeToFile(out);
	}
	for (int i = 0; i < 5; i++) {
		here[i].readFromFile(in);
	}
	in.close();
	out.close();
}