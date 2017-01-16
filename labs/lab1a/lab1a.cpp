// CIS 22A 
// Lab 1A - C++ Program that computes tax and tip on restaurant bill
// Name: Eric Sehun Oh

#include <iostream>
#include <iomanip> 	// for setw function that prettifies std output 

using namespace std;

int main()
{	
	// initialized values for mealCost, tax, and tip
	double mealCost = 44.50;
	double tax = 0.0675;
	double tip = 0.15;

	// to ensure that setprecision(2) for double calculations 
	// start fixed from decimal point
	cout << fixed;

	// set w is for 
	cout << right << setw(15) << "Meal Cost: $" << setprecision(2) << mealCost << endl;
	cout << right << setw(15) << "Tax Amount: $" << setprecision(2) << mealCost*tax << endl;
	cout << right << setw(15) << "Tip Amount: $" << setprecision(2) << mealCost*(1+tax)*tip << endl;
	cout << right << setw(20) << "------------------" << endl;
	cout << right << setw(15) << "Total Bill: $" << setprecision(2) << (mealCost*(1+tax))*(1+tip) << endl;

	system("pause");
	return 0;
}
