#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int air_speed = 1140;
    int water_speed = 4900;
    int steel_speed = 16400;
    int choice;
    int distance;
    
    cout << "CIS 22A - Lab 4A - Speed of Sound" << endl;
    cout << "Program that computes sound's travel time of a certain distance in a medium." << endl;
    cout << "By Eric Sehun Oh" << endl << endl;
    
    cout << "/* Pseudocode */" << endl;
    cout << "1. Initialize variables for speeds of sound in air, in water, and in steel." << endl;
    cout << "2. Declare variables for choice and distance so that we can later prompt the user for his/her input." << endl;
    cout << "3. Display a menu containing possible choices of medium for sound to travel in [(1) air, (2) water, (3) steel]." << endl;
    cout << "4. Prompt user for their choice of medium and save input into int variable 'choice'." << endl;
    cout << "5. Check whether their choice was a valid choice. If not valid, display error message and end program." << endl;
    cout << "6. Prompt user for the distance (feet) they would like to travel and input into int variable 'distance'." << endl;
    cout << "7. Check to see if distance is less than zero; if less than zero, display error message and end program." << endl;
    cout << "8. Display the amount of time that it would take for sound to travel in the medium by dividing the distance by the speed of sound in the chosen medium." << endl;
    
    
    cout << endl << endl << endl << endl;
    cout << setw(85) << right << "Speed of Sound in a Medium" << endl << endl;
    cout << setw(95) << right << "Please select from the following mediums:" << endl;
    cout << setw(73) << right << "(1) Air" << endl;
    cout << setw(75) << right << "(2) Water" << endl;
    cout << setw(75) << right << "(3) Steel" << endl << endl;
    cout << setw(100) << right << "Please enter the corresponding number to your choice: ";
    cin >> choice;
    cout << endl;
    
    if (choice > 3 || choice < 1)
    {
        cout << "ERROR - Input was not a valid choice from those listed above. Please try again." << endl << endl;
        return 1;
    }

    cout << setw(100) << right << "Please enter the distance you wish to travel in feet: ";
    cin >> distance;
    
    if (distance < 0)
    {
        cout << endl << "ERROR - Distance cannot be less than zero. Please try again." << endl << endl;
        return 1;
    }
    
    cout << endl << endl;
    cout << setw(53) << right << "In the medium of ";
    switch (choice) {
        case 1:
            cout << fixed;
            cout << "AIR, it will take sound ";
            cout << setprecision(4) << double(distance) / double(air_speed);
            cout << " seconds to travel " << distance << " feet." << endl << endl;
            break;
        case 2:
            cout << fixed;
            cout << "WATER, it will take sound ";
            cout << setprecision(4) << double(distance) / double(water_speed);
            cout << " seconds to travel " << distance << " feet." << endl << endl;
            break;
        case 3:
            cout << fixed;
            cout << "STEEL, it will take sound ";
            cout << setprecision(4) << double(distance) / double(steel_speed);
            cout << " seconds to travel " << distance << " feet." << endl << endl;
            break;
    };
    
    
    system("pause");
    return 0;
}