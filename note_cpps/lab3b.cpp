// CIS 22A - Lab 3B
// Program that calculates whether the month times the day entered multiplies to the year
// By: Eric Sehun Oh

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int month;
	int day;
	int year;

	cout << "Welcome to Magic Dates!" << endl << endl;

	cout << "* Note: Please enter all following numbers in numeric form *" << endl;

	cout << "Please enter the month: ";
	cin >> month;
	while (cin.fail())
	{
		cin.clear();
		cin.ignore(1000,'\n');
		cout << "Please enter month in numeric form:";
		cin >> month;
	}
	
	if (month < 1 || month > 12)
		cout << "Please enter valid month: " << endl;

	cout << "Please enter the day: ";
	cin >> day;
	if (day < 0 || day > 31)
		cout << "Please enter valid day: " << endl;

	cout << "Please enter the year: ";
	cin >> year;
	if (year < 0 || year > 99)
		cout << "Please enter a valid year: " << endl; 


	cout << endl;

	cout << "The date you have entered is " << month << "/" << day << "/" << year << endl << endl;

	if (month*day == year)
		cout << "The date is magic!" << endl;
	else
		cout << "The date is not magic..." << endl;

	system("pause");
	return 0;
}