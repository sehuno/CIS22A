// CIS 22A - Lab 3B
// Program that calculates whether the month times the day entered multiplies to the year
// By: Eric Sehun Oh

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    /* VARIABLES */
    int month;
    int day;
    int year;
    
    /* START DISPLAY */
    cout << setw(35) << right << "Welcome to Magic Dates!" << endl << endl;
    
    /* MONTH */
    // Prompt user for month input
    cout << setw(30) << right << "Please enter the month: ";
    cin >> month;
    
    // Check to see if user input a numeric input in the form of an int
    //      cin.fail() will return true if input does not match the data type of int
    // If not numeric input, end program early with error code 1
    if(cin.fail()) {
        cout << setw(50) << right << "*ERROR* - Month was not entered in numeric form." << endl << endl;
        return 1;
    }
    
    // Validate that the value entered for month is within the legitimate range
    // If not a valid input, end program early with error code 1.
    if(month < 1 || month > 12) {
        cout << setw(50) << right << "*ERROR* - Not a valid input for month." << endl << endl;
        return 1;
    }
    cout << endl;
    
    /* DAY */
    // Prompt user for day input
    cout << setw(30) << right << "Please enter the day: ";
    cin >> day;
    
    // Check to see if user input a numeric input in the form of an int
    //      cin.fail() will return true if input does not match the data type of int
    // If not numeric input, end program early with error code 1
    if (cin.fail()) {
        cout << setw(50) << right << "*ERROR* - Day was not entered in numeric form." << endl << endl;
        return 1;
    }
    
    // Validate that the value entered for day is within the legitimate range
    // If not a valid input, end program early with error code 1.
    if(day < 1 || day > 31) {
        cout << setw(50) << right << "*ERROR* - Not a valid input for day." << endl << endl;
        return 1;
    }
    cout << endl;
    
    /* YEAR */
    // Prompt user for year input
    cout << setw(30) << right <<  "Please enter the year: ";
    cin >> year;
    
    // Check to see if user input a numeric input in the form of an int
    //      cin.fail() will return true if input does not match the data type of int
    // If not numeric input, end program early with error code 1
    if (cin.fail()) {
        cout << setw(50) << right << "*ERROR* - Year was not entered in numeric form." << endl << endl;
        return 1;
    }
    
    // Validate that the value entered for year is within the legitimate range
    // If not a valid input, end program early with error code 1.
    if(year < 0 || year > 99) {
        cout << setw(50) << right << "*ERROR* - Not a valid input for year" << endl << endl;
        return 1;
    }

    cout << endl << endl;
    
    /* OUTPUT */
    
    // Check to see if the month multiplied by the day equals the value for year
    // If so, the date is magic. If not, the date is crap. Display accordingly.
    // Exit with error code 0 which means program ended successfully.
    if (month*day == year)
        cout << setw(25) << right << "The date is magic!" << endl << endl;
    else
        cout << setw(27) << right << "The date is not magic..." << endl << endl;
    
    system("pause");
    return 0;
}
