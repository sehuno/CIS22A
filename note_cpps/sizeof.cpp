// CIS 22A
// Manish Goel
//
// Calculate size of data types and data variables
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string strS1 = "The size of ";
	string strS2 = " is ";
	string strS3 = " bytes";

	cout << strS1 << "int" << strS2 << sizeof(int) << strS3 << endl;
	cout << strS1 << "long" << strS2 << sizeof(long) << strS3 << endl;
	cout << strS1 << "short" << strS2 << sizeof(short) << strS3 << endl;
	cout << strS1 << "float" << strS2 << sizeof(float) << strS3 << endl;
	cout << strS1 << "double" << strS2 << sizeof(double) << strS3 << endl;
	cout << strS1 << "bool" << strS2 << sizeof(bool) << strS3 << endl;
	cout << strS1 << "char" << strS2 << sizeof(char) << strS3 << endl;
	cout << strS1 << "string" << strS2 << sizeof(string) << strS3 << endl;

	cout << strS1 << "strS2" << strS2 << sizeof(strS2) << strS3 << endl;

		
	system("pause");
	return 0;
}