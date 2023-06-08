#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;

double stuAve(vector<vector<double>> Array, int i) {
	vector<double>::iterator iter = Array[i].begin();
	double total = 0;
	for (int j = 0; iter != Array[i].end(); iter++) {
		total += *iter;
	}
	return total / Array[i].size();
}

double courseAve(vector<vector<double>> Array, int i , int pos) {
	double total = 0;
	for (int j = 0; j < i; j++) {
		total += Array[j][pos];
	}
	return total / i;
}

int main() {
	vector<vector<double>> grade(5);
	for (int i = 0; i < grade.size(); i++) {
		grade[i] = vector<double>(3);
	}
	double grades[5][3] = { {80.0, 70.0, 90.0},{85.0, 77.0, 95.0 },{83.0, 75.0, 70.0},{73.0, 95.0, 67.0 },{88.0, 79.0, 71.0} };
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 3; j++) {
			grade[i][j] = grades[i][j];
		}
	}
	for (int i = 0; i < 5; i++) {
		vector<double>::iterator iter = grade[i].begin();
		for (int j = 0; iter != grade[i].end(); ++iter) {
			cout << setprecision(1) << fixed << *iter << ", ";
		}
		cout << stuAve(grade, i) << endl;
	}
	cout << "Average: " << courseAve(grade, 5, 0) << ", " << courseAve(grade, 5, 1) << ", " << courseAve(grade, 5, 2);
}