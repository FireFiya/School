#ifndef SD_H
#define SD_H
#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>
using namespace std;
class StuCard {
public:
	StuCard();
	StuCard(string, bool, double[]);
	void setName(string);
	void setSex(bool);
	void setScore(int, double[]);
	string getName()const;
	bool getSex()const;
	double getScore(int);
	void readFromFile(ifstream&);
	void writeToFile(ofstream&);
private:
	string name;
	bool sex;
	double scoreAry[3];
};
#endif