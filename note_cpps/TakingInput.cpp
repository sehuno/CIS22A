#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	int x = 1;
	double y = 2;

	cout << fixed;
	cout << "My Int x is " << setw(8) << left << x << endl;
	cout << "My Double y is " << setprecision(2) << setw(5) << y << endl;
	cout << endl << endl;

	string fName, lName, fullName, residual;
	cout << "Enter First Name and Last Name" << endl;
	cin >> fName >> lName;
	cout << "Enter Your Full Name" << endl;
	cin >> fullName;

	cout << "First Name = " << fName << " and Last Name = " << lName << endl;
	cout << "Full Name = " << fullName << endl;
	cin >> residual;
	cout << "Full Name Residual = " << residual << endl;
	cout << endl << endl;

	string part1, part2, part3, part4, part5;
	cin >> part1;
	//getline(cin, part1, '\t');
	cout << "Part 1 = " << part1 << endl;

	part2 = cin.get();
	cout << "Part 2 = " << part2 << endl;
	part3 = cin.get();
//	cin >> part3;
	cout << "Part 3 = " << part3 << endl;
	cin >> part4;
	cout << "Part 4 = " << part4 << endl;
	cin >> part5;
	cout << "Part 5 = " << part5 << endl;
	cout << endl << endl;

	double x, y, res;
	x = 9;
	y = 2;
	res = pow(x, y);
	cout << "9 raised to 2 is " << res << endl;
	res = sqrt(x);
	cout << "Square root of 9 is " << res << endl;
	res = log(x);
	cout << "Natural log of 9 is " << res << endl;
	res = log10(x);
	cout << "Base 10 log of 9 is " << res << endl;
	res = cos(x * 10);
	cout << "Cosine of 90 degrees is " << res << endl;
	res = sin(x * 10);
	cout << "Sine of 90 degrees is " << res << endl;
	res = tan(x * 10);
	cout << "Tangent of 90 degrees is " << res << endl;
	cout << endl << endl;

	system("pause");
	return 0;
}