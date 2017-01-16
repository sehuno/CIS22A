// CIS 22A
// Lab 2A - C++ Program that computes Joe's stock summary
// Name: Eric Sehun Oh

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	/*  Declared Variables  */
    
    // For purchase
	int p_shares;           // # of purchased shares
	double p_price;         // purchased price of each stock
    double p_com_prcnt;     // purchase commision percentage
    double p_com_amt;       // purchase commision amount
    double p_tot_spnt;      // total spent for purchase

	// For sale
	int s_shares;           // # of sold shares
	double s_price;         // sale price per stock
	double s_com_prcnt;     // sale commision percentage
    double s_com_amt;       // sale commision amount
    double s_tot_gnd;       // total gained from sale
    
    
    /*  User Input  */
    cout << fixed;
    
    cout << setw(35) << right << "Joe's Stock Ventures" << endl << endl;
    
	cout << setw(50) << right << "Number of shares purchased by Joe? ";
	cin >> p_shares;
	cout << setw(50) << right << "Price per share when purchased? ";
	cin >> p_price;
	cout << setw(50) << right << "Purchase commision percentage for stock broker? ";
    cin >> p_com_prcnt;
    
    // Check to see if the input number for commision percentage is int or double
    //  - If static_cast<int> of input is greater than 0, than realistically that makes no sense
    //     * That would imply that from the sale, the stock broker is profiting 1x+ than Joe's, which is impossible
    // Thus, if static_cast<int> of variable is equal to zero, this implies the input percentage is already as a double
    //  - This scenario it does not enter the loop and code continues
    while(static_cast<int>(p_com_prcnt) != 0)
    {
        cin.ignore();
        cout << setw(50) << right << "-Please enter percentage as a double-:";
        cin >> p_com_prcnt;
    }
    
    cout << endl;
    
    // Number of Shares
    cout << setw(50) << right << "Number of shares sold by Joe? ";
    cin >> s_shares;
    
    // Check to see if the number of sold shares is less than purchased shares
    // If not, ignore input and output error message
    while(s_shares > p_shares) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Error: Cannot sell more shares than purchased." << endl;
        cout << setw(50) << right << "Number of shares sold by Joe? ";
        cin >> s_shares;
    }

    // Price Per Share
	cout << setw(50) << right << "Price per share when sold? ";
	cin >> s_price;
    
    // Sale Commision Percentage
	cout << setw(50) << right << "Sale commision percentage for stock broker? ";
	cin >> s_com_prcnt;
    while(static_cast<int>(s_com_prcnt) != 0)
    {
        cin.ignore();
        cout << setw(50) << right << "-Please enter percentage as a double-:";
        cin >> s_com_prcnt;
    }
    
    
    /*  Output of Stock Summary  */
    
    cout << endl;
    cout << setw(62) << right << "=== Joe's Stock Synopsys ===" << endl << endl;
    cout << setw(18) << right << "// Purchase //" << endl;
    cout << setw(20) << right << "Number of Stocks"
         << setw(25) << right << "Price Per Stock ($)"
         << setw(25) << right << "Commission Amount ($)"
         << setw(25) << right << "Total Spent ($)" << endl;
    
    // 1. Calculate commision amount for broker regarding stock purchase
    // 2. Calculate total amount spent for purchase
    p_com_amt = double(p_shares)*p_price*p_com_prcnt;
    p_tot_spnt = p_com_amt + double(p_shares)*p_price;
    
    cout << setw(20) << right << p_shares
         << setw(25) << right << setprecision(2) << p_price
         << setw(25) << right << setprecision(2) << p_com_amt
         << setw(25) << right << setprecision(2) << p_tot_spnt <<  endl << endl;

    
    cout << setw(17) << right << "//   Sale  //" << endl;
    
    cout << setw(20) << right << "Number of Stocks"
         << setw(25) << right << "Price Per Stock ($)"
         << setw(25) << right << "Commission Amount ($)"
         << setw(25) << right << "Total Earned ($)" << endl;
    
    // 1. Calculate commision amount for broker regarding stock sale
    // 2. Calculate total amount gained from sale
    s_com_amt = double(s_shares)*s_price*s_com_prcnt;
    s_tot_gnd = s_price*double(s_shares) - s_com_amt;
    
    cout << setw(20) << right << s_shares
         << setw(25) << right << setprecision(2) << s_price
         << setw(25) << right << setprecision(2) << s_com_amt
         << setw(25) << right << setprecision(2) << s_tot_gnd <<  endl << endl << endl;
    
    // Calculate total profit which is total gained from stock sale
    //  - Negative value indicates a loss of profit
    cout << setw(19) << right << "Total Profit: $" << s_tot_gnd - (p_price*s_shares)*(double(1)+p_com_prcnt) << endl << endl;
    
	system("pause");
	return 0;
}