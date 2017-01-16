#include <iostream>
#include <string>

using namespace std;

const int giInt = 3200;

//void DemoStatic()
//{
//	static int iStatic = 0;
//	int iLocal = 100;
//
//	cout << "Static = " << iStatic++ << ", Local =" << iLocal++ << endl << endl;
//}

int main()
{
	int iMainInt = 5;
	int giInt = 75;

	cout << "Global Int = " << giInt << endl;
	cout << "Main Int in Main Body = " << iMainInt << endl;

	{
		int iMainInt = 7;
		cout << "Global Int = " << giInt << endl;
		cout << "Main Int in Sub Body = " << iMainInt << endl;
	}

	cout << "Global Int = " << giInt << endl;
	cout << "Main Int in Main Body = " << iMainInt << endl;

//	for (int i = 0; i < 5; i++)
//		DemoStatic();

	//cout << iStatic << endl;

	return 0;
}