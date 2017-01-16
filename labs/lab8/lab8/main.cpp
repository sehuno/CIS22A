#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

// Function that checks whether or not the name is valid
//  - Checks to see that the name only includes characters.
//  - Checks to see that there is only one space in the full name.
//  - If a digit is encountered, it will return invalid.
bool validName(string &str) {
    bool valid = true;
    bool oneSpace = false;
    
    for(int i = 0; i < str.length(); i++){
        if(!isalpha(str[i])) {                 
            if(!oneSpace && isspace(str[i]))
                oneSpace = true;
            else {                                  // When two spaces are encountered for name, it is considered invalid.
                valid = false;
                break;
            }
        }
    }
    return valid;
}

// Function that checks whether or not the score is valid
//  - Checks to see that the characters entered are only digits.
bool validScore(string &str) {
    bool valid = true;
    for(int i = 0; i < str.length(); i++) {
        if(!isdigit(str[i]))
            valid = false;
    }
    return valid;
}



// Function that reads in lines from the input file.
int inputFromFile(ifstream &in, ofstream &error, int &numToBeRead, string (&studs)[1024], int (&studScr)[1024]) {
    string line;
    string nameToBeAdded = "";
    string scoreToBeAdded ="";
    
    int counter = 0;
    int errors = 0;
    bool firstSpaceEncountered = false;
    bool nameEnded = false;
    bool inputInvalid = false;
    
    while(counter != numToBeRead) {
        // Get line
        getline(in, line, '\n');
        
        // Character by character, parse the line
        for(int i = 0; i < line.length(); i++) {
            if(!nameEnded) {                                // While fullName has not been yet parsed in,
                if(isalpha(line[i]))                        //  if character is letter, append to blank string
                    nameToBeAdded.push_back(line[i]);
                else if(isspace(line[i])) {                 //  if it is a space, make sure that only one space has been encounterd
                    if(!firstSpaceEncountered) {            //   - if it is the first space, append to name string
                        nameToBeAdded.push_back(line[i]);   //   - if second space, then end the name
                        firstSpaceEncountered = true;
                    }
                    else                                    //  if it is a third space, then the name is invalid
                        nameEnded = true;
                } else
                    inputInvalid = true;
            } else {                                        // If name is over, the digits that are read in are now part of score.
                if(isdigit(line[i]))
                    scoreToBeAdded.push_back(line[i]);
                else
                    inputInvalid = true;
            }
        }
        
        if(!nameEnded || scoreToBeAdded == "")
            inputInvalid = true;
        
        // If user inputted line was invalid, output error message.
        if(inputInvalid) {
            error.open("error.txt", ofstream::app | ofstream::out);
            error << nameToBeAdded << " " << scoreToBeAdded << "\n";
            error.close();
            errors++;
        }
        else {
            studs[counter] = nameToBeAdded;
            studScr[counter] = atoi(scoreToBeAdded.c_str());
            counter++;
        }
        
        firstSpaceEncountered = false;
        nameEnded = false;
        inputInvalid = false;
        nameToBeAdded = "";
        scoreToBeAdded = "";
    }
    return errors;
}

// Function that reads in lines from standard input
//  function will accept lines as long as they follow the pattern of two words and one number.
void inputFromStdin(int &numScr, string (&studs)[1024], int (&studScr)[1024]){

    string line;
    string nameToBeAdded = "";
    string scoreToBeAdded ="";

    int counter = 0;
    bool firstSpaceEncountered = false;
    bool nameEnded = false;
    bool inputInvalid = false;
    
    cout << "Enter the students full name and test score. Ex.(Eric Oh 100)." << endl << endl;
    cout << "- If any of the student's names or scores are not in the correct format, they will not be considered." << endl;
    cout << "- Correct format requires only letters to be in the name (plus one space) and only digits to be in the score." << endl;
    cout << "*NOTE* - Do NOT put any empty space before the first name or after the score. There should only be two spaces." << endl;
    cin.ignore(1000,'\n');

    // While the numbers of lines wished to be input has not been yet reached
    while(counter != numScr) {
        // Get line
        getline(cin, line, '\n');
        
        // Character by character, parse the line
        for(int i = 0; i < line.length(); i++) {
            if(!nameEnded) {                                // While fullName has not been yet parsed in,
                if(isalpha(line[i]))                        //  if character is letter, append to blank string
                    nameToBeAdded.push_back(line[i]);
                else if(isspace(line[i])) {                 //  if it is a space, make sure that only one space has been encounterd
                    if(!firstSpaceEncountered) {            //   - if it is the first space, append to name string
                        nameToBeAdded.push_back(line[i]);   //   - if second space, then end the name
                        firstSpaceEncountered = true;
                    }
                    else                                    //  if it is a third space, then the name is invalid
                        nameEnded = true;
                } else
                    inputInvalid = true;
            } else {                                        // If name is over, the digits that are read in are now part of score.
                if(isdigit(line[i]))
                    scoreToBeAdded.push_back(line[i]);
                else
                    inputInvalid = true;
            }
        }
        
        if(!nameEnded || scoreToBeAdded == "")
            inputInvalid = true;
        
        // If user inputted line was invalid, output error message.
        if(inputInvalid)
            cout << setw(69) << right << "*Input was invalid*. Please try again." << endl;
        else {
            studs[counter] = nameToBeAdded;
            studScr[counter] = atoi(scoreToBeAdded.c_str());
            counter++;
        }
        
        firstSpaceEncountered = false;
        nameEnded = false;
        inputInvalid = false;
        nameToBeAdded = "";
        scoreToBeAdded = "";
        
        // Output to user the number of remaining entries after every line input.
        if(numScr-counter > 0)
            cout << setw(60) << right << "Remaining number of entries: " << numScr-counter << endl;
    }

}

