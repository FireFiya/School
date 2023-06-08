#include<iostream>
#include<string>
#include<iomanip>
#include "BMI.h"
using namespace std;

int main() {
	 BMI bmi;
	 string name;
	 double w, h;
	 cin >> name >> w >> h;
	 cout << bmi.getname(name) << " ";
	 bmi.getweight(w);
	 bmi.getheight(h);
	 cout << setprecision(2) << fixed << bmi.getBMI();

	return 0;
}