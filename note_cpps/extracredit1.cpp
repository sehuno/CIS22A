#include <iostream>
using namespace std;

int main()
{
	// 5 numbers for calculation
	int a = 3;
	int b = 7;
	int c = 5;
	int d = 4;
	int e = 1;

	cout << "The five numbers that have been initialized are: " 
		<< a << ", "
		<< b << ", " 
		<< c << ", " 
		<< d << ", " 
		<< e << endl;

	// Sum of the first two
	cout << "- Sum of the first two numbers "
		<< a << " and " << b 
		<< " is " << a + b
		<< endl;

	// Product of the last three
	cout << "- Product of the last three numbers " 
		<< c << ", "
		<< d << ", "
		<< e << " is " << c*d*e << endl;

	// Division of the previous two calculations 
	cout << "- The previous product, " << c*d*e << ", divided by the previous sum, " << a+b << ", is equal to " 
	<< (c*d*e)/(a+b) << endl;

	system("pause");
	return 0;
}