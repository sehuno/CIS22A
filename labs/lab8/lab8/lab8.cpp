#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main() 
{

/* Use array(s) of student names and test scores - your choice of a 2-D array or parallel arrays.

The program will ask the user for the number of scores (for array size), 
and the names and scores from either a file or user input to screen - create an input function.  
The student name should be of the format "firstname lastname".  
Name and score should be accepted on the same line.
	Maximum number of scores should be no more than 1024.
	Perform proper input validation.
	Write one or more functions to:
		Determine lowest score of the entire set
		Determine highest score of the entire set
		Calculate mean/average score of the set
		Determine median score of the set, i.e. the score which is greater than half the scores of the set but lower than other half of the scores.
	
	Write a function to write formatted output to both screen and an output file.  Your output will print the following for each student:
		A header statistic section of number of scores, lowest, highest, mean and median scores.
		This will be followed by details for each student per line in the same order of names as the input -
			Student Name
			Student Score
			Is student's score the lowest score
			Is student's score the highest score
			Is student's score above or below mean
			Is studen'ts score above or below median

	Ensure proper prompting and providing useful interactivity to the user.

	Provide pseudo-code in proper format in the name block of the program as well as needed comments.
	
	Upload 3 files:
		Your program file
		Your input format file with data
		Your output file with formatted output.

*/
	int numScores;
	int choice;
	string fileName;

	ifstream input;

	string names[1024];
	int scores[1024];

	cout << "How many number of scores do you wish to analyze?";
	cin >> numScores;
	if(numScores > 1024) {
		cout << "*Note* - The number of scores that will be analyzed will be the first 1024 entries." << endl;
	}

	cout << endl << endl;

	cout << "Which method of input do you wish to use?" << endl;
	cout << "1. From file" << endl;
	cout << "2. From stdin" << endl;

	cout << "Enter the integer that corresponds to your choice: ";
	cin >> choice;

	// while(cin.fail()) {
	// 	cin.clear();
	// 	cout << "pelase enter valid choice";
	// 	cin >> choice;
	// }

	system("PAUSE");
	return 0;
}