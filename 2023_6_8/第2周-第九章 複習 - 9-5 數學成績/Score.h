#ifndef S_H
#define S_H
#include<string>
class Score {
public:
	Score(std::string name,int math);
	void setName(std::string newName);
	void setMath(int newMath);
	std::string getName();
	int getMath();
private:
	std::string name;
	int math;
};
#endif