#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	double radius;
//	const double pi = 3.1415;
	double pi;

	cout << "Please enter your circle's radius and a value for PI and then press <Enter> " << endl;
	cin >> radius >> pi;
//	cout << "Please enter a value for PI and press <Enter> " << endl;
//	cin >> pi;

//	double area = pi * radius * radius;
	double area = pi * pow(radius, 2);
	double circ = 2 * pi * radius;

	cout << "Area is " << area << endl;
	cout << "Circumference is " << circ << endl;

	system("pause");
	return 0;
}