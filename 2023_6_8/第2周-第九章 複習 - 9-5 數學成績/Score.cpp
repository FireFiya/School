#include<string>
#include "Score.h"
void Score::setName(std::string newName) {
	name = newName;
}
void Score::setMath(int newMath) {
	math = newMath;
}
std::string Score::getName() {
	return name;
}
int Score::getMath() {
	return math;
}