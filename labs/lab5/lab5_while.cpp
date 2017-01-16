//
//  main.cpp
//  lab5
//
//  Created by Eric Oh on 5/20/15.
//  Copyright (c) 2015 Eric Oh. All rights reserved.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n_days;
    int day_iterator = 1;
    long long int day_pay = 1;
    long long int total_pay;
    
    cout << "// CIS 22A - Lab 5 [Using While-Loop]" << endl;
    cout << "// A program that calculates the user's salary based on number of days worked." << endl;
    cout << "// By Sehun Eric Oh" << endl << endl;

    cout << setw(55) << right << "Welcome to Earnings Calculator!" << endl << endl;
    
    
    cout << "Enter the number of days worked: ";
    cin >> n_days;
    
    while(n_days < 1) {
        cin.clear();
        cin.ignore(1000,'\n');
        if(n_days == 0)
            cout << "   0 days?! This app is designed for the employed! *joke*" << endl;
        cout << "- Please enter valid number of days worked: ";
        cin >> n_days;
    }
    
    cout << endl;
    cout << setw(8) << left<< "Day" << setw(20) << left<< "Day Salary ($)" << setw(25) << left << "Total Salary ($)" << endl;
    
    while(day_iterator <= n_days) {
        cout << fixed;
        if (double(day_pay)/double(100) < 0) {
            cout << "Your earnings are already over 90 trillion. Contact a financial consulting firm instead." << endl << "YOU'RE BREAKING ME!!" << endl;
            break;
        }
        cout << setw(2) << right << day_iterator << " " << setw(14) << right << setprecision(2) << double(day_pay)/double(100);
        total_pay += day_pay;
        cout << " " << setw(20) << right << setprecision(2) << double(total_pay)/double(100) << endl;
        day_pay *=2;
        day_iterator++;
    }

}
