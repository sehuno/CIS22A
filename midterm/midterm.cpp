// CIS 22A Midterm CPP 
// Program that asks user to guess secret number
// By Sehun Eric Oh

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	unsigned seed = time(0);
	srand(seed);

	bool bFound = false;
	int numTry = 0;
	int userGuess;

	string greater = "Your number is greater than what I have in mind. Guess lower...";
	string lower = "You number is less than what I have in mind. Go higher!";

	int correctNum = rand() % 100;

	cout << "Welcome to the Secret Number Guessing Game!" << endl;
	cout << "I'm thinking of a number in the range from 0 to 100. Can you guess correctly?!" << endl;
	
	cout << endl << "Enter your guess: ";
	cin >> userGuess;
	if (userGuess > correctNum) { cout << greater << endl; numTry++; }
	else if (userGuess < correctNum) { cout << lower << endl; numTry++;}
	else bFound = true;
	if (bFound) {
		cout << endl << "You guessed the secret number, " << correctNum << ", in " << numTry + 1 << " tries! You win!" << endl << endl;
		system("pause");
		return 0;
	}

	cout << endl << "Enter your guess: ";
	cin >> userGuess;
	if (userGuess > correctNum) { cout << greater << endl; numTry++; }
	else if (userGuess < correctNum) { cout << lower << endl; numTry++; }
	else bFound = true;
	if (bFound) {
		cout << endl << "You guessed the secret number, " << correctNum << ", in " << numTry + 1 << " tries! You win!" << endl << endl;
		system("pause");
		return 0;
	}

	cout << endl << "Enter your guess: ";
	cin >> userGuess;
	if (userGuess > correctNum) { cout << greater << endl; numTry++; }
	else if (userGuess < correctNum) { cout << lower << endl; numTry++; }
	else bFound = true;
	if (bFound) {
		cout << endl << "You guessed the secret number, " << correctNum << ", in " << numTry + 1 << " tries! You win!" << endl << endl;
		system("pause");
		return 0;
	}

	cout << endl << "Enter your guess: ";
	cin >> userGuess;
	if (userGuess > correctNum) { cout << greater << endl; numTry++; }
	else if (userGuess < correctNum) { cout << lower << endl; numTry++; }
	else bFound = true;
	if (bFound) {
		cout << endl << "You guessed the secret number, " << correctNum << ", in " << numTry + 1 << " tries! You win!" << endl << endl;
		system("pause");
		return 0;
	}

	cout << endl << "Enter your guess: ";
	cin >> userGuess;
	if (userGuess > correctNum) { cout << greater << endl; numTry++; }
	else if (userGuess < correctNum) { cout << lower << endl; numTry++; }
	else bFound = true;
	if (bFound) {
		cout << endl << "You guessed the secret number, " << correctNum << ", in " << numTry + 1 << " tries! You win!" << endl << endl;
		system("pause");
		return 0;
	}

	cout << endl << "Enter your guess: ";
	cin >> userGuess;
	if (userGuess > correctNum) { cout << greater << endl; numTry++; }
	else if (userGuess < correctNum) { cout << lower << endl; numTry++; }
	else bFound = true;
	if (bFound) {
		cout << endl << "You guessed the secret number, " << correctNum << ", in " << numTry + 1 << " tries! You win!" << endl << endl;
		system("pause");
		return 0;
	}

	cout << endl << "Enter your guess: ";
	cin >> userGuess;
	if (userGuess > correctNum) { cout << greater << endl; numTry++; }
	else if (userGuess < correctNum) { cout << lower << endl; numTry++; }
	else bFound = true;
	if (bFound) {
		cout << endl << "You guessed the secret number, " << correctNum << ", in " << numTry + 1 << " tries! You win!" << endl << endl;
		system("pause");
		return 0;
	}

	cout << endl << "Enter your guess: ";
	cin >> userGuess;
	if (userGuess == correctNum)
		bFound = true;
	else
		bFound = false; 

	if (bFound) {
		cout << endl << "You guessed the secret number, " << correctNum << ", in " << numTry + 1 << " tries! You win!" << endl << endl;
		system("pause");
		return 0;
	}
	else
		cout << endl << "Sorry, you,ve lost! You've run out of attempts. The secret number was " << correctNum << endl << endl;

	/* 
	while (numTry < 8 && !bFound)
	{
		cout << endl << "Enter your guess: ";
		cin >> userGuess;

		if (userGuess > correctNum) {
			cout << (numTry == 7 ? "" : greater) << endl;
			numTry++;
		}
		else if (userGuess < correctNum) {
			cout << (numTry == 7 ? "" : lower) << endl;
			numTry++;
		}
		else 
			bFound = true;
	}
	*/ 

	cout << "Thank you for playing the Secret Number Guessing Game designed by Sehun Oh!" << endl << endl;

	system("pause");
	return 0;
}