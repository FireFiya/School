#include "Score.h"
int main() {
	Score score1("John", 90, 80), score2("Mary", 80, 75);
	string name;
	int math;
	cin >> name >> math;
	score1.setName(name);
	score2.setMath(math);
	cout << score1.getName() << " " << score1.getAverage() << endl << score2.getName() << " " << score2.getAverage();
}