// Program Name: Line Numbers
// Purpose: Read the contents of one file, modify the data into a code, then write 
//          the coded contents out to a second file
// Author: Daniel Wong
// Date Modified: 10/17/2024

#include <iostream>
using namespace std;

#include <fstream>
#include <iomanip>

int main()
{
    ifstream inFile;
    char inName[200];
    string inputLine = "";
    int lineNumber = 1;

    cout << "Enter the input file name: ";
    cin >> inName;
    inFile.open(inName);

    if(!inFile)
    {
        cout << "Error opening file" << inName << endl;
        return 1;
    }
    
    while (!inFile.eof())
    {
        getline(inFile, inputLine, '\n');
        cout << setw(4) << right << lineNumber << ": " << inputLine << endl;
    }

    inFile.close();
    return 0;
}