// Function that writes a line to both stdout and file with correct formatting.
void write(ofstream &out, int width, string line, bool end) {
    // For stdout, set width and write line. If end of the line, write new line.
    cout << setw(width) << left << line;
    if(end)
        cout << endl;
    
    // For stdin, write line and fill in the rest of space with blank char's. If end of line write new line.
    out << line;
    if(end)
        out << "\n";
    else
        while(width-line.length() > 0) {
            for(int i = 0; i < width - line.length(); i++)
                out << " ";
            break;
        }

}


// Function that writes statistics of students scores to both stdout and file
 void writeStatistics(string (&studs)[1024], int (&studScrs)[1024], int numScrs, ofstream &output, int mean, int median, int highest, int lowest) {
     
     output.open("output.txt", ios::out | ios::app);
     
     string line = "";
     
     /* Student Statistics Header */
     line = "== Student Statistics Header ==\n";
     write(output,int(line.length()),line,true);
     
     line = "- Number of Students: " + to_string(numScrs);
     write(output,int(line.length()),line,true);
     
     line = "- Highest Score: " + to_string(highest);
     write(output,int(line.length()),line,true);
     
     line = "- Lowest Score: " + to_string(lowest);
     write(output,int(line.length()),line,true);
     
     line = "- Mean/Average Score: " + to_string(mean);
     write(output,int(line.length()),line,true);
     
     line = "- Median Score: " + to_string(median) + "\n";
     write(output,int(line.length()),line,true);
     
     line = "\n== Statistics for Each Student ==\n";
     write(output,int(line.length()),line,true);
     
     line = "  Legend: [H - Highest] [L - Lowest] [Av - Average] [Med - Median] {> - Above} {< - Below} {= - Equals} {! - Not}\n";
     write(output,int(line.length()),line,true);
     

     /* Statistics Field for Each Student */
     line = "-- Statistics Fields --";
     write(output,int(line.length()),line,true);
     
     line = "  Name            Score     Is Highest Score?   Is Lowest Score?   Is Above/Below Average?   Is Above/Below Median?\n";
     write(output,int(line.length()),line,true);

    // For each student, perform analysis on highest, lowest, mean, and median.
    for(int i = 0; i < numScrs; i++) {
        // Write name and score
        write(output,20, string(studs[i]),false);
        write(output,17, to_string(studScrs[i]), false);

        // Is Student's score the highest?
        if(studScrs[i] == highest)
            write(output,17, "H", false);
        else
            write(output,17, "!H", false);
        
        // Is Student's score the lowest?
        if(studScrs[i] == lowest)
            write(output,23, "L", false);
        else
            write(output,23, "!L", false);
        
        // Is Student's score above, below, or equal to the mean?
        if(studScrs[i] > mean)
            write(output,25, ">Av", false);
        else if(studScrs[i] < mean)
            write(output,25, "<Av", false);
        else
            write(output,25, "=Av", false);
        
        // Is Student's score above, below, or equal to the median?
        if(studScrs[i] > median)
            write(output,20, ">Med", true);
        else if(studScrs[i] < median)
            write(output,20, "<Med", true);
        else
            write(output,20, "=Med", true);
        
    }
    
    // close output fstream
    output.close();
 }

// Function that goes through each element of the students' scores and finds the highest and lowest score along with the average.
void assessStudents(string (&studs)[1024], int (&studScrs)[1024], int numScrs, int &m_mean, int &m_highest, int &m_lowest) {

    int values = 0;
    int sum = 0;
    m_highest = 0;
    m_lowest = 1000;
    m_mean = 0;
    
    for(int i = 0; i < numScrs; i++) {

        // If name and score of student are valid, perform checks.
        if(validName(studs[i])){

            // If student's score is higher than the highest recorded so far, make this the new highest.
            if(studScrs[i] > m_highest)
                m_highest = studScrs[i];

            // If student's score is lower than the lowest recorded so far, make this the new lowest.
            if (studScrs[i] < m_lowest)
                m_lowest = studScrs[i];

            // For each score add to total values so far.
            sum += studScrs[i];

            // Increment total number of values
            values++;
        }
    }
    // Divide total sum of scores so far
    if(values != 0)
        m_mean = sum/values;
}

