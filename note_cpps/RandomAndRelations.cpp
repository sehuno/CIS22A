#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	// unsigned seed = time(0);
	// srand(seed);

	bool b1, b2, b3;
	int i1, i2, i3;

	i1 = rand();
	i2 = rand();
	i3 = rand();

	cout << i1 << endl;
	cout << i2 << endl;
	cout << i3 << endl;

	b1 = i1 > i2;
	b2 = i2 <= i3;
	b3 = i1 = i3;

    // cout << seed << endl;
	cout << b1 << endl;
	cout << b2 << endl;
	cout << b3 << endl;

	return 0;
}