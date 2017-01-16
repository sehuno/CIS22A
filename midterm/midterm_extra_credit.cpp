// CIS 22A Midterm CPP
// Program that asks user to guess secret number
// By Sehun Eric Oh

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main()
{
    unsigned seed = time(0);
    srand(seed);
    
    bool bFound = false;
    bool lastAttemptInvalid = false;
    int numTry = 0;
    int userGuess;
    int correctNum = rand() % 100;
    
    string greater = "Your number is greater than what I have in mind. Guess lower...";
    string lower = "You number is less than what I have in mind. Go higher!";
    string invalid = "Please enter a valid number between 0 to 100. You've lost one attempt.";
    
    cout << setw(60) << right << "Welcome to the Secret Number Guessing Game!" << endl;
    cout << "I'm thinking of a number in the range from 0 to 100. Can you guess correctly?!" << endl;
    
    
    cout << endl << "Enter your guess: ";
    cin >> userGuess;
    numTry ++;
    if(userGuess > 100 || userGuess < 0) { cout << invalid << endl; lastAttemptInvalid = true; }
    userGuess == correctNum ? bFound = true : bFound = false;
    if (bFound) {
        cout << endl << "You guessed the secret number, " << correctNum << ", in " << numTry << " tries! You win!" << endl << endl;
        system("pause");
        return 0;
    }
    if(!lastAttemptInvalid)
        userGuess < correctNum ? cout << lower << endl : cout << greater << endl;
    lastAttemptInvalid = false;
    
    
    
    cout << endl << "Enter your guess: ";
    cin >> userGuess;
    numTry ++;
    if(userGuess > 100 || userGuess < 0) { cout << invalid << endl; lastAttemptInvalid = true; }
    userGuess == correctNum ? bFound = true : bFound = false;
    if (bFound) {
        cout << endl << "You guessed the secret number, " << correctNum << ", in " << numTry << " tries! You win!" << endl << endl;
        system("pause");
        return 0;
    }
    if(!lastAttemptInvalid)
        userGuess < correctNum ? cout << lower << endl : cout << greater << endl;
    lastAttemptInvalid = false;
    
    
    
    cout << endl << "Enter your guess: ";
    cin >> userGuess;
    numTry ++;
    if(userGuess > 100 || userGuess < 0) { cout << invalid << endl; lastAttemptInvalid = true; }
    userGuess == correctNum ? bFound = true : bFound = false;
    if (bFound) {
        cout << endl << "You guessed the secret number, " << correctNum << ", in " << numTry << " tries! You win!" << endl << endl;
        system("pause");
        return 0;
    }
    if(!lastAttemptInvalid)
        userGuess < correctNum ? cout << lower << endl : cout << greater << endl;
    lastAttemptInvalid = false;
    
    
    
    cout << endl << "Enter your guess: ";
    cin >> userGuess;
    numTry ++;
    if(userGuess > 100 || userGuess < 0) { cout << invalid << endl; lastAttemptInvalid = true; }
    userGuess == correctNum ? bFound = true : bFound = false;
    if (bFound) {
        cout << endl << "You guessed the secret number, " << correctNum << ", in " << numTry << " tries! You win!" << endl << endl;
        system("pause");
        return 0;
    }
    if(!lastAttemptInvalid)
        userGuess < correctNum ? cout << lower << endl : cout << greater << endl;
    lastAttemptInvalid = false;
    
    
    
    cout << endl << "Enter your guess: ";
    cin >> userGuess;
    numTry ++;
    if(userGuess > 100 || userGuess < 0) { cout << invalid << endl; lastAttemptInvalid = true; }
    userGuess == correctNum ? bFound = true : bFound = false;
    if (bFound) {
        cout << endl << "You guessed the secret number, " << correctNum << ", in " << numTry << " tries! You win!" << endl << endl;
        system("pause");
        return 0;
    }
    if(!lastAttemptInvalid)
        userGuess < correctNum ? cout << lower << endl : cout << greater << endl;
    lastAttemptInvalid = false;
    
    
    
    cout << endl << "Enter your guess: ";
    cin >> userGuess;
    numTry ++;
    if(userGuess > 100 || userGuess < 0) { cout << invalid << endl; lastAttemptInvalid = true; }
    userGuess == correctNum ? bFound = true : bFound = false;
    if (bFound) {
        cout << endl << "You guessed the secret number, " << correctNum << ", in " << numTry << " tries! You win!" << endl << endl;
        system("pause");
        return 0;
    }
    if(!lastAttemptInvalid)
        userGuess < correctNum ? cout << lower << endl : cout << greater << endl;
    lastAttemptInvalid = false;
    
    
    
    cout << endl << "Enter your guess: ";
    cin >> userGuess;
    numTry ++;
    if(userGuess > 100 || userGuess < 0) { cout << invalid << endl; lastAttemptInvalid = true; }
    userGuess == correctNum ? bFound = true : bFound = false;
    if (bFound) {
        cout << endl << "You guessed the secret number, " << correctNum << ", in " << numTry << " tries! You win!" << endl << endl;
        system("pause");
        return 0;
    }
    if(!lastAttemptInvalid)
        userGuess < correctNum ? cout << lower << endl : cout << greater << endl;
    lastAttemptInvalid = false;
    
    
    
    cout << endl << "Enter your guess: ";
    cin >> userGuess;
    numTry ++;
    if(userGuess > 100 || userGuess < 0) { cout << invalid << endl; lastAttemptInvalid = true; }
    userGuess == correctNum ? bFound = true : bFound = false;
    if (bFound) {
        cout << endl << "You guessed the secret number, " << correctNum << ", in " << numTry << " tries! You win!" << endl << endl;
        system("pause");
        return 0;
    }
    
    cout << endl << "Sorry, you,ve lost! You've run out of attempts. The secret number was " << correctNum << endl << endl;
    
    cout << "Thank you for playing the Secret Number Guessing Game designed by Sehun Oh!" << endl << endl;
    
    system("pause");
    return 0;
    
}