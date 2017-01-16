// sample C++ program
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	double firstN; //define
	double secondN;
	double result;

	cout << "Please enter your first number and press <Enter>";
	cin >> firstN;
	cout << endl;

	cout << "Please enter your second number and press <Enter>";
	cin >> secondN;
	cout << endl;

	result = firstN + secondN;

	cout << fixed << setprecision(5); // << showpoint;

	cout << "The result is " << endl;
	cout << setw(12) << right << result << endl;

	cout << "The result is " << endl;
	cout << setprecision(2) << right << result << endl;

	//string strFirst; //define
	//string strSecond;
	//string strResult;

	//cout << "Please enter your first string and press <Enter>";
	//cin >> strFirst;
	//cout << endl;

	//cout << "Please enter your second string and press <Enter>";
	//cin >> strSecond;
	//cout << endl;

	//strResult = strFirst + strSecond;

	//cout << "The result is " << endl;
	//cout << setw(8) << left << strResult << endl;

	system("pause");
	return 0;
}