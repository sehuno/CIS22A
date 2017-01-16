//
//  main.cpp
//  FileCopy
//
//  Created by Eric Oh on 6/2/15.
//  Copyright (c) 2015 Eric Oh. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream inputFile;
    inputFile.open("input.txt", ios::in);
    string content = "";
    
    for(int i = 0 ; inputFile.eof()!= true; i++)
        content += inputFile.get();
    
    inputFile.close();
    
    ofstream outputFile;
    outputFile.open("output.txt", ios::out);
    
    outputFile << content;
    
    outputFile.close();
    
    
}
