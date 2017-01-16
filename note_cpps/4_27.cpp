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

 	double d1 = 25.0;
 	double d2 = d1 + 0.0000000000000001;

 	cout << "Is d1 < d2? " << (d1 < d2) << endl;
 	cout << endl << endl;
}
