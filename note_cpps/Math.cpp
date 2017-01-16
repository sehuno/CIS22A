#include <iostream>

using namespace std;

int main()
{
	int num1 = 4;
	double num2 = 3;
	int num3 = 20;
	int num4 = 11;
	int res;

	res = num1 / num2;

	cout << "Result of int 11 / int 4 is " << num4 / num1 << endl;
	cout << "Result of int 4 / double 3 is " << num1 / num2 << endl;
	cout << "Result of int 4 / double 3 stored in int variable is "
		<< res << endl;

	cout << "The modulo of 11 % 4 is " << num4 % num1 << endl;

	cout << "The result of (3+4)*3 is " << (3 + 4) * 3 << endl;
	cout << "The result of 3+4*3 is " << 3 + 4 * 3 << endl;

	cout << "The result of 4/3*3 is " << 4 / 3 * 3 << endl;
	cout << "The result of 4*3/3 is " << 4 * 3 / 3 << endl;
	cout << "The result of -3 % 2 * (4 +3) is " << -3 % 2 * (4 + 3) << endl;
	cout << "The result of -3 % 2 * (-4) is " << -3 % 2 * (-4) << endl;

	short sMin = -32768;
	short sMax = 32767;
	unsigned short usMin = 0;
	unsigned short usMax = 65535;

	short sLossOfInfo = usMax;
	cout << "The value stored in sLossOfInfo is " << sLossOfInfo << endl;
	unsigned short usLossOfInfo = sMin;
	cout << "The value stored in usLossOfInfo is " << usLossOfInfo << endl;
	sMin = sMin - 1;
	sMax = sMax + 1;
	usMin = usMin - 1;
	usMax = usMax + 1;
	cout << "After underflow/overflow, " << endl;
	cout << "sMin = " << sMin << ",sMax = " << sMax << ",usMin = " << usMin
		<< ", usMax = " << usMax << endl;


	system("pause");
	return 0;
}