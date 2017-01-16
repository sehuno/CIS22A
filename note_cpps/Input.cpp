#include <iostream>
#include <string>

using namespace std;

int main()
{
	string fName, lName;
	string fullName;
	char ch;
	
	cout << "Enter first name of person" << endl;
	cin >> fName;
	cout << "Enter last name of person" << endl;
	cin >> lName;
	cout << "Enter full name of person 2" << endl;
	cin.ignore();
	getline(cin, fullName, '\t');
	cout << "Enter one character ";
	cin.get(ch);

//	fullName = fName + " " + lName;

	cout << "Full Name of Person is " << fName << " " << lName << endl;
	cout << "Full name of person also is " << fullName << endl;
	cout << "Length of first name is " << fName.length() << endl;
	cout << "The character read is " << ch << endl;

	cout << endl; 
	system("pause");
	return 0;
}