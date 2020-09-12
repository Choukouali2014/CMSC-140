/*
 * Class: CMSC140 CRN
 * Instructor:
 * Homework Chapter 5 problem 1
 * Computer/Platform/Compiler:Hp/Visual studio
 * Description: (Give a brief description for Project)
 * (Save and Get Info) : Write a program that asks for the user's name, phone number, and address.
 *The program then saves all information in a data file (each information in one line) named list.txt.
 *Finally, the program reads the information from the file and displays it on the screen  in the following format:
*Name:                  User's Name
*Phone Number: User's Phone Number
*Address:             User's Street Address
					   User's City, State, and Zip Code
 * Due Date:7/12/2020
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Frank Choukouali

*/
#include <iostream>
#include <string>
#include<iomanip>
#include <fstream>
using namespace std;

int main()
{

	ofstream outputFile;//Declaration of a outputFile allowing to write in a file
	const string fichier = "list.txt";
	string name, adresse, phoneNumber, streetAdress, city, state, zipCode;
	cout << "Please, enter your name : " << endl;
	getline(cin, name);
	cout << "Please, enter your phone number such as (xxx)xxx-xxxx : " << endl;
	getline(cin, phoneNumber);
	cout << "Please, enter your street address : " << endl;
	getline(cin, streetAdress);
	cout << "Please, enter your city : " << endl;
	getline(cin, city);
	cout << "Please, enter your State : " << endl;
	getline(cin, state);
	cout << "Please, enter your Zip Code : " << endl;
	getline(cin, zipCode);

	outputFile.open(fichier);// open the file here;
	if (outputFile) {
		outputFile << "Name :	    " << name << endl;
		outputFile << "Phone Number: " << phoneNumber << endl;
		outputFile << "Adress:       " << streetAdress << endl;
		outputFile << setw(25) << city << " , " << state << " , " << zipCode << endl;
	}
	else {
		cout << "Error opening file.\n";
	}



	outputFile.close();
	cout << endl;
	cout << "-----------------The Display ---------------" << endl;
	ifstream inputFile;//Declaration of a inputFile allowing to read in a file
	inputFile.open(fichier); // open the file here;
	if (inputFile) {
		string ligne; //A variable to store the lines read
		//getline(inputFile, ligne) will read a full line 
		while (getline(inputFile, ligne)) //Until we are at the end, we read
		{
			cout << ligne << endl;// display each line
		}

	}
	else {
		cout << "Error opening file.\n";
	}


	inputFile.close();
	return 0;
}