#include<iostream>
#include "Score.h"
using namespace std;

int main() {
	Score score1("John", 90), score2("Mary", 80);
	string x1,y1;
	int x2,y2;
	cin >> x1 >> x2 >> y1 >> y2;
	score1.setName(x1);
	score2.setMath(y2);
	cout << score1.getName() << " " << score1.getMath() << endl << score2.getName() << " " << score2.getMath() ;

	return 0;
}