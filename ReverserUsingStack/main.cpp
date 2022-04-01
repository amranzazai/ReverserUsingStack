/*
 * main.cpp
 *
 *  Created on: Mar 1, 2021
 *      Author: amranzazai
 */
#include <string>
#include "WordStack.h"
#include "Word.h"
#include "Reverser.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ifstream inputFile; //creating file object to read from
	ofstream outputFile; //creating file object to write to
	string fileName; //holds the input file name
	string line; //holds each line of the input file
	string fileContents; //holds entire contents  of input file
	string reversedString; //holds the reversed word
	string outName; //holds output file name


	cout<<"Enter an input file name: \n"; //getting user input for file names
	cin>>fileName;

	inputFile.open(fileName); //opening file

	cout<<"Enter an output file name: \n";
	cin>>outName;

	outputFile.open(outName);

	if(inputFile)  //if the file has successfully opened process it
	{
		while (getline(inputFile,line)) //reading the input file line by line
		{
		         fileContents += line; //storing  the contents of the input file into fileContents
		         cout<<line<<endl;  //displaying the original file
		}


		Reverser r; //creating a reverser object
		reversedString = r.reverse(fileContents); //storing the reverse of file contents in  reversedString



		if(outputFile) //if the file has successfully opened process it
		{
			outputFile << reversedString; //writes the entire string to the output file
			cout << reversedString;
		}
		else //otherwise display an  error message
		{
			cout<<"Error opening output file. \n";
		}
		inputFile.close(); //closing  both files
		outputFile.close();

	}
	else//otherwise display an  error message
		cout<<"Error opening input file. \n";

	return 0;
}



