// CIS 22A - Lab 7
// By Eric Sehun Oh
// Program that creates output.txt file with each word line by line in reverse order with word length next to it


#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main() 
{
	// ARRAY DECLARATIONS // 
	string textContent[128];	/* word array */
	int contentLength[128];		/* word length array */


	
	// VARIABLES USED // 
	string word;	
	int itemIterator = 0;		
	int largestLength = 0;
	int numWords = 0;
	int ifstream_iter_count;



	// FILE STREAM DECLARATIONS //
	/* 
		The four file streams declared below will each serve different purposes
			- checkFile: checks whether or not input file exists; otherwise, will output an error message
			- assessElements: assesses the input file to figure out the number of words and the largest length to *prettify* output txt file.
			- parseFile: will go through each word by word and put them into the arrays declared above
			- outputFile: the file stream which will be used to write to the output.txt file.
	*/ 
	ifstream checkFile;			
	ifstream assessElements;
	ifstream parseFile;
	ofstream outputFile;



	// FILE CHECK // 
	/* Checks to see if file exists; otherwise, outputs error messages and ends program with exit code 1 */
	checkFile.open("input.txt");
	// If file was not opened, then the file does not exist. Output error msg.
	if(!checkFile.is_open()) {
		cout << "Error opening input file. Exited with Error Code 1." << endl;
		return 1;
	}
	checkFile.close();



	// FILE ASSESSMENT //
	/* Two things I look for with this fstream is the number of words and the largest length of word in the file 
		- The number of words in the file will aid in writing to the output file backwards, which will be explained later 
		- The largest length of word only serves to *prettify* the output.txt when using the iomanip set(w) function
	*/
	assessElements.open("input.txt");
	while(assessElements >> word) {
		// For every word, increment word counter
		numWords++;

		// Keeps track of the largest length.
		// 	If new largest length encountered, make that the largest length
		if(word.length() > largestLength) 
			largestLength = word.length();
	}
	assessElements.close();



	// WRITING TO OUTPUT //
	/* 
		As we are needed to write the output file in reverse order, how do we accomplish this task???
		
		Listed Failed Attempts
		1. Read the file in reverse? TOO COMPLICATED (ノಠ益ಠ)ノ彡┻━┻
		2. When array is full concatenate all string array elements into empty string and then print out string later? 
			"Write out your string array and corresponding string length array to an output file" 
				...Oh so it can't be from a string that I defined?? (ノಠ益ಠ)ノ彡┻━┻
		3. Use a stringstream so tokenization is easier???
			I'll probably get docked points for using something we "didn't learn in class" *shudder* (ノಠ益ಠ)ノ彡┻━┻

		SOLUTION which I think matches specifications but isn't completely efficient???
		1. The number of words in the input file is used to figure out HOW MANY TIMES the filestream parsing is done.
		2. We seek to parse in 128 WORD CHUNKS. Thus, if there are 129 words there will be two fstream iterations.
			i. For the first iteration, we look for the last chunk of words which will have (numWords - (iteration-1)*128) words.
				- To get to the last chunk, we will skip (iteration-1)*128 words.
				- The last chunk will be written into the 128 word string array (which most likely won't be filled completely)
				- From that array, we will write to output file backwards (starting from the last element of the array and ending at the beginning of the array)
			ii. For every file stream iteration afterwards, we will write the 128 word chunk that came before and write to output file backwards.
		???

		pretty confusing description i know...
		~ please bear with me ~
	*/

	// Set file stream iteration count to the number of words divided by 128 + 1;
 	// 	- If 1 word, still 1 iteration.
	// 	- If 129 words, 2 iterations 
	ifstream_iter_count = numWords/128 + 1; 

	// Open the output file we wish to write to
	outputFile.open("output.txt");

	// The for loop iterator starts at the file stream iteration count and is decremented
	//  since we are accessing the file elements at the end of the file for the first file stream iteration
	// 	and moving towards the beginning of the input file
	for(int i = ifstream_iter_count; i > 0; i--) {
		parseFile.open("input.txt");

		itemIterator = numWords - (i-1)*128;	/* itemIterator is used to keep track of the array element index of the chunk */

		for(int j = 0; j < (i-1)*128; j++) {	/* Skip (i-1)*128 words to get to chunk desired. i = ifstream_iter_count */
			parseFile >> word;
		}		

		for(int k = 0; k < itemIterator; k++) {	/* When at the chunk we are looking for add those words into array for word and word length */
			parseFile >> word;
			textContent[k] = word;
			contentLength[k] = word.length();
  		}

  		/* 
  			- Write to output file the chunk of words that were input into the array.
			- The for loop (iterator/initialization idk the word for it) starts at itemIterator - 1 since we start at the end of the array
		*/
  		for(int l = itemIterator - 1; l > -1; l--) {
  			outputFile << setw(largestLength + 1) << left << textContent[l] << contentLength[l] << endl;
  		}
		numWords = numWords - itemIterator;
	
		parseFile.close();
	}

	outputFile.close();

	system("PAUSE");
	return 0;
}