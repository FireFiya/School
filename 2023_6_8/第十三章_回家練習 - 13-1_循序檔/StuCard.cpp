#include "StuCard.h"
StuCard::StuCard() {
	this->name = "name";
	this->sex = 0;
	for (int i = 0; i < 3; i++) {
		this->scoreAry[i] = 0;
	}
}
StuCard::StuCard(string name, bool sex, double scoreAry[]) {
	this->name = name;
	this->sex = sex;
	for (int i = 0; i < 3; i++) {
		this->scoreAry[i] = scoreAry[i];
	}
}
void StuCard::setName(string name) {
	this->name = name;
}
void StuCard::setSex(bool sex) {
	this->sex = sex;
}
void StuCard::setScore(int pos, double scoreAry[]) {
	for (int i = 0; i < pos; i++) {
		this->scoreAry[i] = scoreAry[i];
	}
}
string StuCard::getName()const {
	return name;
}
bool StuCard::getSex()const {
	return sex;
}
double StuCard::getScore(int pos) {
	return scoreAry[pos];
}
void StuCard::readFromFile(ifstream& in) {
	in >> name >> sex;
	for (int i = 0; i < 3; i++) {
		in >> scoreAry[i];
	}
	cout << name << " " << sex << " ";
	for (int i = 0; i < 3; i++) {
		cout <<setprecision(1)<<fixed<< scoreAry[i]<<" ";
	}
	cout << endl;
}
void StuCard::writeToFile(ofstream& out) {
	out << name << sex;
	for (int i = 0; i < 3; i++) {
		out << scoreAry[i];
	}
}