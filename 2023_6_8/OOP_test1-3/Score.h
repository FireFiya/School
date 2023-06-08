#ifndef S_H
#define S_H
#include<iostream>
#include<string>
using namespace std;
class Score {
public:
	Score(string, int, int);
	void setName(string);
	void setMath(int);
	void setChinese(int);
	string getName()const;
	int getMath()const;
	int getChinese()const;
	int getAverage()const;
	void print()const;
private:
	string name;
	int math, chinese;
};
#endif