// Function that finds the median score of students by finding the median of sorted copy of the students' scores array.
int findMedian(int (&studScr)[1024], int numScrs) {

    int newArr[1024];
    bool internalNumSwapped = false;
    bool numSwapped = true;
    int temp;

    // Copy array of students scores into new array
    for(int i = 0; i < numScrs; i++) 
        newArr[i] = studScr[i];

    // Go through each array element and swap ith and i+1th element if the i+1th element is less that the ith element.
    //  - This function ensures that for every array element, the following elements after will be greater than the preceding.
    //  - Array will be traversed while doing swaps as long as ONE element has been swapped
    //  - After the while loop has finished, we know that the array will be sorted from least to greatest
    while(numSwapped) {
        for(int j = 0; j < numScrs - 1; j++) {
            if(newArr[j+1] < newArr[j]) {
                temp = newArr[j];
                newArr[j] = newArr[j+1];
                newArr[j+1] = temp;
                if(internalNumSwapped == false)
                    internalNumSwapped = true;
            }
        }
        numSwapped = internalNumSwapped;
        internalNumSwapped = false;
    }

    // Find the median from a sorted array.
    //  - If even number of elements, take the values of the middle two elements and average them
    //  - If odd number of elements, return the value of the middle element
    if(numScrs % 2 == 0) 
        return (newArr[(numScrs/2)-1] + newArr[numScrs/2]) / 2;
    else {
        return newArr[numScrs/2];
    }
}


int main()
{
    
    int numScores;
    int choice;
    string line;
    string fileName;
    
    int mean;
    int median;
    int highest;
    int lowest;
    
    ifstream input;
    ofstream output;
    ofstream error;
    
    string ericsHeader = "CIS 22A - Lab 8\n A program that performs basic statistics (mean,median,highest,lowest) analysis on students' scores.\n By Eric Sehun Oh.";
    
    string names[1024];
    int scores[1024];
    cout << ericsHeader << endl << endl;
    cout << "How many scores do you wish to analyze?: ";
    cin >> numScores;
    
    // Check that number of scores is correctly an integer and non-negative value
    while (cin.fail() || numScores < 0) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Please enter valid input.";
        cin >> numScores;
    }
    
    // Check that number of scores input are valid
    if(numScores == 0) {
        cout << "No scores to be analyzed! HUZZAH! Terminating program. Good bye ~!" << endl;
        return 0;
    } else if(numScores > 1024) {
        cout << "*Note* - The number of scores that will be analyzed will be the first 1024 entries." << endl;
        numScores = 1024;
    }

    
    cout << endl;
    
    // Display input method choices
    cout << "Which method of input do you wish to use?" << endl;
    cout << "1. From File" << endl;
    cout << "2. From Stdin" << endl;
    
    cout << endl;
    
    // Prompt user for input method choice
    cout << "Enter the integer that corresponds to your choice: ";
    cin >> choice;
    
    // Validate input choice to make sure an integer was entered and that the integer was either 1 or 2.
    while (cin.fail() || choice < 1 || choice > 2) {
        cin.clear();
        cin.ignore(1000,'\n');
        cout << "Please enter valid choice: ";
        cin >> choice;
    }
    cout << endl;

    if(choice == 1) {
        cout << "Enter the name of the file: ";
        cin >> fileName;
        int retVal;
        
        while(cin.fail()) {
            cin.clear();
            cin.ignore(1000,'\n');
            cout << "Please enter file name as a string: ";
            cin >> fileName;
        }
        
        cout << endl;
        
        input.open(fileName.c_str());
        if(input.is_open())
            retVal = inputFromFile(input, error, numScores, names, scores);
        else {
            cout << "Error opening file. Terminating program." << endl;
            return 1;
        }
        
        if(retVal != 0)
            cout << "Error occured while reading in " << retVal << " lines." << endl
            << "Those lines will be written to error.txt and will not be included in analysis." << endl << endl
            << " * Possible reasons for error: " << endl
            << "       (1) Including unnecessary spaces. (Before the full name. After student's score. Or extra space between any of the three properties." << endl
            << "       (2) Name including numbers." << endl
            << "       (3) Scores including letters." << endl
            << "       (4) Name but no score. Or Vice Versa." << endl;
    }
    if(choice == 2)
        inputFromStdin(numScores, names, scores);
    
    cout << endl << endl;
    
    assessStudents(names, scores, numScores, mean, highest, lowest);
    median = findMedian(scores, numScores);
    write(output, int(ericsHeader.length()), ericsHeader, true);
    writeStatistics(names, scores, numScores, output, mean, median, highest, lowest);
    cout << endl << endl;
    
    system("PAUSE");
    return 0;
}