#ifndef BMI_H
#define BMI_H
#include<string>
class BMI {
public:
	double getBMI();
	std::string getname(std::string newname);
	void getweight(double newweight);
	void getheight(double newheight);
private:
	std::string name;
	double BMI;
	double weight;
	double height;
};
#endif